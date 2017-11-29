//
//  sample.h
//  SwigTest
//  Created by Rachel.minii on 2017. 11. 29
//  Copyright (c) 2017 Kakao. All rights reserved.
//

#ifndef __SWIGTEST_SAMPLE_H__
#define __SWIGTEST_SAMPLE_H__
#pragma once


#include <opencv2/core/mat.hpp>

class Basic
{

public:
    Basic();
    ~Basic();

    void set(int val);
    int get();

    void set(cv::Mat image);


private:
    int _val;

    cv::Mat _image;
};


#endif//SWIGTEST_SAMPLE_H
