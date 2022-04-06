#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <MMSystem.h>

extern void bg();
extern void tree();
extern void tree1();
extern void windMill();
extern void update(int value);
extern void clouds();
extern void moon();
extern void lamppost();
extern void star();
extern void cars();
extern void building();
extern void traffic();
extern void handleMouse(int button, int state, int x, int y);
extern void handleKeypress(unsigned char key, int x, int y);


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    bg();

    moon();
    clouds();
    windMill();
    building();
    tree1();
    star();
    traffic();
    cars();
    lamppost();
    tree();

    glFlush ();
}


void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 960, 0, 460);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (960, 460);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Industrial view with Wind Turbines");
    myInit ();
    glutDisplayFunc(myDisplay);

    PlaySound(TEXT("1.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

    glutTimerFunc(100, update, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);

    glutMainLoop();
}
