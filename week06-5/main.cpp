 #include <GL/glut.h>
float angle=0; ///TODO:
void hand(){
glPushMatrix();
 glScalef(0.5,0.1,0.1);
    glColor3f(0,0,1);
    glutSolidCube(1);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1); glutSolidCube(0.5);///大身體
    glPushMatrix();
        glTranslatef(0.25,0.25,0);
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.25,0,0);
        hand(); ///細長的藍色上手
        glPushMatrix();
            glTranslatef(0.25,0,0);
            glRotatef( angle, 0, 0, 1);
            glTranslatef(0.25, 0, 0);
             hand(); ///下手臂/手肘
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    angle++; ///todo:
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("08373056 !!!");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
