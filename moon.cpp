#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
extern void drawCircle(double r, double x, double y, double red, double green, double blue);
extern double sizeX;
extern double sizeY;
void star()
{
    int i, x, y;
    glPushMatrix();
    glPointSize(1.0);
    if(sizeX == 1)
    {
        glScaled(sizeX-1,sizeY-1,1);
    }
    if(sizeX == 0)
    {
        glScaled(sizeX+1,sizeY+1,1);
    }
    glBegin(GL_POINTS);

    glColor3ub(128,128,128);
    for(i=0; i<50; i++)
    {
        x=(rand() % 960);
        y= 460 - (rand() % 250);
        glVertex2i(x,y);
        glVertex2i(x+1,y);
        glVertex2i(x,y+1);
    }
    glEnd();
    glPopMatrix();
}

void moon()
{
    glPushMatrix();
    if(sizeX == 1)
    {
        glScaled(sizeX-1,sizeY-1,1);
    }
    if(sizeX == 0)
    {
        glScaled(sizeX+1,sizeY+1,1);
    }
    drawCircle(20, 150, 390, 255, 255, 150);
    drawCircle(20, 155, 395, 25, 25, 25);

    glPopMatrix();
}
