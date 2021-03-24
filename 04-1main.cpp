#include <GL/glut.h> ///使用GLUT外掛///茶壺
#include <math.h> ///使用數學外掛 cos() sin()
#include <stdio.h> ///TODO: 因為要 printf()
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();


}
void mouse(int button ,int state , int x , int y)
{ ///TODO: 左、中、右鍵  按下、上  x座標  y座標
    printf("button:%d state:%d x:%d y:%d\n", button, state, x, y);
} ///TODO: 印出這些值，觀察一下



int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///少寫一個，因為預設就是RGB
    glutCreateWindow("08373056!!!");

    glutDisplayFunc(display);

    glutMouseFunc(mouse);///TODO: 我們註冊的 mousec函式

    glutMainLoop();
}























