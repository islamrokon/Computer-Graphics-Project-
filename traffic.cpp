#include <cstdio>
#include <cmath>
#include<GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <windows.h>
using namespace std;

extern void drawCircle(double r, double x, double y, double red, double green, double blue);
extern void update(int value);
extern GLint stop;

double RED1 = 80;
double GREEN1 = 80;
double BLUE1 = 80;

double RED2 = 80;
double GREEN2 = 80;
double BLUE2 = 80;

double RED3 = 0;
double GREEN3 = 220;
double BLUE3 = 0;

double lr = 25;
double lg = 25;
double lb = 25;

double tr = 0;
double tg = 220;
double tb = 0;

double tr0 = 80;
double tg0 = 80;
double tb0 = 80;

extern GLfloat speedcar;

void traffic()
{
    int X = 250, Y = 40;
    //holder
    glBegin(GL_QUADS);
    glColor3ub(lr, lg, lb);
    glVertex2i(301 - X, 172 - Y);
    glVertex2i(301 - X, 218 - Y);
    glVertex2i(318 - X, 218 - Y);
    glVertex2i(318 - X, 172 - Y);
    glEnd();

    //stand
    glBegin(GL_QUADS);
    glColor3ub(lr, lg, lb);
    glVertex2i(308 - X, 140 - Y);
    glVertex2i(308 - X, 172 - Y);
    glVertex2i(312 - X, 172 - Y);
    glVertex2i(312 - X, 140 - Y);
    glEnd();


    //light
    drawCircle(5,310 - X,210 - Y,RED1,GREEN1,BLUE1);
    drawCircle(5,310 - X,195 - Y,RED2,GREEN2,BLUE2);
    drawCircle(5,310 - X,180 - Y,RED3,GREEN3,BLUE3);


    //Turbine control
    X = 0; Y = 0;
    glBegin(GL_QUADS);
    glColor3ub(lr, lg, lb);
    glVertex2i(820 - X, 140 - Y);
    glVertex2i(820 - X, 100 - Y);
    glVertex2i(840 - X, 100 - Y);
    glVertex2i(840 - X, 140 - Y);
    glEnd();

    drawCircle(8,830 - X,110 - Y,tr,tg,tb);
    drawCircle(8,830 - X,130 - Y,tr0,tg0,tb0);

}

void trigger(int value)
{
    if(value == 1)
    {
        RED1 = 220;
        GREEN1 = 0;
        BLUE1 = 0;

        RED2 = 80;
        GREEN2 = 80;
        BLUE2 = 80;

        RED3 = 80;
        GREEN3 = 80;
        BLUE3 = 80;

        speedcar = 0;
    }
    if(value == 2)
    {
        RED1 = 80;
        GREEN1 = 80;
        BLUE1 = 80;

        RED2 = 255;
        GREEN2 = 255;
        BLUE2 = 80;

        RED3 = 80;
        GREEN3 = 80;
        BLUE3 = 80;

        speedcar = 0.5;
    }
    if(value == 3)
    {
        RED1 = 80;
        GREEN1 = 80;
        BLUE1 = 80;

        RED2 = 80;
        GREEN2 = 80;
        BLUE2 = 80;

        RED3 = 0;
        GREEN3 = 220;
        BLUE3 = 0;

        speedcar = 5;
    }
}

void trigger1(int value)
{
    if(value == 1)
    {
        lg = 25;
        lr = 25;
        lb = 25;
    }
    if(value == 2)
    {
        lg = 180;
        lr = 180;
        lb = 180;
    }
}

void trigger2(int value)
{
    if(value == 1)
    {
        tr = 0;
        tg = 220;
        tb = 0;

        tr0 = 80;
        tg0 = 80;
        tb0 = 80;

        stop = 0;

    }
    if(value == 2)
    {
        tr = 80;
        tg = 80;
        tb = 80;

        tr0 = 220;
        tg0 = 0;
        tb0 = 0;

        stop = 1;
    }
}


