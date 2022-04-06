#include <cstdio>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#define twicePi 2*3.1415667968
using namespace std;

extern double sizeX;
extern double sizeY;

double cr = 230;
double cg = 255;
double cb = 255;

double Red1 = 220;
double Green1 = 250;
double Blue1 = 250;

double Red2 = 200;
double Green2 = 250;
double Blue2 = 250;

double Red3 = 160;
double Green3 = 250;
double Blue3 = 250;

double Red4 = 120;
double Green4 = 250;
double Blue4 = 250;

double backred = 215;
double backgreen = 235;
double backblue = 245;


//Primary Background
void bg()
{
    //park
    glBegin(GL_QUADS);
    glColor3ub(135, 180, 45);
    glVertex2i(0, 0);
    glVertex2i(0, 460);
    glVertex2i(960, 460);
    glVertex2i(960, 0);
    glEnd();


    //Sky_Layers
    glBegin(GL_QUADS);
    glColor3ub(Red1,Green1,Blue1);
    glVertex2i(0, 100);
    glVertex2i(0, 460);
    glVertex2i(960, 460);
    glVertex2i(960, 100);

    glBegin(GL_QUADS);
    glColor3ub(Red1 - 5,Green1,Blue1);
    glVertex2i(0, 160);
    glVertex2i(0, 460);
    glVertex2i(960, 460);
    glVertex2i(960, 160);
    //2
    glColor3ub(Red2,Green2,Blue2);
    glVertex2i(0, 280);
    glVertex2i(0, 460);
    glVertex2i(960, 460);
    glVertex2i(960, 280);
    //3
    glColor3ub(Red3,Green3,Blue3);
    glVertex2i(0, 360);
    glVertex2i(0, 460);
    glVertex2i(960, 460);
    glVertex2i(960, 360);
    //4
    glColor3ub(Red4,Green4,Blue4);
    glVertex2i(0, 420);
    glVertex2i(0, 460);
    glVertex2i(960, 460);
    glVertex2i(960, 420);
    glEnd();

    glEnable(GL_LINE_SMOOTH);
    glLineWidth(5.0);
    //Left upper circle
    glBegin(GL_LINES);
    glColor3ub(cr, cg, cb);
    for(int k = 0; k <= 200; k++)
    {
        glVertex2f( 20, 220);
        glVertex2f(20 + (100 * cos(k * twicePi / 200)), 220 + (100 * sin(k * twicePi / 200)));
    }
    glEnd();

    // left lower circle
    glBegin(GL_LINES);
    glColor3ub(cr, cg, cb);
    for(int k = 0; k <= 200; k++)
    {
        glVertex2f(150, 200);
        glVertex2f(150 + (80 * cos(k * twicePi / 200)), 200 + (80 * sin(k * twicePi / 200)));
    }
    glEnd();

    //Right upper circle
    glBegin(GL_LINES);
    glColor3ub(cr, cg, cb);
    for(int k = 0; k <= 200; k++)
    {
        glVertex2f( 940, 220);
        glVertex2f(940 + (100 * cos(k * twicePi / 200)), 220 + (100 * sin(k * twicePi / 200)));
    }
    glEnd();

    // right lower circle
    glBegin(GL_LINES);
    glColor3ub(cr, cg, cb);
    for(int k = 0; k <= 200; k++)
    {
        glVertex2f(810, 200);
        glVertex2f(810 + (80 * cos(k * twicePi / 200)), 200 + (80 * sin(k * twicePi / 200)));
    }
    glEnd();

    //back
    glBegin(GL_QUADS);
    glColor3ub(backred, backgreen, backblue);
    glVertex2i(0, 100);
    glVertex2i(300, 100);
    glVertex2i(300, 180);
    glVertex2i(0, 180);

    glEnd();

    //back2
    glBegin(GL_QUADS);
    glColor3ub(backred, backgreen, backblue);
    glVertex2i(960, 100);
    glVertex2i(660, 100);
    glVertex2i(660, 180);
    glVertex2i(960, 180);

    glEnd();

    //Road
    glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
    glVertex2i(0, 100);
    glVertex2i(0, 60);
    glVertex2i(960, 60);
    glVertex2i(960, 100);
    glEnd();

    //Yellow Line On Road
    int X1, X2, Y1, Y2;
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 0);
    X1 = 100; X2 = X1+90; Y1 = 82; Y2 = 84;
    for(int i=0; i<5; i++)
    {
        glVertex2i(X1, Y1);
        glVertex2i(X1, Y2);
        glVertex2i(X2, Y2);
        glVertex2i(X2, Y1);

        X1 += 200; X2 = X1+90;
    }


    //Road Border
    glBegin(GL_QUADS);
    X1 = 0; X2 = 5; Y1 = 96; Y2 = 100;
    glColor3ub(200, 200, 100);
    for(int i=0;i<1;i++)
    {
        for( int j=0;j<150;j++)
        {
            glVertex2i(X1, Y1);
            glVertex2i(X1, Y2);
            glVertex2i(X2, Y2);
            glVertex2i(X2, Y1);
            X1 += 8; X2 += 8;
        }
    }

    //Road border 2
    glBegin(GL_QUADS);
    glColor3ub(150, 150, 190);
    glVertex2i(0, 56);
    glVertex2i(0, 61);
    glVertex2i(960, 61);
    glVertex2i(960, 56);
    glEnd();

    glBegin(GL_QUADS);
    X1 = 0; X2 = 5; Y1 = 61; Y2 = 64;
    glColor3ub(200, 200, 100);
    for(int i=0;i<1;i++)
    {
        for( int j=0;j<150;j++)
        {
            glVertex2i(X1, Y1);
            glVertex2i(X1, Y2);
            glVertex2i(X2, Y2);
            glVertex2i(X2, Y1);
            X1 += 8; X2 += 8;
        }
    }
    glEnd();

    //Zebra crossing
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(200, 200, 200);
    glVertex2i(38, 68);
    glVertex2i(68, 68);

    glVertex2i(44, 76);
    glVertex2i(74, 76);

    glVertex2i(48, 84);
    glVertex2i(78, 84);

    glVertex2i(52, 92);
    glVertex2i(82, 92);
    glEnd();

}


