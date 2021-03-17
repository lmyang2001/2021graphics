#include <GL/glut.h> ///使用GLUT外掛
int N=0,vx[3000],vy[3000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++) {
        glVertex2f((vx[i]-150)/150.0, -(vy[i]-150)/150.0);
    }
    glEnd();
    glutSwapBuffers();
}
void motion(int x , int y)
{ ///TODO: 左、中、右鍵  按下、上  x座標  y座標
    vx[N]=x; vy[N]=y;
    N++;
    display();
}
int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///少寫一個，因為預設就是RGB
    glutCreateWindow("08373056 !!!");

    glutDisplayFunc(display);

    glutMotionFunc(motion);
    glutMainLoop();
}























