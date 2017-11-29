cmake_minimum_required(VERSION 3.3)
project(SwigTest)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES example.cpp example.h basic.cpp basic.h)

add_executable(SwigTest ${SOURCE_FILES})


# opencv .cmake file link 하기 위해서 prefix 지정
#set(CMAKE_PREFIX_PATH "/usr/local/Cellar/opencv/3.3.1_1/share/OpenCV")
find_package(OpenCV REQUIRED)
link_libraries( ${OpenCV_LIBS} )
include_directories( ${OpenCV_INCLUDE_DIRS} )
list( APPEND INCLUDE_DIRECTORIES ${OpenCV_INCLUDE_DIRS} )
list( APPEND LINK_LIBRARIES ${OpenCV_LIBS} )