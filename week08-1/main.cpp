#include <opencv/highgui.h>
int main(int argc,char** argv)
{    ///�p�ߤj�p�g
    IplImage* img = cvLoadImage("1.jpg");
    cvShowImage("1 photo",img);
    cvWaitKey(0);///���ݥ��N��,�~�|�~��
}
