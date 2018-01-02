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
#include "../swig/examplepy.h"

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

std::string example::sendJsonToPython()
{
    Json::Value event;
    Json::Value vec(Json::arrayValue);
    vec.append(Json::Value(1));
    vec.append(Json::Value(2));
    vec.append(Json::Value(3));

    event["competitors"]["home"]["name"] = "Liverpool";
    event["competitors"]["away"]["code"] = 89223;
    event["competitors"]["away"]["name"] = "Aston Villa";
    event["competitors"]["away"]["code"]=vec;

    Json::StyledWriter styledWriter;
    std::string strJSON = styledWriter.write(event);

    examplepy _examplepy;
    _examplepy.getJsonFromCpp(strJSON);
}