//Trees
void tree()
{
    int X0 = -25, Y0 = -5;

    //Small triangle tree1
    glBegin(GL_TRIANGLES);
    glScaled(2, 2, 0);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);

    glEnd();

    //Small triangle tree2
    X0 = -920; Y0 = -40;
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);
    glEnd();

    //Small triangle tree3
    X0 = 0; Y0 = -40;
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);
    glEnd();

    //Small triangle tree4
    X0 = -360; Y0 = -40;
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);
    glEnd();

    //Small triangle tree5
    X0 = -630; Y0 = -40;
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);
    glEnd();

    //Small triangle tree5
    X0 = -900; Y0 = -5;
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);
    glEnd();


    //Bush
    X0 = 5, Y0 = 120;
    //1
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(50 - X0, 160 - Y0);
    glVertex2i(50 - X0, 175 - Y0);
    glVertex2i(80 - X0, 175 - Y0);
    glVertex2i(80 - X0, 160 - Y0);

    glVertex2i(47 - X0, 164 - Y0);
    glVertex2i(47 - X0, 169 - Y0);
    glVertex2i(83 - X0, 169 - Y0);
    glVertex2i(83 - X0, 164 - Y0);

    glVertex2i(57 - X0, 175 - Y0);
    glVertex2i(57 - X0, 180 - Y0);
    glVertex2i(76 - X0, 180 - Y0);
    glVertex2i(76 - X0, 175 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(57 - X0, 164 - Y0);
    glVertex2i(57 - X0, 175 - Y0);
    glVertex2i(67 - X0, 175 - Y0);
    glVertex2i(67 - X0, 164 - Y0);

    glVertex2i(54 - X0, 168 - Y0);
    glVertex2i(54 - X0, 172 - Y0);
    glVertex2i(70 - X0, 172 - Y0);
    glVertex2i(70 - X0, 168 - Y0);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(250 - X0, 160 - Y0);
    glVertex2i(250 - X0, 175 - Y0);
    glVertex2i(280 - X0, 175 - Y0);
    glVertex2i(280 - X0, 160 - Y0);

    glVertex2i(247 - X0, 164 - Y0);
    glVertex2i(247 - X0, 169 - Y0);
    glVertex2i(283 - X0, 169 - Y0);
    glVertex2i(283 - X0, 164 - Y0);

    glVertex2i(257 - X0, 175 - Y0);
    glVertex2i(257 - X0, 180 - Y0);
    glVertex2i(276 - X0, 180 - Y0);
    glVertex2i(276 - X0, 175 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(257 - X0, 164 - Y0);
    glVertex2i(257 - X0, 175 - Y0);
    glVertex2i(267 - X0, 175 - Y0);
    glVertex2i(267 - X0, 164 - Y0);

    glVertex2i(254 - X0, 168 - Y0);
    glVertex2i(254 - X0, 172 - Y0);
    glVertex2i(270 - X0, 172 - Y0);
    glVertex2i(270 - X0, 168 - Y0);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(650 - X0, 160 - Y0);
    glVertex2i(650 - X0, 175 - Y0);
    glVertex2i(680 - X0, 175 - Y0);
    glVertex2i(680 - X0, 160 - Y0);

    glVertex2i(647 - X0, 164 - Y0);
    glVertex2i(647 - X0, 169 - Y0);
    glVertex2i(683 - X0, 169 - Y0);
    glVertex2i(683 - X0, 164 - Y0);

    glVertex2i(657 - X0, 175 - Y0);
    glVertex2i(657 - X0, 180 - Y0);
    glVertex2i(676 - X0, 180 - Y0);
    glVertex2i(676 - X0, 175 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(657 - X0, 164 - Y0);
    glVertex2i(657 - X0, 175 - Y0);
    glVertex2i(667 - X0, 175 - Y0);
    glVertex2i(667 - X0, 164 - Y0);

    glVertex2i(654 - X0, 168 - Y0);
    glVertex2i(654 - X0, 172 - Y0);
    glVertex2i(670 - X0, 172 - Y0);
    glVertex2i(670 - X0, 168 - Y0);
    glEnd();

    //4
    X0 = -150, Y0 = 120;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(650 - X0, 160 - Y0);
    glVertex2i(650 - X0, 175 - Y0);
    glVertex2i(680 - X0, 175 - Y0);
    glVertex2i(680 - X0, 160 - Y0);

    glVertex2i(647 - X0, 164 - Y0);
    glVertex2i(647 - X0, 169 - Y0);
    glVertex2i(683 - X0, 169 - Y0);
    glVertex2i(683 - X0, 164 - Y0);

    glVertex2i(657 - X0, 175 - Y0);
    glVertex2i(657 - X0, 180 - Y0);
    glVertex2i(676 - X0, 180 - Y0);
    glVertex2i(676 - X0, 175 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(657 - X0, 164 - Y0);
    glVertex2i(657 - X0, 175 - Y0);
    glVertex2i(667 - X0, 175 - Y0);
    glVertex2i(667 - X0, 164 - Y0);

    glVertex2i(654 - X0, 168 - Y0);
    glVertex2i(654 - X0, 172 - Y0);
    glVertex2i(670 - X0, 172 - Y0);
    glVertex2i(670 - X0, 168 - Y0);
    glEnd();

    //5
    X0 = 600, Y0 = 160;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(650 - X0, 160 - Y0);
    glVertex2i(650 - X0, 175 - Y0);
    glVertex2i(680 - X0, 175 - Y0);
    glVertex2i(680 - X0, 160 - Y0);

    glVertex2i(647 - X0, 164 - Y0);
    glVertex2i(647 - X0, 169 - Y0);
    glVertex2i(683 - X0, 169 - Y0);
    glVertex2i(683 - X0, 164 - Y0);

    glVertex2i(657 - X0, 175 - Y0);
    glVertex2i(657 - X0, 180 - Y0);
    glVertex2i(676 - X0, 180 - Y0);
    glVertex2i(676 - X0, 175 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(657 - X0, 164 - Y0);
    glVertex2i(657 - X0, 175 - Y0);
    glVertex2i(667 - X0, 175 - Y0);
    glVertex2i(667 - X0, 164 - Y0);

    glVertex2i(654 - X0, 168 - Y0);
    glVertex2i(654 - X0, 172 - Y0);
    glVertex2i(670 - X0, 172 - Y0);
    glVertex2i(670 - X0, 168 - Y0);
    glEnd();

    //Big Bush1
    X0 = -370, Y0 = 140;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);
    glEnd();



    //Big Bush2
    X0 = 0, Y0 = 130;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);
    glEnd();

    //Big Bush3
    X0 = 170, Y0 = 155;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);
    glEnd();

    //Big Bush4
    X0 = -170, Y0 = 162;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);
    glEnd();

    //Big Bush5
    X0 = -480, Y0 = 165;
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);
    glEnd();

    //Tree
    //1
    X0 = 0, Y0 = 110;
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(120 - X0, 160 - Y0);
    glVertex2i(120 - X0, 200 - Y0);
    glVertex2i(128 - X0, 200 - Y0);
    glVertex2i(128 - X0, 160 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 188 - Y0);
    glVertex2i(138 - X0, 188 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 200 - Y0);
    glVertex2i(113 - X0, 200 - Y0);
    glVertex2i(113 - X0, 183 - Y0);

    glVertex2i(135 - X0, 183 - Y0);
    glVertex2i(135 - X0, 200 - Y0);
    glVertex2i(138 - X0, 200 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(105 - X0, 195 - Y0);
    glVertex2i(105 - X0, 214 - Y0);
    glVertex2i(143 - X0, 214 - Y0);
    glVertex2i(143 - X0, 195 - Y0);

    glVertex2i(127 - X0, 192 - Y0);
    glVertex2i(126 - X0, 195 - Y0);
    glVertex2i(140 - X0, 195 - Y0);
    glVertex2i(140 - X0, 192 - Y0);

    glVertex2i(102 - X0, 198 - Y0);
    glVertex2i(102 - X0, 203 - Y0);
    glVertex2i(146 - X0, 203 - Y0);
    glVertex2i(146 - X0, 198 - Y0);

    glVertex2i(108 - X0, 214 - Y0);
    glVertex2i(108 - X0, 219 - Y0);
    glVertex2i(140 - X0, 219 - Y0);
    glVertex2i(140 - X0, 214 - Y0);

    glVertex2i(112 - X0, 219 - Y0);
    glVertex2i(112 - X0, 223 - Y0);
    glVertex2i(136 - X0, 223 - Y0);
    glVertex2i(136 - X0, 219 - Y0);

    glVertex2i(102 - X0, 205 - Y0);
    glVertex2i(102 - X0, 209 - Y0);
    glVertex2i(146 - X0, 209 - Y0);
    glVertex2i(146 - X0, 205 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(115 - X0, 205 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(119 - X0, 213 - Y0);
    glVertex2i(119 - X0, 205 - Y0);

    glVertex2i(115 - X0, 210 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(125 - X0, 213 - Y0);
    glVertex2i(125 - X0, 210 - Y0);

    glEnd();

    //tree 2
    X0 = 0, Y0 = 130;
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(620 - X0, 160 - Y0);
    glVertex2i(620 - X0, 200 - Y0);
    glVertex2i(628 - X0, 200 - Y0);
    glVertex2i(628 - X0, 160 - Y0);

    glVertex2i(610 - X0, 183 - Y0);
    glVertex2i(610 - X0, 188 - Y0);
    glVertex2i(638 - X0, 188 - Y0);
    glVertex2i(638 - X0, 183 - Y0);

    glVertex2i(610 - X0, 183 - Y0);
    glVertex2i(610 - X0, 200 - Y0);
    glVertex2i(613 - X0, 200 - Y0);
    glVertex2i(613 - X0, 183 - Y0);

    glVertex2i(635 - X0, 183 - Y0);
    glVertex2i(635 - X0, 200 - Y0);
    glVertex2i(638 - X0, 200 - Y0);
    glVertex2i(638 - X0, 183 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(605 - X0, 195 - Y0);
    glVertex2i(605 - X0, 214 - Y0);
    glVertex2i(643 - X0, 214 - Y0);
    glVertex2i(643 - X0, 195 - Y0);

    glVertex2i(627 - X0, 192 - Y0);
    glVertex2i(626 - X0, 195 - Y0);
    glVertex2i(640 - X0, 195 - Y0);
    glVertex2i(640 - X0, 192 - Y0);

    glVertex2i(602 - X0, 198 - Y0);
    glVertex2i(602 - X0, 203 - Y0);
    glVertex2i(646 - X0, 203 - Y0);
    glVertex2i(646 - X0, 198 - Y0);

    glVertex2i(608 - X0, 214 - Y0);
    glVertex2i(608 - X0, 219 - Y0);
    glVertex2i(640 - X0, 219 - Y0);
    glVertex2i(640 - X0, 214 - Y0);

    glVertex2i(612 - X0, 219 - Y0);
    glVertex2i(612 - X0, 223 - Y0);
    glVertex2i(636 - X0, 223 - Y0);
    glVertex2i(636 - X0, 219 - Y0);

    glVertex2i(602 - X0, 205 - Y0);
    glVertex2i(602 - X0, 209 - Y0);
    glVertex2i(646 - X0, 209 - Y0);
    glVertex2i(646 - X0, 205 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(615 - X0, 205 - Y0);
    glVertex2i(615 - X0, 213 - Y0);
    glVertex2i(619 - X0, 213 - Y0);
    glVertex2i(619 - X0, 205 - Y0);

    glVertex2i(615 - X0, 210 - Y0);
    glVertex2i(615 - X0, 213 - Y0);
    glVertex2i(625 - X0, 213 - Y0);
    glVertex2i(625 - X0, 210 - Y0);

    glEnd();


    //tree3
    X0 = -750, Y0 = 110;
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(120 - X0, 160 - Y0);
    glVertex2i(120 - X0, 200 - Y0);
    glVertex2i(128 - X0, 200 - Y0);
    glVertex2i(128 - X0, 160 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 188 - Y0);
    glVertex2i(138 - X0, 188 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 200 - Y0);
    glVertex2i(113 - X0, 200 - Y0);
    glVertex2i(113 - X0, 183 - Y0);

    glVertex2i(135 - X0, 183 - Y0);
    glVertex2i(135 - X0, 200 - Y0);
    glVertex2i(138 - X0, 200 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(105 - X0, 195 - Y0);
    glVertex2i(105 - X0, 214 - Y0);
    glVertex2i(143 - X0, 214 - Y0);
    glVertex2i(143 - X0, 195 - Y0);

    glVertex2i(127 - X0, 192 - Y0);
    glVertex2i(126 - X0, 195 - Y0);
    glVertex2i(140 - X0, 195 - Y0);
    glVertex2i(140 - X0, 192 - Y0);

    glVertex2i(102 - X0, 198 - Y0);
    glVertex2i(102 - X0, 203 - Y0);
    glVertex2i(146 - X0, 203 - Y0);
    glVertex2i(146 - X0, 198 - Y0);

    glVertex2i(108 - X0, 214 - Y0);
    glVertex2i(108 - X0, 219 - Y0);
    glVertex2i(140 - X0, 219 - Y0);
    glVertex2i(140 - X0, 214 - Y0);

    glVertex2i(112 - X0, 219 - Y0);
    glVertex2i(112 - X0, 223 - Y0);
    glVertex2i(136 - X0, 223 - Y0);
    glVertex2i(136 - X0, 219 - Y0);

    glVertex2i(102 - X0, 205 - Y0);
    glVertex2i(102 - X0, 209 - Y0);
    glVertex2i(146 - X0, 209 - Y0);
    glVertex2i(146 - X0, 205 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(115 - X0, 205 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(119 - X0, 213 - Y0);
    glVertex2i(119 - X0, 205 - Y0);

    glVertex2i(115 - X0, 210 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(125 - X0, 213 - Y0);
    glVertex2i(125 - X0, 210 - Y0);

    glEnd();

    //tree4
    X0 = -220, Y0 = 145;
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(120 - X0, 160 - Y0);
    glVertex2i(120 - X0, 200 - Y0);
    glVertex2i(128 - X0, 200 - Y0);
    glVertex2i(128 - X0, 160 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 188 - Y0);
    glVertex2i(138 - X0, 188 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 200 - Y0);
    glVertex2i(113 - X0, 200 - Y0);
    glVertex2i(113 - X0, 183 - Y0);

    glVertex2i(135 - X0, 183 - Y0);
    glVertex2i(135 - X0, 200 - Y0);
    glVertex2i(138 - X0, 200 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(105 - X0, 195 - Y0);
    glVertex2i(105 - X0, 214 - Y0);
    glVertex2i(143 - X0, 214 - Y0);
    glVertex2i(143 - X0, 195 - Y0);

    glVertex2i(127 - X0, 192 - Y0);
    glVertex2i(126 - X0, 195 - Y0);
    glVertex2i(140 - X0, 195 - Y0);
    glVertex2i(140 - X0, 192 - Y0);

    glVertex2i(102 - X0, 198 - Y0);
    glVertex2i(102 - X0, 203 - Y0);
    glVertex2i(146 - X0, 203 - Y0);
    glVertex2i(146 - X0, 198 - Y0);

    glVertex2i(108 - X0, 214 - Y0);
    glVertex2i(108 - X0, 219 - Y0);
    glVertex2i(140 - X0, 219 - Y0);
    glVertex2i(140 - X0, 214 - Y0);

    glVertex2i(112 - X0, 219 - Y0);
    glVertex2i(112 - X0, 223 - Y0);
    glVertex2i(136 - X0, 223 - Y0);
    glVertex2i(136 - X0, 219 - Y0);

    glVertex2i(102 - X0, 205 - Y0);
    glVertex2i(102 - X0, 209 - Y0);
    glVertex2i(146 - X0, 209 - Y0);
    glVertex2i(146 - X0, 205 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(115 - X0, 205 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(119 - X0, 213 - Y0);
    glVertex2i(119 - X0, 205 - Y0);

    glVertex2i(115 - X0, 210 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(125 - X0, 213 - Y0);
    glVertex2i(125 - X0, 210 - Y0);

    glEnd();
}

void tree1()
{
    int X0 = 0, Y0 = 0;
    //tree1
    X0 = -150, Y0 = 7;
    glPushMatrix();
    glScaled(.65,.65, 0);
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2i(120 - X0, 160 - Y0);
    glVertex2i(120 - X0, 200 - Y0);
    glVertex2i(128 - X0, 200 - Y0);
    glVertex2i(128 - X0, 160 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 188 - Y0);
    glVertex2i(138 - X0, 188 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glVertex2i(110 - X0, 183 - Y0);
    glVertex2i(110 - X0, 200 - Y0);
    glVertex2i(113 - X0, 200 - Y0);
    glVertex2i(113 - X0, 183 - Y0);

    glVertex2i(135 - X0, 183 - Y0);
    glVertex2i(135 - X0, 200 - Y0);
    glVertex2i(138 - X0, 200 - Y0);
    glVertex2i(138 - X0, 183 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(105 - X0, 195 - Y0);
    glVertex2i(105 - X0, 214 - Y0);
    glVertex2i(143 - X0, 214 - Y0);
    glVertex2i(143 - X0, 195 - Y0);

    glVertex2i(127 - X0, 192 - Y0);
    glVertex2i(126 - X0, 195 - Y0);
    glVertex2i(140 - X0, 195 - Y0);
    glVertex2i(140 - X0, 192 - Y0);

    glVertex2i(102 - X0, 198 - Y0);
    glVertex2i(102 - X0, 203 - Y0);
    glVertex2i(146 - X0, 203 - Y0);
    glVertex2i(146 - X0, 198 - Y0);

    glVertex2i(108 - X0, 214 - Y0);
    glVertex2i(108 - X0, 219 - Y0);
    glVertex2i(140 - X0, 219 - Y0);
    glVertex2i(140 - X0, 214 - Y0);

    glVertex2i(112 - X0, 219 - Y0);
    glVertex2i(112 - X0, 223 - Y0);
    glVertex2i(136 - X0, 223 - Y0);
    glVertex2i(136 - X0, 219 - Y0);

    glVertex2i(102 - X0, 205 - Y0);
    glVertex2i(102 - X0, 209 - Y0);
    glVertex2i(146 - X0, 209 - Y0);
    glVertex2i(146 - X0, 205 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(115 - X0, 205 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(119 - X0, 213 - Y0);
    glVertex2i(119 - X0, 205 - Y0);

    glVertex2i(115 - X0, 210 - Y0);
    glVertex2i(115 - X0, 213 - Y0);
    glVertex2i(125 - X0, 213 - Y0);
    glVertex2i(125 - X0, 210 - Y0);

    glEnd();
    glPopMatrix();



    //Big Bush1
    glPushMatrix();
    X0 = 390, Y0 = 6;
    glScaled(.65, .65, 0);
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);
    glEnd();

    glPopMatrix();

    //Big Bush2
    glPushMatrix();
    X0 = -90, Y0 = -7;
    glScaled(.6, .6, 0);
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);

    glEnd();
    glPopMatrix();

    //Small triangle tree 1
    glPushMatrix();
    glScaled(.7,.7,0);
    X0 = -1290; Y0 = -141;
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 150, 0);
    glVertex2i(5 - X0, 2 - Y0);
    glVertex2i(15 - X0, 55 - Y0);
    glVertex2i(25 - X0, 2 - Y0);

    glColor3ub(0, 100, 0);
    glVertex2i(0 - X0, 2 - Y0);
    glVertex2i(10 - X0, 35 - Y0);
    glVertex2i(20 - X0, 2 - Y0);

    glColor3ub(0, 150, 0);
    glVertex2i(15 - X0, 2 - Y0);
    glVertex2i(25 - X0, 40 - Y0);
    glVertex2i(35 - X0, 2 - Y0);
    glEnd();
    glPopMatrix();


    //Big Bush3
    glPushMatrix();
    X0 = -910, Y0 = -7;
    glScaled(.6, .6, 0);
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0);
    glVertex2i(450 - X0, 160 - Y0);
    glVertex2i(450 - X0, 175 - Y0);
    glVertex2i(500 - X0, 175 - Y0);
    glVertex2i(500 - X0, 160 - Y0);

    glVertex2i(447 - X0, 164 - Y0);
    glVertex2i(447 - X0, 169 - Y0);
    glVertex2i(503 - X0, 169 - Y0);
    glVertex2i(503 - X0, 164 - Y0);

    glVertex2i(453 - X0, 175 - Y0);
    glVertex2i(453 - X0, 180 - Y0);
    glVertex2i(496 - X0, 180 - Y0);
    glVertex2i(496 - X0, 175 - Y0);

    glVertex2i(460 - X0, 180 - Y0);
    glVertex2i(460 - X0, 184 - Y0);
    glVertex2i(487 - X0, 184 - Y0);
    glVertex2i(487 - X0, 180 - Y0);

    glColor3ub(0, 160, 0);
    glVertex2i(457 - X0, 164 - Y0);
    glVertex2i(457 - X0, 175 - Y0);
    glVertex2i(467 - X0, 175 - Y0);
    glVertex2i(467 - X0, 164 - Y0);

    glVertex2i(454 - X0, 168 - Y0);
    glVertex2i(454 - X0, 172 - Y0);
    glVertex2i(470 - X0, 172 - Y0);
    glVertex2i(470 - X0, 168 - Y0);

    glVertex2i(472 - X0, 168 - Y0);
    glVertex2i(472 - X0, 178 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(475 - X0, 168 - Y0);

    glVertex2i(475 - X0, 174 - Y0);
    glVertex2i(475 - X0, 178 - Y0);
    glVertex2i(479 - X0, 178 - Y0);
    glVertex2i(479 - X0, 174 - Y0);

    glEnd();
    glPopMatrix();
}
void toggle(int value)
{
    if(value == 0)
    {
        Red1 = 220;
        Green1 = 250;
        Blue1 = 250;

        Red2 = 200;
        Green2 = 250;
        Blue2 = 250;

        Red3 = 160;
        Green3 = 250;
        Blue3 = 250;

        Red4 = 120;
        Green4 = 250;
        Blue4 = 250;

        backred = 215;
        backgreen = 235;
        backblue = 245;

        cr = 230;
        cg = 255;
        cb = 255;

        sizeX = 1;
        sizeY = 1;
    }
    else if(value == 2)
    {
        Red1 = 25;
        Green1 = 25;
        Blue1 = 25;

        Red2 = 25;
        Green2 = 25;
        Blue2 = 25;

        Red3 = 25;
        Green3 = 25;
        Blue3 = 25;

        Red4 = 25;
        Green4 = 25;
        Blue4 = 25;

        backred = 25;
        backgreen = 25;
        backblue = 25;

        cr = 25;
        cg = 25;
        cb = 25;

        sizeX = 0;
        sizeY = 0;
    }
}


