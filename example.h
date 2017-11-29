//
//  example.h
//  SwigTest
//  Created by Rachel.minii on 2017. 11. 25
//  Copyright (c) 2017 Kakao. All rights reserved.
//

#ifndef __SWIGTEST_EXAMPLE_H__
#define __SWIGTEST_EXAMPLE_H__
#pragma once

#include <Python.h>
#include <opencv2/core/mat.hpp>
#include "basic.h"

class Math
{
    public:
        Math();
        ~Math();

        void setBasic(int val);
        int getBasic();

        // send image (python to c++)
        void setImage(PyObject* image);

        // send json (python to C++)
        void setJson(PyObject* json);

        // send json (c++ to python)


        int pi() const;
        void pi(int pi);

    private:
        int _pi;
        Basic _basic;
};

#endif//__SWIGTEST_EXAMPLE_H__