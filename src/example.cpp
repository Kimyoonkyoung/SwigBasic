//
//  example.cpp
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <json/json.h>
#include <fstream>

#include "example.h"

example::example()
{

}

example::~example()
{

}

void example::lib_cpp_hello()
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

    //std::cout << event << std::endl;

    Json::StyledWriter styledWriter;
    std::string strJSON = styledWriter.write(event);

    std::ofstream file;
    file.open("/Users/kakao/Desktop/test.json");

    file << strJSON;
    file.close();

    std::cout << "Hello from lib_cpp" << std::endl;

    cv::Mat test = cv::imread("/Users/kakao/Desktop/test.png");
    cv::imshow("win1", test);
    cv::waitKey(0);
}
