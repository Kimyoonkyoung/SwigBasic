//
//  example.cpp
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//
#include <iostream>

#include <json/json.h>
#include <fstream>

#include "example.h"

example::example()
{

}

example::~example()
{

}

void example::setJson(const char* jsonString)
{
    std::cout << jsonString << std::endl;
    printf("\nsend Json -> c++ compelte !! \n");
}


void example::setImage(cv::Mat image)
{
    cv::cvtColor(image, image, CV_BGR2GRAY);
    cv::imshow("win", image);
    cv::waitKey(0);

    printf("\nsend Image -> c++ compelte !! \n");
}