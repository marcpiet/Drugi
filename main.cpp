#include <opencv\highgui.h>

void main(void)
{
    IplImage *obrazek=cvLoadImage("lena.jpg");
    cvShowImage("okienko",obrazek);
    cvWaitKey();
}