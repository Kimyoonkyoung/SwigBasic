# Include python
# modify to Python version (2.7)
find_package( PythonLibs 2.7 REQUIRED )
include_directories( ${PYTHON_INCLUDE_PATH} )

set( CMAKE_SWIG_FLAGS "")
set_source_files_properties( ../${PROJECT_NAME}.i PROPERTIES CPLUSPLUS ON )
include_directories( ../ )

# Add swig module
swig_add_module( ${PROJECT_NAME} python ../${PROJECT_NAME}.i )
swig_link_libraries( ${PROJECT_NAME} ${PROJECT_NAME} ${PYTHON_LIBRARIES} )

# Files to install with Python
set( PYTHON_INSTALL_FILES
        ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.py
        ${CMAKE_CURRENT_BINARY_DIR}/_${PROJECT_NAME}.so )

# Configure setup.py and copy to output directory
set( SETUP_PY_IN ${CMAKE_CURRENT_SOURCE_DIR}/setup.py.in )
set( SETUP_PY_OUT ${CMAKE_CURRENT_BINARY_DIR}/setup.py )
configure_file( ${SETUP_PY_IN} ${SETUP_PY_OUT} )

# Declare install target for python
#install(TARGETS swig_example
#        COMMAND "${PYTHON_EXECUTABLE} setup.py"
#        COMPONENT swig-python)

# Install target to call setup.py
add_custom_target( install-python
        DEPENDS _${PROJECT_NAME}
        COMMAND python ${SETUP_PY_OUT} install )