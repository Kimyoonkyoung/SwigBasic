//
//  example.h
//  Project
//  Created by Rachel.minii on 2018. 01. 02
//  Copyright (c) 2018 Kakao. All rights reserved.
//

#ifndef __PROJECT_EXAMPLE_H__
#define __PROJECT_EXAMPLE_H__
#pragma once

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

class example {
public:
    example();
    virtual ~example();

    void setJson(const char* jsonString);

    void setImage(cv::Mat image);

    std::string sendJsonToPython();
};


#endif//PROJECT_EXAMPLE_H
