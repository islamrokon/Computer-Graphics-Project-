#include <cstdio>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;


double bred = 10;
double bgreen = 10;
double bblue = 60;

double ucolor1 = 195;
double ucolor2 = 195;
double ucolor3 = 195;


void building()
{
     //Building 1
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 120);
    glVertex2i(250, 100);
    glVertex2i(295, 100);
    glVertex2i(295, 200);
    glVertex2i(250, 200);

    glColor3ub(190, 190, 190);
    glVertex2i(280, 100);
    glVertex2i(320, 100);
    glVertex2i(320, 145);
    glVertex2i(280, 145);

    //window 1
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(315, 135);
    glVertex2i(318, 135);
    glVertex2i(318, 140);
    glVertex2i(315, 140);
    //window 2
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(310, 140);
    glVertex2i(313, 140);
    glVertex2i(313, 135);
    glVertex2i(310, 135);
    //window 3
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(315, 125);
    glVertex2i(318, 125);
    glVertex2i(318, 130);
    glVertex2i(315, 130);

    //window 4
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(310, 125);
    glVertex2i(313, 125);
    glVertex2i(313, 130);
    glVertex2i(310, 130);

    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(ucolor1, ucolor2, ucolor3);
    glVertex2i(267, 195);
    glVertex2i(294, 195);

    glVertex2i(267, 185);
    glVertex2i(294, 185);

    glVertex2i(267, 175);
    glVertex2i(294, 175);

    glEnd();

    //Building 2
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 100);
    glVertex2i(200, 100);
    glVertex2i(220, 100);
    glVertex2i(220, 170);
    glVertex2i(200, 170);

    glColor3ub(190, 190, 190);
    glVertex2i(220, 100);
    glVertex2i(265, 100);
    glVertex2i(265, 170);
    glVertex2i(220, 170);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(230, 160);
    glVertex2i(264, 160);

    glVertex2i(230, 150);
    glVertex2i(264, 150);

    glVertex2i(230, 140);
    glVertex2i(264, 140);

    glVertex2i(230, 130);
    glVertex2i(264, 130);

    glVertex2i(230, 120);
    glVertex2i(264, 120);
    glEnd();

    //Building 3
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 100);
    glVertex2i(360, 100);
    glVertex2i(400, 100);
    glVertex2i(400, 130);
    glVertex2i(360, 130);

    glColor3ub(10, 10, 100);
    glVertex2i(400, 100);
    glVertex2i(460, 100);
    glVertex2i(460, 180);
    glVertex2i(400, 180);

    glColor3ub(10, 10, 100);
    glVertex2i(460, 100);
    glVertex2i(510, 100);
    glVertex2i(510, 150);
    glVertex2i(460, 150);

    glColor3ub(220, 220, 220);
    glVertex2i(460, 150);
    glVertex2i(567, 150);
    glVertex2i(567, 180);
    glVertex2i(460, 180);



    glColor3ub(10, 10, 100);
    glVertex2i(510, 145);
    glVertex2i(517, 145);
    glVertex2i(517, 150);
    glVertex2i(510, 150);

    glColor3ub(75, 115, 95);
    glVertex2i(510, 145);
    glVertex2i(605, 145);
    glVertex2i(605, 100);
    glVertex2i(510, 100);

    glColor3ub(195, 195, 195);
    glVertex2i(517, 145);
    glVertex2i(610, 145);
    glVertex2i(610, 150);
    glVertex2i(517, 150);

    //door 1
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(530, 100);
    glVertex2i(560, 100);
    glVertex2i(560, 115);
    glVertex2i(530, 115);

    //door 2
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(570, 100);
    glVertex2i(600, 100);
    glVertex2i(600, 115);
    glVertex2i(570, 115);


    glColor3ub(220, 220, 220);
    glVertex2i(410, 100);
    glVertex2i(470, 100);
    glVertex2i(470, 130);
    glVertex2i(410, 130);

    //win 1
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(425, 118);
    glVertex2i(430, 118);
    glVertex2i(430, 128);
    glVertex2i(425, 128);

    //win 2
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(435, 118);
    glVertex2i(440, 118);
    glVertex2i(440, 128);
    glVertex2i(435, 128);

    //win 2
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(445, 118);
    glVertex2i(450, 118);
    glVertex2i(450, 128);
    glVertex2i(445, 128);

    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(475, 170);
    glVertex2i(555, 170);

    glVertex2i(475, 160);
    glVertex2i(555, 160);

    glEnd();

    //building 5
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 100);
    glVertex2i(750, 100);
    glVertex2i(795, 100);
    glVertex2i(795, 210);
    glVertex2i(750, 210);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(ucolor1, ucolor2, ucolor3);
    glVertex2i(765, 205);
    glVertex2i(796, 205);

    glVertex2i(765, 195);
    glVertex2i(796, 195);

    glVertex2i(765, 185);
    glVertex2i(796, 185);

    glVertex2i(765, 175);
    glVertex2i(796, 175);
    glEnd();

    //building 4
    glBegin(GL_QUADS);
    glColor3ub(10, 10, 100);
    glVertex2i(635, 100);
    glVertex2i(675, 100);
    glVertex2i(675, 170);
    glVertex2i(635, 170);

    glVertex2i(675, 100);
    glVertex2i(710, 100);
    glVertex2i(710, 150);
    glVertex2i(675, 150);

    glVertex2i(710, 150);
    glVertex2i(710, 145);
    glVertex2i(715, 145);
    glVertex2i(715, 150);

    glColor3ub(75, 115, 95);
    glVertex2i(710, 145);
    glVertex2i(775, 145);
    glVertex2i(775, 100);
    glVertex2i(710, 100);

    glColor3ub(170, 170, 170);
    glVertex2i(715, 150);
    glVertex2i(780, 150);
    glVertex2i(780, 145);
    glVertex2i(715, 145);

    glColor3ub(220, 220, 220);
    glVertex2i(675, 150);
    glVertex2i(755, 150);
    glVertex2i(755, 170);
    glVertex2i(675, 170);

    glColor3ub(bred, bgreen, bblue);
    glVertex2i(735, 120);
    glVertex2i(755, 120);
    glVertex2i(755, 100);
    glVertex2i(735, 100);

    glEnd();


    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(bred, bgreen, bblue);
    glVertex2i(685, 165);
    glVertex2i(745, 165);

    glVertex2i(685, 158);
    glVertex2i(745, 158);

    glEnd();


}


