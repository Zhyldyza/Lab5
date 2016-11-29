//
// Created by root on 30.11.16.
//

#include <cv.h>
#include <highgui.h>
#include <iostream>

using namespace cv;

int main( int argc, char** argv )
{
    double alpha = 0.5; double beta; double input;

    Mat src1, src2, dst;

    // Попросите пользователя ввести альфа "
    std::cout<<"* Enter alpha [0-1]: ";
    std::cin>>input;

    // Мы используем альфа, предоставленный пользователем, если он находится в диапазоне от 0 до 1
    if( input >= 0.0 && input <= 1.0 )
    { alpha = input; }

    // Чтение изображений (такой же размер, тот же тип)
    src1 = imread("home/jyldyz/Pictures/cat.jpeg");
    src2 = imread("home/jyldyz/Pictures/catcat.jpeg");

    if( !src1.data ) { printf("Error loading src1 \n"); return -1; }
    if( !src2.data ) { printf("Error loading src2 \n"); return -1; }


    // Создать окно
    namedWindow("Linear Blend", 1);
    beta = ( 1.0 - alpha );
    addWeighted( src1, alpha, src2, beta, 0.0, dst);

    imshow( "Linear Blend", dst );

    waitKey(0);
    return 0;
}
