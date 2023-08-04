#include <iostream>
#include <filesystem>
#include "opencv2/opencv.hpp"

int main(void)
{
    std::cout << "hello world" << std::endl;

    cv::Mat img = cv::imread("1.png");
    cv::imshow("debug", img);
    cv::waitKey(0);

    return 0;
}