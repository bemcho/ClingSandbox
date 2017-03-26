//
// Created by bemcho on 3/4/17.
//
#include "opencv_sandbox.hpp"
namespace opencvbox
{
  void showFrame(std::string name, cv::Mat frame) {
    cv::imshow(name, frame);
  }

  void startVisualLoop(int camIndex, std::string windowName) {
    cv::namedWindow(windowName, cv::WINDOW_OPENGL);
    cv::VideoCapture capture(camIndex);
    if (!capture.isOpened())
      return;
    cv::Mat frame;

    for (;;) {
      capture >> frame;
      showFrame(windowName, frame);
      if (cvWaitKey(1)==27) return;
    }
  }
}