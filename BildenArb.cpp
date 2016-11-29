//
// Created by root on 30.11.16.
//

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "iostream"

using namespace cv;
using namespace std;

int main( ) {

    Mat im_rgb = imread("/home/jyldyz/Pictures/neymar1.jpeg");
    Mat im_gray;
    cvtColor(im_rgb,im_gray,CV_RGB2GRAY);
    Mat imrgb = imread("/home/jyldyz/Pictures/images.jpeg");
    Mat imgray;
    cvtColor(imrgb,imgray,CV_RGB2GRAY);

    namedWindow("First picture", CV_WINDOW_AUTOSIZE);
    namedWindow("Result window", CV_WINDOW_AUTOSIZE);
    imshow("First picture", im_gray);
    imshow("Result window", imgray);

    waitKey(0);
    return 0;

}



