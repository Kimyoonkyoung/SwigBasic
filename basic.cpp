//
//  sample.cpp
//  SwigTest
//  Created by Rachel.minii on 2017. 11. 29
//  Copyright (c) 2017 Kakao. All rights reserved.
//
#include <stdio.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "basic.h"

Basic::Basic()
{

}

Basic::~Basic()
{

}


void Basic::set(cv::Mat image)
{
    cv::imshow("win", image);
    cv::waitKey(0);
    _image = image;

    cv::cvtColor(_image, _image, CV_BGR2GRAY);

}

void Basic::set(int val)
{
    printf("Basic : set value\n");
    _val = val;
}

int Basic::get()
{
    printf("Basic : get value\n");
    return _val;
}
