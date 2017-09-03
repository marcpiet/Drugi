/*
#include <opencv\highgui.h>

void main(void)
{
    IplImage *obrazek=cvLoadImage("lena.jpg");
    cvShowImage("okienko",obrazek);
    cvWaitKey();
}
*/

#include <opencv2\highgui\highgui.hpp>

using namespace cv;

void main(void)
{
    Mat obrazek = imread("lena.jpg");
    imshow("okienko",obrazek);
    waitKey();
}