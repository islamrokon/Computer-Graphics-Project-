#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0.0;
double sizeX = 1;
double sizeY = 1;
void clouds()
{

    glPushMatrix();
    glScaled(sizeX,sizeY,1);
    glTranslated(position,0, 0);
    glColor3ub (220,220,220);
    glPointSize(5.0);
    glBegin(GL_QUADS);

    //1
    glVertex2i(60,350);
    glVertex2i(70,350);
    glVertex2i(70,355);
    glVertex2i(60,355);

    glVertex2i(65,345);
    glVertex2i(85,345);
    glVertex2i(85,350);
    glVertex2i(65,350);

    glVertex2i(75,355);
    glVertex2i(80,355);
    glVertex2i(80,350);
    glVertex2i(75,350);

    glVertex2i(70,345);
    glVertex2i(130,345);
    glVertex2i(130,340);
    glVertex2i(70,340);

    glVertex2i(80,335);
    glVertex2i(110,335);
    glVertex2i(110,340);
    glVertex2i(80,340);

    glVertex2i(65,360);
    glVertex2i(75,360);
    glVertex2i(75,355);
    glVertex2i(65,355);

    glVertex2i(100,350);
    glVertex2i(105,350);
    glVertex2i(105,355);
    glVertex2i(100,355);

    glVertex2i(105,350);
    glVertex2i(110,350);
    glVertex2i(110,345);
    glVertex2i(105,345);

    glVertex2i(120,350);
    glVertex2i(140,350);
    glVertex2i(140,345);
    glVertex2i(120,345);

    glVertex2i(130,350);
    glVertex2i(140,350);
    glVertex2i(140,355);
    glVertex2i(130,355);

    glVertex2i(85,360);
    glVertex2i(95,360);
    glVertex2i(95,355);
    glVertex2i(85,355);

    glVertex2i(140,370);
    glVertex2i(140,375);
    glVertex2i(145,375);
    glVertex2i(145,370);

    glVertex2i(85,365);
    glVertex2i(85,370);
    glVertex2i(70,370);
    glVertex2i(70,365);

    //2
    glVertex2i(150,380);
    glVertex2i(170,380);
    glVertex2i(170,385);
    glVertex2i(150,385);

    glVertex2i(160,375);
    glVertex2i(180,375);
    glVertex2i(180,380);
    glVertex2i(160,380);

    glVertex2i(180,375);
    glVertex2i(180,370);
    glVertex2i(200,370);
    glVertex2i(200,375);

    glVertex2i(195,375);
    glVertex2i(195,380);
    glVertex2i(220,380);
    glVertex2i(220,375);

    glVertex2i(215,380);
    glVertex2i(215,385);
    glVertex2i(235,385);
    glVertex2i(235,380);

    glVertex2i(225,390);
    glVertex2i(225,385);
    glVertex2i(235,385);
    glVertex2i(235,390);

    glVertex2i(215,390);
    glVertex2i(215,395);
    glVertex2i(230,395);
    glVertex2i(230,390);
    //3
    glVertex2i(260,370);
    glVertex2i(260,375);
    glVertex2i(270,375);
    glVertex2i(270,370);

    glVertex2i(265,370);
    glVertex2i(265,365);
    glVertex2i(285,365);
    glVertex2i(285,370);

    glVertex2i(280,365);
    glVertex2i(280,360);
    glVertex2i(290,360);
    glVertex2i(290,365);

    glVertex2i(290,360);
    glVertex2i(350,360);
    glVertex2i(350,355);
    glVertex2i(290,355);

    glVertex2i(300,355);
    glVertex2i(320,355);
    glVertex2i(320,350);
    glVertex2i(300,350);

    glVertex2i(265,370);
    glVertex2i(265,365);
    glVertex2i(275,365);
    glVertex2i(275,370);

    glVertex2i(310,365);
    glVertex2i(315,365);
    glVertex2i(315,360);
    glVertex2i(310,360);

    glVertex2i(320,365);
    glVertex2i(325,365);
    glVertex2i(325,360);
    glVertex2i(320,360);

    glVertex2i(330,365);
    glVertex2i(360,365);
    glVertex2i(360,360);
    glVertex2i(330,360);

    glVertex2i(325,370);
    glVertex2i(405,370);
    glVertex2i(405,365);
    glVertex2i(325,365);

    glVertex2i(370,360);
    glVertex2i(400,360);
    glVertex2i(400,365);
    glVertex2i(370,365);

    glVertex2i(380,360);
    glVertex2i(395,360);
    glVertex2i(395,355);
    glVertex2i(380,355);

    glVertex2i(325,370);
    glVertex2i(325,375);
    glVertex2i(320,375);
    glVertex2i(320,370);

    glVertex2i(345,375);
    glVertex2i(355,375);
    glVertex2i(355,370);
    glVertex2i(345,370);

    glVertex2i(375,375);
    glVertex2i(385,375);
    glVertex2i(385,370);
    glVertex2i(375,370);

    glVertex2i(320,385);
    glVertex2i(330,385);
    glVertex2i(330,390);
    glVertex2i(320,390);

    //4
    glVertex2i(440,350);
    glVertex2i(450,350);
    glVertex2i(450,355);
    glVertex2i(440,355);

    glVertex2i(445,345);
    glVertex2i(465,345);
    glVertex2i(465,350);
    glVertex2i(445,350);

    glVertex2i(455,355);
    glVertex2i(460,355);
    glVertex2i(460,350);
    glVertex2i(455,350);

    glVertex2i(450,345);
    glVertex2i(510,345);
    glVertex2i(510,340);
    glVertex2i(450,340);

    glVertex2i(460,335);
    glVertex2i(490,335);
    glVertex2i(490,340);
    glVertex2i(460,340);

    glVertex2i(445,360);
    glVertex2i(455,360);
    glVertex2i(455,355);
    glVertex2i(445,355);

    glVertex2i(480,350);
    glVertex2i(485,350);
    glVertex2i(485,355);
    glVertex2i(480,355);

    glVertex2i(485,350);
    glVertex2i(490,350);
    glVertex2i(490,345);
    glVertex2i(485,345);

    glVertex2i(500,350);
    glVertex2i(520,350);
    glVertex2i(520,345);
    glVertex2i(500,345);

    glVertex2i(510,350);
    glVertex2i(520,350);
    glVertex2i(520,355);
    glVertex2i(510,355);

    glVertex2i(465,360);
    glVertex2i(475,360);
    glVertex2i(475,355);
    glVertex2i(465,355);

    glVertex2i(520,370);
    glVertex2i(520,375);
    glVertex2i(525,375);
    glVertex2i(525,370);

    glVertex2i(465,365);
    glVertex2i(465,370);
    glVertex2i(450,370);
    glVertex2i(450,365);

    //5
    glVertex2i(560,370);
    glVertex2i(560,375);
    glVertex2i(570,375);
    glVertex2i(570,370);

    glVertex2i(565,370);
    glVertex2i(565,365);
    glVertex2i(585,365);
    glVertex2i(585,370);

    glVertex2i(580,365);
    glVertex2i(580,360);
    glVertex2i(590,360);
    glVertex2i(590,365);

    glVertex2i(590,360);
    glVertex2i(650,360);
    glVertex2i(650,355);
    glVertex2i(590,355);

    glVertex2i(600,355);
    glVertex2i(620,355);
    glVertex2i(620,350);
    glVertex2i(600,350);

    glVertex2i(565,370);
    glVertex2i(565,365);
    glVertex2i(575,365);
    glVertex2i(575,370);

    glVertex2i(610,365);
    glVertex2i(615,365);
    glVertex2i(615,360);
    glVertex2i(610,360);

    glVertex2i(620,365);
    glVertex2i(625,365);
    glVertex2i(625,360);
    glVertex2i(620,360);

    glVertex2i(630,365);
    glVertex2i(660,365);
    glVertex2i(660,360);
    glVertex2i(630,360);

    //pro
    glVertex2i(625,370);
    glVertex2i(705,370);
    glVertex2i(705,365);
    glVertex2i(625,365);

    glVertex2i(670,360);
    glVertex2i(700,360);
    glVertex2i(700,365);
    glVertex2i(670,365);

    glVertex2i(680,360);
    glVertex2i(695,360);
    glVertex2i(695,355);
    glVertex2i(680,355);

    glVertex2i(625,370);
    glVertex2i(625,375);
    glVertex2i(620,375);
    glVertex2i(620,370);

    glVertex2i(645,375);
    glVertex2i(655,375);
    glVertex2i(655,370);
    glVertex2i(645,370);

    glVertex2i(675,375);
    glVertex2i(685,375);
    glVertex2i(685,370);
    glVertex2i(675,370);

    glVertex2i(620,385);
    glVertex2i(630,385);
    glVertex2i(630,390);
    glVertex2i(620,390);

    //5
    glVertex2i(760,370);
    glVertex2i(760,375);
    glVertex2i(770,375);
    glVertex2i(770,370);

    glVertex2i(765,370);
    glVertex2i(765,365);
    glVertex2i(785,365);
    glVertex2i(785,370);

    glVertex2i(780,365);
    glVertex2i(780,360);
    glVertex2i(790,360);
    glVertex2i(790,365);

    glVertex2i(790,360);
    glVertex2i(850,360);
    glVertex2i(850,355);
    glVertex2i(790,355);

    glVertex2i(800,355);
    glVertex2i(820,355);
    glVertex2i(820,350);
    glVertex2i(800,350);

    glVertex2i(765,370);
    glVertex2i(765,365);
    glVertex2i(775,365);
    glVertex2i(775,370);

    glVertex2i(810,365);
    glVertex2i(815,365);
    glVertex2i(815,360);
    glVertex2i(810,360);

    glVertex2i(820,365);
    glVertex2i(825,365);
    glVertex2i(825,360);
    glVertex2i(820,360);

    glVertex2i(830,365);
    glVertex2i(860,365);
    glVertex2i(860,360);
    glVertex2i(830,360);

    glVertex2i(825,370);
    glVertex2i(905,370);
    glVertex2i(905,365);
    glVertex2i(825,365);

    glVertex2i(870,360);
    glVertex2i(900,360);
    glVertex2i(900,365);
    glVertex2i(870,365);

    glVertex2i(880,360);
    glVertex2i(895,360);
    glVertex2i(895,355);
    glVertex2i(880,355);

    glVertex2i(825,370);
    glVertex2i(825,375);
    glVertex2i(820,375);
    glVertex2i(820,370);

    glVertex2i(845,375);
    glVertex2i(855,375);
    glVertex2i(855,370);
    glVertex2i(845,370);

    glVertex2i(875,375);
    glVertex2i(885,375);
    glVertex2i(885,370);
    glVertex2i(875,370);

    glVertex2i(820,385);
    glVertex2i(830,385);
    glVertex2i(830,390);
    glVertex2i(820,390);

    glColor3ub (255 , 255,255);
    //1
    glVertex2i(70,360);
    glVertex2i(150,360);
    glVertex2i(150,365);
    glVertex2i(70,365);

    glVertex2i(80,365);
    glVertex2i(150,365);
    glVertex2i(150,370);
    glVertex2i(80,370);

    glVertex2i(90,370);
    glVertex2i(115,370);
    glVertex2i(115,375);
    glVertex2i(90,375);

    glVertex2i(125,370);
    glVertex2i(140,370);
    glVertex2i(140,375);
    glVertex2i(125,375);

    glVertex2i(70,350);
    glVertex2i(75,350);
    glVertex2i(75,355);
    glVertex2i(70,355);

    glVertex2i(80,350);
    glVertex2i(100,350);
    glVertex2i(100,355);
    glVertex2i(80,355);

    glVertex2i(80,350);
    glVertex2i(105,350);
    glVertex2i(105,345);
    glVertex2i(80,345);

    glVertex2i(120,350);
    glVertex2i(120,345);
    glVertex2i(110,345);
    glVertex2i(110,350);

    glVertex2i(105,350);
    glVertex2i(130,350);
    glVertex2i(130,355);
    glVertex2i(105,355);

    glVertex2i(75,355);
    glVertex2i(85,355);
    glVertex2i(85,360);
    glVertex2i(75,360);

    glVertex2i(95,360);
    glVertex2i(150,360);
    glVertex2i(150,355);
    glVertex2i(95,355);

    //2
    glVertex2i(180,375);
    glVertex2i(195,375);
    glVertex2i(195,380);
    glVertex2i(180,380);

    glVertex2i(170,385);
    glVertex2i(170,380);
    glVertex2i(215,380);
    glVertex2i(215,385);

    glVertex2i(155,385);
    glVertex2i(225,385);
    glVertex2i(225,390);
    glVertex2i(155,390);

    glVertex2i(155,390);
    glVertex2i(155,395);
    glVertex2i(220,395);
    glVertex2i(220,390);

    glVertex2i(165,400);
    glVertex2i(215,400);
    glVertex2i(215,395);
    glVertex2i(165,395);

    glVertex2i(175,400);
    glVertex2i(200,400);
    glVertex2i(200,405);
    glVertex2i(175,405);

    //3
    glVertex2i(290,365);
    glVertex2i(310,365);
    glVertex2i(310,360);
    glVertex2i(290,360);

    glVertex2i(315,365);
    glVertex2i(320,365);
    glVertex2i(320,360);
    glVertex2i(315,360);

    glVertex2i(325,365);
    glVertex2i(330,365);
    glVertex2i(330,360);
    glVertex2i(325,360);

    glVertex2i(325,370);
    glVertex2i(325,375);
    glVertex2i(345,375);
    glVertex2i(345,370);

    glVertex2i(355,370);
    glVertex2i(375,370);
    glVertex2i(375,375);
    glVertex2i(355,375);

    glVertex2i(385,375);
    glVertex2i(400,375);
    glVertex2i(400,370);
    glVertex2i(385,370);

    glVertex2i(265,385);
    glVertex2i(400,385);
    glVertex2i(400,375);
    glVertex2i(265,375);

    glVertex2i(270,375);
    glVertex2i(320,375);
    glVertex2i(320,370);
    glVertex2i(270,370);

    glVertex2i(285,370);
    glVertex2i(325,370);
    glVertex2i(325,365);
    glVertex2i(285,365);

    glVertex2i(275,390);
    glVertex2i(320,390);
    glVertex2i(320,385);
    glVertex2i(275,385);

    glVertex2i(285,395);
    glVertex2i(320,395);
    glVertex2i(320,390);
    glVertex2i(285,390);

    glVertex2i(295,395);
    glVertex2i(310,395);
    glVertex2i(310,400);
    glVertex2i(295,400);

    glVertex2i(270,375);
    glVertex2i(320,375);
    glVertex2i(320,370);
    glVertex2i(270,370);

    glVertex2i(330,385);
    glVertex2i(390,385);
    glVertex2i(390,390);
    glVertex2i(330,390);

    glVertex2i(340,390);
    glVertex2i(380,390);
    glVertex2i(380,395);
    glVertex2i(340,395);

    glVertex2i(350,395);
    glVertex2i(370,395);
    glVertex2i(370,400);
    glVertex2i(350,400);

    //4
    glVertex2i(450,360);
    glVertex2i(530,360);
    glVertex2i(530,365);
    glVertex2i(450,365);

    glVertex2i(460,365);
    glVertex2i(530,365);
    glVertex2i(530,370);
    glVertex2i(460,370);

    glVertex2i(470,370);
    glVertex2i(495,370);
    glVertex2i(495,375);
    glVertex2i(470,375);

    glVertex2i(495,370);
    glVertex2i(520,370);
    glVertex2i(520,375);
    glVertex2i(495,375);

    glVertex2i(450,350);
    glVertex2i(455,350);
    glVertex2i(455,355);
    glVertex2i(450,355);

    glVertex2i(460,350);
    glVertex2i(480,350);
    glVertex2i(480,355);
    glVertex2i(460,355);

    glVertex2i(460,350);
    glVertex2i(485,350);
    glVertex2i(485,345);
    glVertex2i(460,345);

    glVertex2i(500,350);
    glVertex2i(500,345);
    glVertex2i(490,345);
    glVertex2i(490,350);

    glVertex2i(485,350);
    glVertex2i(510,350);
    glVertex2i(510,355);
    glVertex2i(485,355);

    glVertex2i(455,355);
    glVertex2i(465,355);
    glVertex2i(465,360);
    glVertex2i(455,360);

    glVertex2i(475,360);
    glVertex2i(530,360);
    glVertex2i(530,355);
    glVertex2i(475,355);

    glVertex2i(590,365);
    glVertex2i(610,365);
    glVertex2i(610,360);
    glVertex2i(590,360);

    glVertex2i(615,365);
    glVertex2i(620,365);
    glVertex2i(620,360);
    glVertex2i(615,360);

    glVertex2i(625,365);
    glVertex2i(630,365);
    glVertex2i(630,360);
    glVertex2i(625,360);

    glVertex2i(625,370);
    glVertex2i(625,375);
    glVertex2i(645,375);
    glVertex2i(645,370);

    glVertex2i(655,370);
    glVertex2i(675,370);
    glVertex2i(675,375);
    glVertex2i(655,375);

    glVertex2i(685,375);
    glVertex2i(700,375);
    glVertex2i(700,370);
    glVertex2i(685,370);

    glVertex2i(565,385);
    glVertex2i(700,385);
    glVertex2i(700,375);
    glVertex2i(565,375);

    glVertex2i(570,375);
    glVertex2i(620,375);
    glVertex2i(620,370);
    glVertex2i(570,370);

    glVertex2i(585,370);
    glVertex2i(625,370);
    glVertex2i(625,365);
    glVertex2i(585,365);

    glVertex2i(575,390);
    glVertex2i(620,390);
    glVertex2i(620,385);
    glVertex2i(575,385);

    glVertex2i(585,395);
    glVertex2i(620,395);
    glVertex2i(620,390);
    glVertex2i(585,390);

    glVertex2i(595,395);
    glVertex2i(610,395);
    glVertex2i(610,400);
    glVertex2i(595,400);

    glVertex2i(570,375);
    glVertex2i(620,375);
    glVertex2i(620,370);
    glVertex2i(570,370);

    glVertex2i(630,385);
    glVertex2i(690,385);
    glVertex2i(690,390);
    glVertex2i(630,390);

    glVertex2i(640,390);
    glVertex2i(680,390);
    glVertex2i(680,395);
    glVertex2i(640,395);

    glVertex2i(650,395);
    glVertex2i(670,395);
    glVertex2i(670,400);
    glVertex2i(650,400);

    //5
    glVertex2i(790,365);
    glVertex2i(810,365);
    glVertex2i(810,360);
    glVertex2i(790,360);

    glVertex2i(715,365);
    glVertex2i(720,365);
    glVertex2i(720,360);
    glVertex2i(715,360);

    glVertex2i(725,365);
    glVertex2i(730,365);
    glVertex2i(730,360);
    glVertex2i(725,360);

    glVertex2i(725,370);
    glVertex2i(725,375);
    glVertex2i(745,375);
    glVertex2i(745,370);

    glVertex2i(755,370);
    glVertex2i(775,370);
    glVertex2i(775,375);
    glVertex2i(755,375);

    glVertex2i(785,375);
    glVertex2i(800,375);
    glVertex2i(800,370);
    glVertex2i(785,370);

    glVertex2i(765,385);
    glVertex2i(900,385);
    glVertex2i(900,375);
    glVertex2i(765,375);

    glVertex2i(770,375);
    glVertex2i(820,375);
    glVertex2i(820,370);
    glVertex2i(770,370);

    glVertex2i(785,370);
    glVertex2i(825,370);
    glVertex2i(825,365);
    glVertex2i(785,365);

    glVertex2i(775,390);
    glVertex2i(820,390);
    glVertex2i(820,385);
    glVertex2i(775,385);

    glVertex2i(785,395);
    glVertex2i(820,395);
    glVertex2i(820,390);
    glVertex2i(785,390);

    glVertex2i(795,395);
    glVertex2i(810,395);
    glVertex2i(810,400);
    glVertex2i(795,400);

    glVertex2i(770,375);
    glVertex2i(820,375);
    glVertex2i(820,370);
    glVertex2i(770,370);

    glVertex2i(830,385);
    glVertex2i(890,385);
    glVertex2i(890,390);
    glVertex2i(830,390);

    glVertex2i(840,390);
    glVertex2i(880,390);
    glVertex2i(880,395);
    glVertex2i(840,395);

    glVertex2i(850,395);
    glVertex2i(870,395);
    glVertex2i(870,400);
    glVertex2i(850,400);
    glEnd();
    glPopMatrix();
}

