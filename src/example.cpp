//
//  example.cpp
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "example.h"

example::example()
{

}

example::~example()
{

}

void example::lib_cpp_hello()
{
    std::cout << "Hello from lib_cpp" << std::endl;

    cv::Mat test = cv::imread("/Users/kakao/Desktop/test.png");
    cv::imshow("win1", test);
    cv::waitKey(0);
}