void lamppost()
{
    int X1 = 0 , Y1 = 0;

    //lamppost 1
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(160 - X1, 60 - Y1);
    glVertex2i(164 - X1, 60 - Y1);
    glVertex2i(163 - X1, 160 - Y1);
    glVertex2i(161 - X1, 160 - Y1);

    glColor3ub(bred, bgreen, bblue);
    glVertex2i(162, 160);
    glVertex2i(162, 161);
    glVertex2i(175, 163);
    glVertex2i(175, 158);
    glEnd();

    X1 = -220 , Y1 = 0;
    //lamppost 1
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(160 - X1, 60 - Y1);
    glVertex2i(164 - X1, 60 - Y1);
    glVertex2i(163 - X1, 160 - Y1);
    glVertex2i(161 - X1, 160 - Y1);

    glColor3ub(bred, bgreen, bblue);
    glVertex2i(162 - X1, 160);
    glVertex2i(162 - X1, 161);
    glVertex2i(175 - X1, 163);
    glVertex2i(175 - X1, 158);

    glEnd();


    X1 = -650 , Y1 = 0;
    //lamppost 1
    glBegin(GL_QUADS);
    glColor3ub(180, 180, 180);
    glVertex2i(160 - X1, 60 - Y1);
    glVertex2i(164 - X1, 60 - Y1);
    glVertex2i(163 - X1, 160 - Y1);
    glVertex2i(161 - X1, 160 - Y1);

    glColor3ub(bred, bgreen, bblue);
    glVertex2i(162 - X1, 160);
    glVertex2i(162 - X1, 161);
    glVertex2i(175 - X1, 163);
    glVertex2i(175 - X1, 158);
    glEnd();
}

void toggle1(int value)
{
    if(value==0)
    {
        bred = 10;
        bgreen = 10;
        bblue = 60;

        ucolor1 = 195;
        ucolor2 = 195;
        ucolor3 = 195;

    }
    else if(value == 1)
    {
        bred = 255;
        bgreen = 255;
        bblue = 100;

        ucolor1 = 255;
        ucolor2 = 255;
        ucolor3 = 100;
    }
}

