#include <GL/glut.h> ///�ϥ�GLUT�~��
#include <math.h> ///�ϥμƾǥ~�� cos() sin()
#include <stdio.h> ///TODO: �]���n printf()
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();


}
void mouse(int button ,int state , int x , int y)
{ ///TODO: ���B���B�k��  ���U�B�W  x�y��  y�y��
    printf("button:%d state:%d x:%d y:%d\n", button, state, x, y);
} ///TODO: �L�X�o�ǭȡA�[��@�U



int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///�ּg�@�ӡA�]���w�]�N�ORGB
    glutCreateWindow("07361092 work02!!!");

    glutDisplayFunc(display);

    glutMouseFunc(mouse);///TODO: �ڭ̵��U�� mousec�禡

    glutMainLoop();
}























