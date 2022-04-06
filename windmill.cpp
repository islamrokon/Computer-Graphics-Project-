#include <cstdio>
#include <iostream>
#include <math.h>
#include<GL/gl.h>
#include <GL/glut.h>
#define twicePi 2*3.1415667968
using namespace std;

int center_x1 = 103;
int center_y1 = 250;

int center_x2 = 214;
int center_y2 = 330;

int center_x3 = 333;
int center_y3 = 225;

int center_x4 = 864;
int center_y4 = 330;

int center_x5 = 623;
int center_y5 = 225;

int center_x6 = 503;
int center_y6 = 270;

GLfloat ag = 0.0f;

//Primary Background
void windMill()
{
    //WIND MILL 1
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(100, 100);
    glVertex2i(106, 100);
    glVertex2i(105, 250);
    glVertex2i(101, 250);
    glEnd();


    glPushMatrix();
    glTranslatef( center_x1, center_y1, 0.0f );
    glRotatef(ag, 0, 0, 1);
    glTranslatef(-center_x1, -center_y1, 0.0f );
    glColor3ub (180,180,180);

    //turbine 1
    glBegin(GL_TRIANGLES);
    glColor3ub(180, 180, 180);
    glVertex2i(97, 250);
    glVertex2i(103, 245);
    glVertex2i(55, 215);

    //turbine 2
    glVertex2i(99,250);
    glVertex2i(107,250);
    glVertex2i(103,311);

    //turbine 2
    glVertex2i(109,250);
    glVertex2i(103,245);
    glVertex2i(151,215);


    glLoadIdentity();
    glEnd();
    glPopMatrix();




    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3ub(180, 180, 180);
    for(int k = 0; k <= 30; k++)
    {
        glVertex2f( 103, 250);
        glVertex2f(103 + (5 * cos(k * twicePi / 30)), 250 + (5 * sin(k * twicePi / 30)));
    }
    glEnd();



    //WIND MILL 2
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(210, 100);
    glVertex2i(218, 100);
    glVertex2i(216, 330);
    glVertex2i(212, 330);
    glEnd();

    glPushMatrix();
    glTranslatef( center_x2, center_y2, 0.0f );
    glRotatef(ag, 0, 0, 1);
    glTranslatef(-center_x2, -center_y2, 0.0f );
    glColor3ub (180,180,180);

    //turbine 1
    glBegin(GL_TRIANGLES);
    glColor3ub(180, 180, 180);
    glVertex2i(208, 330);
    glVertex2i(214, 324);
    glVertex2i(130, 270);

    //turbine 2
    glVertex2i(218,330);
    glVertex2i(214,324);
    glVertex2i(298,270);

    //turbine 2
    glVertex2i(209,330);
    glVertex2i(217,330);
    glVertex2i(214,430);


    glLoadIdentity();
    glEnd();
    glPopMatrix();

    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3ub(180, 180, 180);
    for(int k = 0; k <= 30; k++)
    {
        glVertex2f( 214, 330);
        glVertex2f(214 + (5 * cos(k * twicePi / 30)), 330 + (5 * sin(k * twicePi / 30)));
    }
    glEnd();

    //WIND MILL 3
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(330, 100);
    glVertex2i(335, 100);
    glVertex2i(334, 225);
    glVertex2i(331, 225);
    glEnd();

    glPushMatrix();
    glTranslatef( center_x3, center_y3, 0.0f );
    glRotatef(ag, 0, 0, 1);
    glTranslatef(-center_x3, -center_y3, 0.0f );
    glColor3ub (180,180,180);

    //turbine 1
    glBegin(GL_TRIANGLES);
    glColor3ub(180, 180, 180);
    glVertex2i(329, 225);
    glVertex2i(337, 225);
    glVertex2i(333, 265);

    //turbine 2
    glVertex2i(328,225);
    glVertex2i(334,221);
    glVertex2i(301,200);

    //turbine 2
    glVertex2i(337,225);
    glVertex2i(333,221);
    glVertex2i(365,200);

    glLoadIdentity();
    glEnd();
    glPopMatrix();

    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3ub(180, 180, 180);
    for(int k = 0; k <= 30; k++)
    {
        glVertex2f( 333, 225);
        glVertex2f(333 + (3 * cos(k * twicePi / 30)), 225 + (3 * sin(k * twicePi / 30)));
    }
    glEnd();

    //WIND MILL 4
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(860, 100);
    glVertex2i(868, 100);
    glVertex2i(866, 330);
    glVertex2i(862, 330);
    glEnd();

    glPushMatrix();
    glTranslatef( center_x4, center_y4, 0.0f );
    glRotatef(ag, 0, 0, 1);
    glTranslatef(-center_x4, -center_y4, 0.0f );
    glColor3ub (180,180,180);

    //turbine 1
    glBegin(GL_TRIANGLES);
    glColor3ub(180, 180, 180);
    glVertex2i(858, 330);
    glVertex2i(864, 324);
    glVertex2i(780, 270);

    //turbine 2
    glVertex2i(868,330);
    glVertex2i(864,324);
    glVertex2i(948,270);

    //turbine 2
    glVertex2i(859,330);
    glVertex2i(867,330);
    glVertex2i(864,430);


    glLoadIdentity();
    glEnd();
    glPopMatrix();

    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3ub(180, 180, 180);
    for(int k = 0; k <= 30; k++)
    {
        glVertex2f(864, 330);
        glVertex2f(864 + (5 * cos(k * twicePi / 30)), 330 + (5 * sin(k * twicePi / 30)));
    }
    glEnd();


    //WIND MILL 5
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(620, 100);
    glVertex2i(625, 100);
    glVertex2i(624, 225);
    glVertex2i(621, 225);
    glEnd();

    glPushMatrix();
    glTranslatef( center_x5, center_y5, 0.0f );
    glRotatef(ag, 0, 0, 1);
    glTranslatef(-center_x5, -center_y5, 0.0f );
    glColor3ub (180,180,180);

    //turbine 1
    glBegin(GL_TRIANGLES);
    glColor3ub(180, 180, 180);
    glVertex2i(619, 225);
    glVertex2i(627, 225);
    glVertex2i(623, 265);

    //turbine 2
    glVertex2i(618,225);
    glVertex2i(624,221);
    glVertex2i(591,200);

    //turbine 2
    glVertex2i(627,225);
    glVertex2i(623,221);
    glVertex2i(655,200);

    glLoadIdentity();
    glEnd();
    glPopMatrix();

    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3ub(180, 180, 180);
    for(int k = 0; k <= 30; k++)
    {
        glVertex2f( 623, 225);
        glVertex2f(623 + (3 * cos(k * twicePi / 30)), 225 + (3 * sin(k * twicePi / 30)));
    }
    glEnd();

    //WIND MILL 6
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(500, 100);
    glVertex2i(506, 100);
    glVertex2i(505, 270);
    glVertex2i(501, 270);
    glEnd();


    glPushMatrix();
    glTranslatef( center_x6, center_y6, 0.0f );
    glRotatef(ag, 0, 0, 1);
    glTranslatef(-center_x6, -center_y6, 0.0f );
    glColor3ub (180,180,180);

    //turbine 1
    glBegin(GL_TRIANGLES);
    glColor3ub(180, 180, 180);
    glVertex2i(497, 270);
    glVertex2i(503, 265);
    glVertex2i(455, 235);

    //turbine 2
    glVertex2i(499,270);
    glVertex2i(507,270);
    glVertex2i(503,331);

    //turbine 2
    glVertex2i(509,270);
    glVertex2i(503,265);
    glVertex2i(551,235);


    glLoadIdentity();
    glEnd();
    glPopMatrix();




    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3ub(180, 180, 180);
    for(int k = 0; k <= 30; k++)
    {
        glVertex2f(503, 270);
        glVertex2f(503 + (5 * cos(k * twicePi / 30)), 270 + (5 * sin(k * twicePi / 30)));
    }
    glEnd();

}
