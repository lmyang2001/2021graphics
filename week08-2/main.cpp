#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可

#include <opencv/cv.h>

#include <GL/glut.h>

void init()

{

    IplImage * img = cvLoadImage("1.jpg");

 ///讀圖/記得改圖片名
    cvCvtColor(img,img, CV_BGR2RGB);

    glEnable(GL_TEXTURE_2D);

///開啟貼圖功能

    GLuint id;

    glGenTextures(1, &id);

    glBindTexture(GL_TEXTURE_2D, id);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);

}
void display()

{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidTeapot(0.3);

    glutSwapBuffers();

}

int main(int argc, char**argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week08 texture");

    glutDisplayFunc(display);

    init();///設好後，才設定貼圖到opengl上

    glutMainLoop();

}
