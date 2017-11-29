#include "example.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

Math::Math()
{

}

Math::~Math()
{

}

void Math::setJson(PyObject* json)
{

}

void Math::setImage(PyObject* binary_object)
{
    printf("Math class comein\n");

    const char* binary_data = PyString_AsString(binary_object);
    Py_ssize_t binary_size = PyString_Size(binary_object);
    if ( !binary_data ) {
        PyErr_Print();
        printf("Cannot convert PyObject to String\n");
    }

    std::string binary_string(binary_data, binary_size);
    std::vector<uint8_t> buffer(binary_string.begin(), binary_string.end() );
    cv::Mat decoded_data = cv::imdecode(buffer, CV_LOAD_IMAGE_COLOR);

    _basic.set(decoded_data);
}

void Math::setBasic(int val)
{
    _basic.set(val);
}

int Math::getBasic()
{
    return _basic.get();
}


int Math::pi() const
{
    cv::Mat test = cv::imread("/Users/kakao/Desktop/6.png");
    cv::imshow("win1", test);
    cv::waitKey(0);

    printf("here!\n");
    return this->_pi;
}

void Math::pi(int pi)
{
    this->_pi = pi;
}

