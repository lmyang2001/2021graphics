#include <opencv/highgui.h>
int main(int argc,char** argv)
{    ///小心大小寫
    IplImage* img = cvLoadImage("1.jpg");
    cvShowImage("1 photo",img);
    cvWaitKey(0);///等待任意鍵,才會繼續
}
