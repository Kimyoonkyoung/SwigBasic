//
//  examplepy.h
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//

#ifndef __PROJECT_EXAMPLEPY_H__
#define __PROJECT_EXAMPLEPY_H__
#pragma once

#include <Python.h>

class examplepy {

public:
    examplepy();
    virtual ~examplepy();

    void swig_example_hello();
    void link_liba_hello();

    // send json (python to C++)
    void setJson(PyObject* json_string);
};


#endif//PROJECT_EXAMPLEPY_H
