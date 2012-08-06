#include "cv.h"
#include "highgui.h"
#include <assert.h>
using namespace cv;


cv::Mat getImage(int capDev, cv::VideoCapture cap){
  assert(cap.isOpened() );
  cv::Mat image;
  cap >> image;
  return image;
}


int main(int, char**)
{
    cv::VideoCapture cap(0);
    cv::Mat edges;
    namedWindow("edges",1);
    for(;;)
    {
        cv::Mat frame { getImage(0,cap) };
        cv::cvtColor(frame, edges, CV_BGR2GRAY);
        cv::GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        cv::Canny(edges, edges, 0, 30, 3);
        cv::imshow("edges", edges);
        if(cv::waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}
