//
//  examplepy.cpp
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//
#include "examplepy.h"
#include "../src/example.h"

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc/imgproc_c.h>

#include <iostream>
#include <fstream>


examplepy::examplepy()
{

}

examplepy::~examplepy()
{

}

void examplepy::swig_example_hello()
{
    std::cout << "Hello from swig-basic" << std::endl;
}

void examplepy::link_liba_hello()
{
    example _example;
    //_example.lib_cpp_hello();
}


void examplepy::sendJsonToCpp(PyObject* json_string)
{
    // python json_string to c++ string
    const char* s = PyString_AsString(json_string);
    //std::cout << s << std::endl;

    example _example;
    _example.setJson(s);
}


void examplepy::sendImageToCpp(PyObject* binary_object)
{
    const char* binary_data = PyString_AsString(binary_object);
    Py_ssize_t binary_size = PyString_Size(binary_object);
    if ( !binary_data ) {
        PyErr_Print();
        printf("Cannot convert PyObject to String\n");
    }

    std::string binary_string(binary_data, binary_size);
    std::vector<uint8_t> buffer(binary_string.begin(), binary_string.end() );
    cv::Mat decoded_data = cv::imdecode(buffer, CV_LOAD_IMAGE_COLOR);

    example _example;
    _example.setImage(decoded_data);
}