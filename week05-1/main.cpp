#include <GL/glut.h> ///�ϥ�GLUT�~��
int N=0,vx[3000],vy[3000];
float angle=0; ///TODO:
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M��

    glPushMatrix(); ///TODO: �Ƥ��x�}
        glRotatef(angle, 0, 0, 1); ///TODO: ����.��Z�b��
        glBegin(GL_LINE_LOOP);
        for(int i=0;i<N;i++) {
        glVertex2f((vx[i]-150)/150.0, -(vy[i]-150)/150.0);
    }           ///��@�b.�A���@�b ...�[�t��
        glEnd();
    glPopMatrix();  ///TODO: �٭�x�}
    glutSwapBuffers(); ///TODO:�洫�⭿��buffers
}
void keyboard( unsigned char key, int x, int y )
{
    angle++; ///TODO
    display(); ///TODO
}
void motion( int x , int y)
{ ///TODO: mouse motion �b��ʥL
    vx[N]=x; vy[N]=y;
    N++;
    display();
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("08373056 !!!");

    glutDisplayFunc(display);
    glutKeyboardFunc( keyboard ); ///������|���
    glutMotionFunc(motion);
    glutMainLoop();
}
