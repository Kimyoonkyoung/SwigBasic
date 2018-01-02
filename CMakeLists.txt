cmake_minimum_required( VERSION 2.8 )

project( swig_basic )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter -fPIC" )

# Add lib cpp sources
set( swig_example_CPP_SOURCE_FILES
       src/example.cpp src/example.h )
add_library( swig_cpp_lib ${swig_example_CPP_SOURCE_FILES} )

# Create main and link to liba
add_library( ${PROJECT_NAME} swig/examplepy.cpp swig/examplepy.h )
target_link_libraries( ${PROJECT_NAME} swig_cpp_lib )

# Add install target
install( TARGETS ${PROJECT_NAME} swig_cpp_lib
         RUNTIME DESTINATION bin
         LIBRARY DESTINATION lib
         ARCHIVE DESTINATION lib/static
         PUBLIC_HEADER DESTINATION include )

# find OpenCV
find_package( OpenCV REQUIRED )
link_libraries( ${OpenCV_LIBS} )
include_directories( ${OpenCV_INCLUDE_DIRS} )
list( APPEND INCLUDE_DIRECTORIES ${OpenCV_INCLUDE_DIRS} )
list( APPEND LINK_LIBRARIES ${OpenCV_LIBS} )

# Add swig subdirectory
add_subdirectory( swig )
