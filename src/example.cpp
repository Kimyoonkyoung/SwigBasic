//
//  example.cpp
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//
#include <iostream>
#include "../swig/examplepy.h"

#include "example.h"

void example::lib_cpp_hello()
{
    std::cout << "Hello from lib_cpp" << std::endl;
}
