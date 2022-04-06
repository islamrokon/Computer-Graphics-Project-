#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctime>
#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position1 = 0;
GLfloat position2 = 0;
GLfloat position3 = 0;

void cars()
{
    int X = 0, Y = -42;

    //1
    X = -400; Y = - 60;
    glPushMatrix();
    glTranslated(position3,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(0, 0, 180);
    glVertex2i(60 - X, 30 - Y);
    glVertex2i(60 - X, 40 - Y);
    glVertex2i(120 - X, 40 - Y);
    glVertex2i(120 - X, 30 - Y);

    glVertex2i(70 - X, 40 - Y);
    glVertex2i(70 - X, 45 - Y);
    glVertex2i(115 - X, 45 - Y);
    glVertex2i(115 - X, 40 - Y);

    glVertex2i(75 - X, 45 - Y);
    glVertex2i(75 - X, 50 - Y);
    glVertex2i(115 - X, 50 - Y);
    glVertex2i(115 - X, 45 - Y);

    glVertex2i(80 - X, 50 - Y);
    glVertex2i(80 - X, 55 - Y);
    glVertex2i(110 - X, 55 - Y);
    glVertex2i(110 - X, 50 - Y);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(71 - X, 26 - Y);
    glVertex2i(71 - X, 34 - Y);
    glVertex2i(79 - X, 34 - Y);
    glVertex2i(79 - X, 26 - Y);

    glVertex2i(101 - X, 26 - Y);
    glVertex2i(101 - X, 34 - Y);
    glVertex2i(109 - X, 34 - Y);
    glVertex2i(109 - X, 26 - Y);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(95 - X, 40 - Y);
    glVertex2i(95 - X, 50 - Y);
    glVertex2i(105 - X, 50 - Y);
    glVertex2i(105 - X, 40 - Y);

    glVertex2i(95 - X, 40 - Y);
    glVertex2i(95 - X, 45 - Y);
    glVertex2i(110 - X, 45 - Y);
    glVertex2i(110 - X, 40 - Y);

    glVertex2i(75 - X, 40 - Y);
    glVertex2i(75 - X, 45 - Y);
    glVertex2i(90 - X, 45 - Y);
    glVertex2i(90 - X, 40 - Y);

    glVertex2i(80 - X, 45 - Y);
    glVertex2i(80 - X, 50 - Y);
    glVertex2i(90 - X, 50 - Y);
    glVertex2i(90 - X, 45 - Y);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(60 - X, 36 - Y);
    glVertex2i(60 - X, 40 - Y);
    glVertex2i(64 - X, 40 - Y);
    glVertex2i(64 - X, 36 - Y);

    glEnd();
    glPopMatrix();

    //2
    X = -200; Y = - 48;
    glPushMatrix();
    glTranslated(position2,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(0, 80, 0);
    glVertex2i(60 - X, 30 - Y);
    glVertex2i(60 - X, 40 - Y);
    glVertex2i(120 - X, 40 - Y);
    glVertex2i(120 - X, 30 - Y);

    glVertex2i(70 - X, 40 - Y);
    glVertex2i(70 - X, 45 - Y);
    glVertex2i(115 - X, 45 - Y);
    glVertex2i(115 - X, 40 - Y);

    glVertex2i(75 - X, 45 - Y);
    glVertex2i(75 - X, 50 - Y);
    glVertex2i(115 - X, 50 - Y);
    glVertex2i(115 - X, 45 - Y);

    glVertex2i(80 - X, 50 - Y);
    glVertex2i(80 - X, 55 - Y);
    glVertex2i(110 - X, 55 - Y);
    glVertex2i(110 - X, 50 - Y);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(71 - X, 26 - Y);
    glVertex2i(71 - X, 34 - Y);
    glVertex2i(79 - X, 34 - Y);
    glVertex2i(79 - X, 26 - Y);

    glVertex2i(101 - X, 26 - Y);
    glVertex2i(101 - X, 34 - Y);
    glVertex2i(109 - X, 34 - Y);
    glVertex2i(109 - X, 26 - Y);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(95 - X, 40 - Y);
    glVertex2i(95 - X, 50 - Y);
    glVertex2i(105 - X, 50 - Y);
    glVertex2i(105 - X, 40 - Y);

    glVertex2i(95 - X, 40 - Y);
    glVertex2i(95 - X, 45 - Y);
    glVertex2i(110 - X, 45 - Y);
    glVertex2i(110 - X, 40 - Y);

    glVertex2i(75 - X, 40 - Y);
    glVertex2i(75 - X, 45 - Y);
    glVertex2i(90 - X, 45 - Y);
    glVertex2i(90 - X, 40 - Y);

    glVertex2i(80 - X, 45 - Y);
    glVertex2i(80 - X, 50 - Y);
    glVertex2i(90 - X, 50 - Y);
    glVertex2i(90 - X, 45 - Y);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(60 - X, 36 - Y);
    glVertex2i(60 - X, 40 - Y);
    glVertex2i(64 - X, 40 - Y);
    glVertex2i(64 - X, 36 - Y);

    glEnd();
    glPopMatrix();

    //3
    X = 0; Y = -42;
    glPushMatrix();
    glTranslated(position1,0, 0);
    glBegin(GL_QUADS);
    //Body
    glColor3ub(180, 0, 0);
    glVertex2i(60 - X, 30 - Y);
    glVertex2i(60 - X, 40 - Y);
    glVertex2i(120 - X, 40 - Y);
    glVertex2i(120 - X, 30 - Y);

    glVertex2i(70 - X, 40 - Y);
    glVertex2i(70 - X, 45 - Y);
    glVertex2i(115 - X, 45 - Y);
    glVertex2i(115 - X, 40 - Y);

    glVertex2i(75 - X, 45 - Y);
    glVertex2i(75 - X, 50 - Y);
    glVertex2i(115 - X, 50 - Y);
    glVertex2i(115 - X, 45 - Y);

    glVertex2i(80 - X, 50 - Y);
    glVertex2i(80 - X, 55 - Y);
    glVertex2i(110 - X, 55 - Y);
    glVertex2i(110 - X, 50 - Y);

    //Wheels
    glColor3ub(128, 128, 128);
    glVertex2i(71 - X, 26 - Y);
    glVertex2i(71 - X, 34 - Y);
    glVertex2i(79 - X, 34 - Y);
    glVertex2i(79 - X, 26 - Y);

    glVertex2i(101 - X, 26 - Y);
    glVertex2i(101 - X, 34 - Y);
    glVertex2i(109 - X, 34 - Y);
    glVertex2i(109 - X, 26 - Y);

    //Glass
    glColor3ub(220, 220, 220);
    glVertex2i(95 - X, 40 - Y);
    glVertex2i(95 - X, 50 - Y);
    glVertex2i(105 - X, 50 - Y);
    glVertex2i(105 - X, 40 - Y);

    glVertex2i(95 - X, 40 - Y);
    glVertex2i(95 - X, 45 - Y);
    glVertex2i(110 - X, 45 - Y);
    glVertex2i(110 - X, 40 - Y);

    glVertex2i(75 - X, 40 - Y);
    glVertex2i(75 - X, 45 - Y);
    glVertex2i(90 - X, 45 - Y);
    glVertex2i(90 - X, 40 - Y);

    glVertex2i(80 - X, 45 - Y);
    glVertex2i(80 - X, 50 - Y);
    glVertex2i(90 - X, 50 - Y);
    glVertex2i(90 - X, 45 - Y);

    //light
    glColor3ub(255, 255, 100);
    glVertex2i(60 - X, 36 - Y);
    glVertex2i(60 - X, 40 - Y);
    glVertex2i(64 - X, 40 - Y);
    glVertex2i(64 - X, 36 - Y);

    glEnd();
    glPopMatrix();
}
