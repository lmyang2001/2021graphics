#include <GL/glut.h> ///使用GLUT外掛
int N=0,vx[3000],vy[3000];
float angle=0; ///TODO:
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清空

    glPushMatrix(); ///TODO: 備分矩陣
        glRotatef(angle, 0, 0, 1); ///TODO: 旋轉.對Z軸轉
        glBegin(GL_LINE_LOOP);
        for(int i=0;i<N;i++) {
        glVertex2f((vx[i]-150)/150.0, -(vy[i]-150)/150.0);
    }           ///減一半.再除一半 ...加負號
        glEnd();
    glPopMatrix();  ///TODO: 還原矩陣
    glutSwapBuffers(); ///TODO:交換兩倍的buffers
}
void keyboard( unsigned char key, int x, int y )
{
    angle++; ///TODO
    display(); ///TODO
}
void motion( int x , int y)
{ ///TODO: mouse motion 在拖動他
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
    glutKeyboardFunc( keyboard ); ///按按鍵會轉動
    glutMotionFunc(motion);
    glutMainLoop();
}
