//
//  examplepy.cpp
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//
#include "examplepy.h"
#include "../src/example.h"

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
    _example.lib_cpp_hello();
}