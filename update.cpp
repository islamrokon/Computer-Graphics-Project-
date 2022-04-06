#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctime>
#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>

using namespace std;

extern GLfloat ag;
extern GLfloat position;
extern void toggle(int value);
extern void toggle1(int value);
extern void trigger(int value);
extern void trigger1(int value);
extern void trigger2(int value);
extern GLfloat position1;
extern GLfloat position2;
extern GLfloat position3;

GLfloat speed = 4.0f;
GLfloat speedc = 1;
GLfloat speedcar = 5;

GLint keep = 0;
GLint stop = 0;


void update(int value){

    if(position < -60)
        speedc = -0.5;
    if(position > 70)
        speedc = 0.5;

        position -= speedc;
    if(ag > 360)
    {
        ag  = 0.0f;
    }
    if(position1 < -120)
        position1 = 895;
        position1 -= speedcar;
    if(position2 < -420)
        position2 = 695;
        position2 -=speedcar;

    if(position3 < -720)
        position3 = 495;
        position3 -=speedcar;

    if(stop == 0)
        ag += speed;

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void handleKeypress(unsigned char key, int x, int y)

{
	switch (key)
	{
        case 's':
            keep = 0;
            toggle(0);
            toggle1(0);
            trigger1(1);
            PlaySound(TEXT("1.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
            break;
        case 'n':
        {
            keep = 1;
            toggle(2);
            toggle1(1);
            trigger1(2);
            PlaySound(NULL, 0, 0);
            PlaySound(TEXT("Chirping.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
            break;
        }
        glutPostRedisplay();
    }
}


void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
		    int a= x;
            int b= 460 - y;

		    if((a>821) && (a< 839) && (b>101) && (b<119))
            {
                trigger2(1);
                if(keep == 0)
                    PlaySound(TEXT("1.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                else if(keep == 1)
                    PlaySound(TEXT("Chirping.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
            }
            else if((a>821) && (a< 839) && (b>121) && (b<139))
            {
                trigger2(2);
                PlaySound(NULL, 0, 0);
                sndPlaySound("Traffic.wav", SND_ASYNC);
            }
		}
    }


    if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
            int a= x;
            int b= 460 - y;


		    if((a>305 - 250) && (a< 315 - 250) && (b>205 - 40) && (b<215 - 40))
            {
                trigger(1);

            }

            if((a>305 - 250) && (a<315 - 250) && (b>190 - 40) && (b<200 - 40))
            {
                trigger(2);
            }

            if((a>305 - 250) && (a< 315 - 250) && (b>175 - 40) && (b<185 - 40))
            {
                trigger(3);
            }

		}
	}
}

