#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include <GL/gl.h>
#include <iostream>
# define PI           3.14159265358979323846

using namespace std;

float _angle = 0.0f;
float move1=0.4f;
float move2=0.2f;
float move3=0.9f;
float move4=-0.5f;
float move5=-0.2f;
float move6=0.9f;
float move7=0.9f;
float move8 = 0.1f;//Windmil
float move9 = 0.1f;//Windmil
float move10 = 0.1f;//Windmil
float move11 = 0.1f;//Windmil

GLfloat position = 0.0f;
GLfloat speed = 0.006f;
GLfloat positionB = 0.0f; //Bird
GLfloat speedB = 0.01f;
GLfloat positionTrain = 0.0f; //Train
GLfloat speedTrain = 0.005f;
GLfloat j = 0.0f;

void Ground(){ //801
    //Ground
    glBegin(GL_QUADS);
    glColor3f(0.741f, 0.718f, 0.420f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();
}


void Obstacles(){ //802
    //1st Bench Bar
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2f(-0.1f, 0.4f);
glVertex2f(-0.07f, 0.45f);
glVertex2f(-0.07f, 0.45f);
glVertex2f(0.17f, 0.45f);
glVertex2f(0.17f, 0.45f);
glVertex2f(0.2f, 0.4f);
glVertex2f(0.0f, 0.38f);
glVertex2f(0.0f, 0.45f);
glVertex2f(0.1f, 0.45f);
glVertex2f(0.1f, 0.38f);
glEnd();
//2nd Bench Bar
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.17f, 0.35f);
glVertex2f(-0.17f, 0.35f);
glVertex2f(0.07f, 0.35f);
glVertex2f(0.07f, 0.35f);
glVertex2f(0.1f, 0.3f);
glVertex2f(0.0f, 0.28f);
glVertex2f(0.0f, 0.35f);
glVertex2f(-0.1f, 0.35f);
glVertex2f(-0.1f, 0.28f);
glEnd();



}
void Train(){   //803
glLoadIdentity();
glPushMatrix();
glTranslatef(-positionTrain,0,0);
glTranslatef(0.0,0.65,0);    //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();

glLoadIdentity();
glPopMatrix();            //Train ends
}



void Ground2(){  //804
    //Sky
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.749, 1.000);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(1.0f, 0.65f);
    glVertex2f(1.0f, 1.0f);
    glEnd();

    //Hills 1
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.9f, 0.7f);
    glVertex2f(-0.95f, 0.74f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.63f, 0.75f);
    glVertex2f(-0.55f, 0.67f);
    glVertex2f(-0.5f, 0.65f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.92f, 0.65f);
    glVertex2f(-0.87f, 0.65f);
    glVertex2f(-0.85f, 0.79f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.68f, 0.65f);
    glVertex2f(-0.64f, 0.65f);
    glVertex2f(-0.75f, 0.8f);
    glEnd();

    //Hills 2
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.65f, 0.65f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.53f, 0.83f);
    glVertex2f(-0.5f, 0.84f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.36f, 0.75f);
    glVertex2f(-0.3f, 0.72f);
    glVertex2f(-0.2f, 0.65f);
    glEnd();
    //Shadow 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.52f, 0.65f);
    glVertex2f(-0.39f, 0.65f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();

    //Hills 3
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.2f, 0.65f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.06f, 0.8f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(0.03f, 0.9f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.2f, 0.83f);
    glVertex2f(0.27f, 0.73f);
    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.4f, 0.65f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.04f, 0.65f);
    glVertex2f(0.03f, 0.65f);
    glVertex2f(0.03f, 0.9f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.22f, 0.65f);
    glVertex2f(0.29f, 0.65f);
    glVertex2f(0.1f, 0.9f);
    glEnd();

    //Hills 4
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(0.3f, 0.65f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.44f, 0.8f);
    glVertex2f(0.47f, 0.75f);
    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.56f, 0.84f);
    glVertex2f(0.6f, 0.86f);
    glVertex2f(0.7f, 0.88f);
    glVertex2f(0.75f, 0.75f);
    glVertex2f(0.8f, 0.75f);
    glVertex2f(0.9f, 0.65f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.35f, 0.65f);
    glVertex2f(0.38f, 0.65f);
    glVertex2f(0.42f, 0.8f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.47f, 0.65f);
    glVertex2f(0.52f, 0.65f);
    glVertex2f(0.56f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.7f, 0.65f);
    glVertex2f(0.78f, 0.65f);
    glVertex2f(0.67f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.85f, 0.65f);
    glVertex2f(0.89f, 0.65f);
    glVertex2f(0.82f, 0.73f);
    glEnd();

}





void Road(){   //805
    //Main Road
    glBegin(GL_QUADS);
    glColor3f(0.467f, 0.533f, 0.600f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, 0.2f);
    glEnd();
    //1st road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 0.04f);
    glVertex2f(0.6f, -0.04f);
    glVertex2f(0.8f, -0.04f);
    glVertex2f(0.8f, 0.04f);
    glEnd();
    //2nd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.04f);
    glVertex2f(0.3f, -0.04f);
    glVertex2f(0.5f, -0.04f);
    glVertex2f(0.5f, 0.04f);
    glEnd();
    //3rd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.04f);
    glVertex2f(0.0f, -0.04f);
    glVertex2f(0.2f, -0.04f);
    glVertex2f(0.2f, 0.04f);
    glEnd();
    //4th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.3f, 0.04f);
    glVertex2f(-0.3f, -0.04f);
    glVertex2f(-0.1f, -0.04f);
    glVertex2f(-0.1f, 0.04f);
    glEnd();
    //5th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.6f, 0.04f);
    glVertex2f(-0.6f, -0.04f);
    glVertex2f(-0.4f, -0.04f);
    glVertex2f(-0.4f, 0.04f);
    glEnd();
    //6th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.04f);
    glVertex2f(-0.9f, -0.04f);
    glVertex2f(-0.7f, -0.04f);
    glVertex2f(-0.7f, 0.04f);
    glEnd();
}


void Boxes(){     //806
    //1st Box
    glBegin(GL_POLYGON);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.6f, 0.27f);
    glVertex2f(-0.6f, 0.4f);
    glEnd();
    //2nd Box
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.6f, 0.27f);
    glVertex2f(-0.5f, 0.27f);
    glVertex2f(-0.5f, 0.4f);
    glEnd();
    //3rd Box
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.5f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.4f);
    glEnd();
    //4th Box
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.48f);
    glEnd();
    //5th Box
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.55f, 0.48f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.48f);
    glEnd();

    //Box Lines
    glBegin(GL_LINES);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.45f, 0.4f);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.69f, 0.4f);//
    glVertex2f(-0.69f, 0.27f);
    glVertex2f(-0.67f, 0.4f);
    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.27f);
    glVertex2f(-0.63f, 0.4f);
    glVertex2f(-0.63f, 0.27f);
    glVertex2f(-0.61f, 0.4f);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.61f, 0.27f);//
    glVertex2f(-0.59f, 0.4f);
    glVertex2f(-0.59f, 0.27f);
    glVertex2f(-0.57f, 0.4f);
    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.27f);
    glVertex2f(-0.53f, 0.4f);
    glVertex2f(-0.53f, 0.27f);
    glVertex2f(-0.51f, 0.4f);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.51f, 0.27f);//
    glVertex2f(-0.49f, 0.4f);
    glVertex2f(-0.49f, 0.27f);
    glVertex2f(-0.47f, 0.4f);
    glVertex2f(-0.47f, 0.27f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.27f);
    glVertex2f(-0.43f, 0.4f);
    glVertex2f(-0.43f, 0.27f);
    glVertex2f(-0.41f, 0.4f);
    glVertex2f(-0.41f, 0.27f);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.64f, 0.48f);//
    glVertex2f(-0.64f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.6f, 0.48f);
    glVertex2f(-0.6f, 0.4f);
    glColor3f(0.804, 0.522, 0.247);
    glVertex2f(-0.58f, 0.48f);//
    glVertex2f(-0.58f, 0.4f);
    glVertex2f(-0.56f, 0.48f);
    glVertex2f(-0.56f, 0.4f);
    glVertex2f(-0.54f, 0.48f);
    glVertex2f(-0.54f, 0.4f);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.52f, 0.48f);//
    glVertex2f(-0.52f, 0.4f);
    glVertex2f(-0.5f, 0.48f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.48f, 0.48f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.46f, 0.48f);
    glVertex2f(-0.46f, 0.4f);
    glEnd();
    //dartboard stand
    glBegin(GL_LINES);
	glColor3f(0.502, 0.502, 0.000);
	glVertex2f(-0.26f, 0.45f);
	glVertex2f(-0.26f, 0.25f);
	glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.2f, 0.45f);
    glEnd();
}



void Vehicle(){      //807
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Body
    glBegin(GL_POLYGON);
    glColor3f(0.741f, 0.718f, 0.420f);
    glVertex2f(-0.8f, 0.21f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.4f, 0.21f);
    //glEnd();
    glPopMatrix();
    glEnd();


    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Body
    glBegin(GL_POLYGON);
    glColor3f(0.863f, 0.863f, 0.863f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 0.2f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.7f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 2
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.6f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 3
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.5f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Head Light
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.45f, 0.1f);
    glVertex2f(-0.45f, 0.05f);
    glVertex2f(-0.4f, 0.05f);
    glVertex2f(-0.4f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();


    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Back Light
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.8f, 0.05f);
    glVertex2f(-0.75f, 0.05f);
    glVertex2f(-0.75f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



//Bus Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,0.0f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Bus Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,0.0f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();






    //Military Van Body
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Front Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glPopMatrix();
    glEnd();
    //Military Van Back Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.8f, 0.2f);
    glPopMatrix();
    glEnd();
    //Military Van Head Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.05f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.35f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Back Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();


//Military Van Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move4,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Military Van Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move5,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();

}






void Tabu(){   //808
   //Tabu 1
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.5f);
    glEnd();
    //Door 1
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.73f, 0.58f);
    glVertex2f(-0.73f, 0.5f);
    glVertex2f(-0.67f, 0.5f);
    glVertex2f(-0.67f, 0.58f);
    glEnd();
    //Tabu 2
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.5f);
    glEnd();
    //Door 2
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.43f, 0.58f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.37f, 0.5f);
    glVertex2f(-0.37f, 0.58f);
    glEnd();
    //Tabu 3
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    //Door 3
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.13f, 0.58f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.07f, 0.5f);
    glVertex2f(-0.07f, 0.58f);
    glEnd();
}



void Sun(){   //809
    //Sun
    glBegin(GL_POLYGON);
    glColor3f(1.000, 1.000, 0.000);
    glVertex2f(-0.37f, 0.99f);
    glVertex2f(-0.4f, 0.97f);
    glVertex2f(-0.4f, 0.93f);
    glVertex2f(-0.37f, 0.9f);
    glVertex2f(-0.33f, 0.9f);
    glVertex2f(-0.3f, 0.93f);
    glVertex2f(-0.3f, 0.97f);
    glVertex2f(-0.33f, 0.99f);
    glEnd();
}



void Tree(){   //810
    //Tree log 1
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.57f, 0.7f);
    glVertex2f(-0.57f, 0.6f);
    glVertex2f(-0.53f, 0.6f);
    glVertex2f(-0.53f, 0.7f);
    glEnd();
    //Triangle 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.45f, 0.7f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();
    //Triangle 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-0.67f, 0.72f);
    glVertex2f(-0.43f, 0.72f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();

    //Tree log 2
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.27f, 0.7f);
    glVertex2f(-0.27f, 0.6f);
    glVertex2f(-0.23f, 0.6f);
    glVertex2f(-0.23f, 0.7f);
    glEnd();
    //Triangle 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();
    //Triangle 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-0.37f, 0.72f);
    glVertex2f(-0.13f, 0.72f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();
}



void Gate(){    //811
    //Left Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.23f, 0.2f);
    glVertex2f(0.23f, 0.5f);
    glEnd();
    //Middle Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.47f, 0.5f);
    glVertex2f(0.47f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.5f);
    glEnd();
    //Right Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.77f, 0.5f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.8f, 0.5f);
    glEnd();
    //Upper Part
    glBegin(GL_POLYGON);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.2f, 0.5f);
    glEnd();
    //Check post
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.2f, 0.3);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glEnd();
    //Upper Bars
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.2f, 0.34f);
    glVertex2f(0.25f, 0.3f);
    glVertex2f(0.25f, 0.34f);
    glVertex2f(0.29f, 0.3f);
    glVertex2f(0.29f, 0.34f);
    glVertex2f(0.33f, 0.3f);
    glVertex2f(0.33f, 0.34f);
    glVertex2f(0.37f, 0.3f);
    glVertex2f(0.37f, 0.34f);
    glEnd();

    //Gate 2 Lines(HQ)
    glBegin(GL_LINES);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.01f, -0.2f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(0.03f, -0.3f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.2f);
    glVertex2f(0.07f, -0.3f);
    glVertex2f(0.09f, -0.2f);
    glVertex2f(0.09f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.11f, -0.2f);
    glVertex2f(0.11f, -0.3f);
    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.13f, -0.3f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.17f, -0.2f);
    glVertex2f(0.17f, -0.3f);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.19f, -0.3f);
    glVertex2f(0.81f, -0.2f);
    glVertex2f(0.81f, -0.3f);
    glVertex2f(0.83f, -0.2f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.87f, -0.2f);
    glVertex2f(0.87f, -0.3f);
    glVertex2f(0.89f, -0.2f);
    glVertex2f(0.89f, -0.3f);
    glVertex2f(0.91f, -0.2f);
    glVertex2f(0.91f, -0.3f);
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.3f);
    glVertex2f(0.95f, -0.2f);
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.97f, -0.2f);
    glVertex2f(0.97f, -0.3f);
    glVertex2f(0.99f, -0.2f);
    glVertex2f(0.99f, -0.3f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(0.8f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glEnd();

    //Bar gates
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.99f, 0.2f);
    glVertex2f(-0.99f, 0.3f);
    glVertex2f(-0.97f, 0.2f);
    glVertex2f(-0.97f, 0.3f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.95f, 0.3f);
    glVertex2f(-0.93f, 0.2f);
    glVertex2f(-0.93f, 0.3f);
    glVertex2f(-0.91f, 0.2f);
    glVertex2f(-0.91f, 0.3f);
    glVertex2f(-0.89f, 0.2f);
    glVertex2f(-0.89f, 0.3f);
    glVertex2f(-0.87f, 0.2f);
    glVertex2f(-0.87f, 0.3f);
    glVertex2f(-0.85f, 0.2f);
    glVertex2f(-0.85f, 0.3f);
    glVertex2f(-0.83f, 0.2f);
    glVertex2f(-0.83f, 0.3f);
    glVertex2f(-0.81f, 0.2f);
    glVertex2f(-0.81f, 0.3f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.79f, 0.3f);
    glVertex2f(-0.77f, 0.2f);
    glVertex2f(-0.77f, 0.3f);
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.73f, 0.2f);
    glVertex2f(-0.73f, 0.3f);
    glVertex2f(-0.71f, 0.2f);
    glVertex2f(-0.71f, 0.3f);
    glVertex2f(-0.69f, 0.2f);
    glVertex2f(-0.69f, 0.3f);
    glVertex2f(-0.67f, 0.2f);
    glVertex2f(-0.67f, 0.3f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.63f, 0.3f);
    glVertex2f(-0.61f, 0.2f);
    glVertex2f(-0.61f, 0.3f);
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.3f);
    glVertex2f(-0.57f, 0.2f);
    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.55f, 0.2f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.53f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.51f, 0.2f);
    glVertex2f(-0.51f, 0.3f);
    glVertex2f(-0.49f, 0.2f);
    glVertex2f(-0.49f, 0.3f);
    glVertex2f(-0.47f, 0.2f);
    glVertex2f(-0.47f, 0.3f);
    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.45f, 0.3f);
    glVertex2f(-0.43f, 0.2f);
    glVertex2f(-0.43f, 0.3f);
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.41f, 0.3f);
    glVertex2f(-0.39f, 0.2f);
    glVertex2f(-0.39f, 0.3f);
    glVertex2f(-0.37f, 0.2f);
    glVertex2f(-0.37f, 0.3f);
    glVertex2f(-0.35f, 0.2f);
    glVertex2f(-0.35f, 0.3f);
    glVertex2f(-0.33f, 0.2f);
    glVertex2f(-0.33f, 0.3f);
    glVertex2f(-0.31f, 0.2f);
    glVertex2f(-0.31f, 0.3f);
    glVertex2f(-0.29f, 0.2f);
    glVertex2f(-0.29f, 0.3f);
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.3f);
    glVertex2f(-0.25f, 0.2f);
    glVertex2f(-0.25f, 0.3f);
    glVertex2f(-0.23f, 0.2f);
    glVertex2f(-0.23f, 0.3f);
    glVertex2f(-0.21f, 0.2f);
    glVertex2f(-0.21f, 0.3f);
    glVertex2f(-0.19f, 0.2f);
    glVertex2f(-0.19f, 0.3f);
    glVertex2f(-0.17f, 0.2f);
    glVertex2f(-0.17f, 0.3f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.13f, 0.3f);
    glVertex2f(-0.11f, 0.2f);
    glVertex2f(-0.09f, 0.3f);
    glVertex2f(-0.09f, 0.2f);
    glVertex2f(-0.07f, 0.3f);
    glVertex2f(-0.07f, 0.2f);
    glVertex2f(-0.05f, 0.3f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.01f, 0.2f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.03f, 0.2f);
    glVertex2f(0.02f, 0.3f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.03f, 0.3f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.09f, 0.2f);
    glVertex2f(0.09f, 0.3f);
    glVertex2f(0.11f, 0.2f);
    glVertex2f(0.11f, 0.3f);
    glVertex2f(0.13f, 0.2f);
    glVertex2f(0.13f, 0.3f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.3f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.3f);
    glVertex2f(0.19f, 0.2f);
    glVertex2f(0.19f, 0.3f);
    glVertex2f(0.81f, 0.2f);
    glVertex2f(0.81f, 0.3f);
    glVertex2f(0.83f, 0.2f);
    glVertex2f(0.83f, 0.3f);
    glVertex2f(0.85f, 0.2f);
    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.87f, 0.2f);
    glVertex2f(0.87f, 0.3f);
    glVertex2f(0.89f, 0.2f);
    glVertex2f(0.89f, 0.3f);
    glVertex2f(0.91f, 0.2f);
    glVertex2f(0.91f, 0.3f);
    glVertex2f(0.93f, 0.2f);
    glVertex2f(0.93f, 0.3f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.95f, 0.3f);
    glVertex2f(0.97f, 0.2f);
    glVertex2f(0.97f, 0.3f);
    glVertex2f(0.99f, 0.2f);
    glVertex2f(0.99f, 0.3f);
    glEnd();
}






void watchTower(){  //812
    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.133, 0.545, 0.133);
    glVertex2f(0.07f, 0.8f);
    glVertex2f(0.33f, 0.8f);
    glVertex2f(0.2f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(0.1f, 0.75);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.3f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.3f, 0.7);
    glVertex2f(0.3f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.11f, 0.5f);
    glVertex2f(0.11f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.29f, 0.7);
    glVertex2f(0.29f, 0.58f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.3f, 0.7f);
    glEnd();



    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.133, 0.545, 0.133);
    glVertex2f(0.57f, 0.8f);
    glVertex2f(0.83f, 0.8f);
    glVertex2f(0.7f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(0.6f, 0.75);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.8f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7);
    glVertex2f(0.6f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.8f, 0.7);
    glVertex2f(0.8f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.61f, 0.58f);
    glVertex2f(0.61f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.79f, 0.7);
    glVertex2f(0.79f, 0.51f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.7f);
    glEnd();
}



void underGround(){   //813
    //Building
    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.502f, 0.000f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.333f, 0.420f, 0.184f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.25f);
    glVertex2f(0.25f, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.3f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.5f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.45f);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.45f);
    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.65f);
    glVertex2f(0.25f, -0.7f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.3f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.65f);
    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.52f, -0.8f);
    glVertex2f(0.52f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.65f, -0.7f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, -0.65f);
    glEnd();

    //Playground Body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();
    //Goal Bar (Upper Left)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f(-0.76f, -0.4f);
    glEnd();
    //Goal Bar (Middle Left)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.76f, -0.4f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Bottom Left)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.93f, -0.7f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Mid Field)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.2f);
    glVertex2f(-0.48f, -1.0f);
    glEnd();
    //Goal Bar (Upper Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.07f, -0.4f);
    glVertex2f(-0.15f, -0.4f);
    glEnd();
    //Goal Bar (Middle Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, -0.4f);
    glVertex2f(-0.12f, -0.7f);
    glEnd();
    //Goal Bar (Bottom Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, -0.7f);
    glVertex2f(-0.03f, -0.7f);
    glEnd();
}



void Tank(){ //814
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    //Back Part
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.6f, 0.4f);
    glEnd();
    //Exhaust
    glBegin(GL_QUADS);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.64f, 0.42f);
    glVertex2f(-0.64f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.46f);
    glVertex2f(-0.74f, 0.46f);
    glVertex2f(-0.74f, 0.42f);
    glVertex2f(-0.64f, 0.42f);
    glEnd();
    //Body
    glBegin(GL_QUADS);
    glColor3f(0.502, 0.502, 0.000);
    glVertex2f(-0.6f, 0.42f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.45f);
    glEnd();
    //Glass
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, 0.43f);
    glVertex2f(-0.4f, 0.35f);
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.3f, 0.45f);
    glEnd();
    //Firing Side
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.3f, 0.41f);
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, 0.43f);
    glVertex2f(-0.3f, 0.41f);
    glEnd();
    //Wheel Chain Body
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.2f, 0.3f);
    glEnd();
    //Wheel Chain Body Line
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.21f);
    glVertex2f(-0.7f, 0.21f);
    glVertex2f(-0.2f, 0.21f);
    glVertex2f(-0.2f, 0.21f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.7f, 0.3f);
    glEnd();
    //Wheel 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.67f, 0.23f);
    glVertex2f(-0.63f, 0.23f);
    glVertex2f(-0.63f, 0.27f);
    glEnd();
    //Wheel 2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.57f, 0.23f);
    glVertex2f(-0.53f, 0.23f);
    glVertex2f(-0.53f, 0.27f);
    glEnd();
     //Wheel 3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.47f, 0.27f);
    glVertex2f(-0.47f, 0.23f);
    glVertex2f(-0.43f, 0.23f);
    glVertex2f(-0.43f, 0.27f);
    glEnd();
     //Wheel 4
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.37f, 0.27f);
    glVertex2f(-0.37f, 0.23f);
    glVertex2f(-0.33f, 0.23f);
    glVertex2f(-0.33f, 0.27f);
    glEnd();
     //Wheel 5
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.27f, 0.27f);
    glVertex2f(-0.27f, 0.23f);
    glVertex2f(-0.23f, 0.23f);
    glVertex2f(-0.23f, 0.27f);
    glEnd();
    glPopMatrix();
}



void Helicopter(){   //815
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_POLYGON);
glColor3ub (240, 212, 34);
glVertex2f(.76, .16);
glVertex2f(.71, .16);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);
glVertex2f(.76, .01);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (59, 43, 196);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (105, 112, 0);
glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (240, 212, 34);    //last part of helicopter body
glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (240, 212, 34);    //last part pf helicopter body
glVertex2f(.89, .13);
glVertex2f(.9, .05);
glVertex2f(.91, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.74, .13);
glVertex2f(.74, .03);
glVertex2f(.77, .03);
glVertex2f(.77, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, 0.01);
glVertex2f(.71, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.725, 0.01);
glVertex2f(.725, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.8, 0.01);
glVertex2f(.8, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.815, 0.01);
glVertex2f(.815, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.69, -.020);
glVertex2f(.815,-.020);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, -.05);
glVertex2f(.83, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (255, 255, 255);
glVertex2f(.735, 0.16);
glVertex2f(.735,.18);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.6, .195);
glVertex2f(.6, .165);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.865, .195);
glVertex2f(.865, .165);
glEnd();
glPopMatrix();
}




void Bird(){  //816
    //1st Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.75f);
    glVertex2f(-0.47f, 0.8f);
    glVertex2f(-0.47f, 0.8f);
    glVertex2f(-0.45f, 0.75f);
    glVertex2f(-0.45f, 0.75f);
    glVertex2f(-0.43f, 0.8f);
    glVertex2f(-0.43f, 0.8f);
    glVertex2f(-0.4f, 0.75f);
    glEnd();
    glPopMatrix();
    //2nd Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, move7, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.33f, 0.75f);
    glVertex2f(-0.33f, 0.75f);
    glVertex2f(-0.3f, 0.7f);
    glEnd();
    glPopMatrix();
    //3rd Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 0.75f);
    glVertex2f(-0.27f, 0.8f);
    glVertex2f(-0.27f, 0.8f);
    glVertex2f(-0.25f, 0.75f);
    glVertex2f(-0.25f, 0.75f);
    glVertex2f(-0.23f, 0.8f);
    glVertex2f(-0.23f, 0.8f);
    glVertex2f(-0.2f, 0.75f);
    glEnd();
    glPopMatrix();
    //4th Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.75f);
    glVertex2f(0.43f, 0.8f);
    glVertex2f(0.43f, 0.8f);
    glVertex2f(0.45f, 0.75f);
    glVertex2f(0.45f, 0.75f);
    glVertex2f(0.47f, 0.8f);
    glVertex2f(0.47f, 0.8f);
    glVertex2f(0.5f, 0.75f);
    glEnd();
    glPopMatrix();
    //5th Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.33f, 0.75f);
    glVertex2f(0.33f, 0.75f);
    glVertex2f(0.35f, 0.7f);
    glVertex2f(0.35f, 0.7f);
    glVertex2f(0.37f, 0.75f);
    glVertex2f(0.37f, 0.75f);
    glVertex2f(0.4f, 0.7f);
    glEnd();
    glPopMatrix();
}



void Bird2(){   //817
glLoadIdentity();
glScalef(0.3,1.0,0.0);
glPushMatrix();
glTranslatef(positionB,0,0);
int iBird;
	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmountB = 20;
	GLfloat twicePiB = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();
	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();
	GLfloat mmmm=-0.638f;
	GLfloat nnnn=.801f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnnn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}



void WindMil(){  //818
//Body
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.333, 0.420, 0.184);
glVertex2f(-0.01f,-0.3f);
glVertex2f(0.01f,-0.3f);
glVertex2f(0.02f,-0.03f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.02f,-0.03f);
glEnd();
glPopMatrix();
//1st Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 0.0f);
glRotatef(move8,0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.000, 0.392, 0.000);
glVertex2f(0.0f,0.0f);
glVertex2f(0.03f,0.1f);
glVertex2f(-0.03f,0.1f);
glEnd();
glPopMatrix();
//2nd Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move9, 0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.420, 0.557, 0.137);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.08f,0.04f);
glVertex2f(-0.08f,-0.04f);
glEnd();
glPopMatrix();
//3rd Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move10, 0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.000, 0.392, 0.000);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.03f,-0.1f);
glVertex2f(0.03f,-0.1f);
glEnd();
glPopMatrix();
//4th Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move11, 0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.502, 0.502, 0.000);
glVertex2f(0.0f,0.0f);
glVertex2f(0.08f,-0.04f);
glVertex2f(0.08f,0.04f);
glEnd();
glPopMatrix();
}




void dartboard(){  //819

int j;                                           //dartboard

	GLfloat x1=-.23f; GLfloat y1=.5f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	int k;

	GLfloat x2=-.23f; GLfloat y2=.5f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	int l;

	GLfloat x3=-.23f; GLfloat y3=.5f; GLfloat radius3 =.035f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
  glColor3ub (0, 0, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l= 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int m;

	GLfloat x4=-.23f; GLfloat y4=.5f; GLfloat radius4 =.025f;
	int triangleAmount4 = 36; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
  glColor3ub (0, 255, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(m= 0; m <= triangleAmount4;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius3 * sin(m* twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	int n;

	GLfloat x5=-.23f; GLfloat y5=.5f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n= 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(n* twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	int o;

	GLfloat x6=-.23f; GLfloat y6=.5f; GLfloat radius6=.01f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o= 0; o <= triangleAmount6;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o* twicePi6 / triangleAmount6))
			);
		}
	glEnd();
}




void cloud(){   //820
    glLoadIdentity();
glPushMatrix();
glTranslatef(position,0,0);
int e;                                                             //cloud
	GLfloat x611=-.42f; GLfloat y611=.94f; GLfloat radius611=.03f;
	int triangleAmount611 = 20;
	GLfloat twicePi611 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x611, y611);
		for(e= 0; e<= triangleAmount611;e++) {
			glVertex2f(
		            x611 + (radius611 * cos(e *  twicePi611 / triangleAmount611)),
			    y611 + (radius611 * sin(e* twicePi611 / triangleAmount611))
			);
		}
	glEnd();
	int f;
	GLfloat x6112=-.47f; GLfloat y6112=.94f; GLfloat radius6112=.03f;
	int triangleAmount6112 = 20;
	GLfloat twicePi6112 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6112, y6112); // center of circle
		for(f= 0; f<= triangleAmount6112;f++) {
			glVertex2f(
		            x6112 + (radius6112 * cos(f *  twicePi6112 / triangleAmount6112)),
			    y6112 + (radius6112 * sin(f* twicePi6112 / triangleAmount6112))
			);
		}
	glEnd();
	int g;                                                             //cloud

	GLfloat x613=-.44f; GLfloat y613=.91f; GLfloat radius613=.03f;
	int triangleAmount613 = 20;
	GLfloat twicePi613 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x613, y613); // center of circle
		for(g= 0; g<= triangleAmount613;g++) {
			glVertex2f(
		            x613 + (radius613 * cos(g *  twicePi613 / triangleAmount613)),
			    y613 + (radius613 * sin(g* twicePi613 / triangleAmount613))
			);
		}
	glEnd();
int b;
	GLfloat x616=.42f; GLfloat y616=.96f; GLfloat radius616=.03f;
	int triangleAmount616 = 20;
	GLfloat twicePi616= 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x616, y616); // center of circle
		for(b= 0; b<= triangleAmount616;b++) {
			glVertex2f(
		            x616 + (radius616 * cos(b *  twicePi616 / triangleAmount616)),
			    y616 + (radius616 * sin(b* twicePi616 / triangleAmount616))
			);
		}
	glEnd();
	int z;                                                             //cloud
float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.9f, yC= 0.93f, radiusC =.05f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.83f, yC= 0.93f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.87f, yC= 0.9f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();

	GLfloat x6114=.47f; GLfloat y6114=.94f; GLfloat radius6114=.03f;
	int triangleAmount6114 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6114 = 2.0f * PI;
  glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6114, y6114); // center of circle
		for(z= 0; z<= triangleAmount6114;z++) {
			glVertex2f(
		            x6114+ (radius6114 * cos(z *  twicePi6114 / triangleAmount6114)),
			    y6114 + (radius6114 * sin(z* twicePi6114 / triangleAmount6114))
			);
		}
	glEnd();
	int c;                                                             //cloud

	GLfloat x615=.44f; GLfloat y615=.91f; GLfloat radius615=.03f;
	int triangleAmount615 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi615 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x615, y615); // center of circle
		for(c= 0; c<= triangleAmount615;c++) {
			glVertex2f(
		            x615 + (radius615 * cos(c *  twicePi615 / triangleAmount615)),
			    y615 + (radius615 * sin(c* twicePi615 / triangleAmount615))
			);
}
glEnd();
glTranslatef(-1.2,1.0,0.0);
glColor3f(1.0f, 1.0f, 1.0f);
GLfloat x1x=0.6f; GLfloat y1y=-0.2f; GLfloat radius1s =.08f; // cloud right circle
int triangleAmount22 = 20;
GLfloat twicePi22 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1x, y1y);
for(int i = 0; i <= triangleAmount22; i++)
glVertex2f(x1x + (radius1s * cos(i * twicePi22 / triangleAmount22)),y1y + (radius1s * sin(i * twicePi22 / triangleAmount22)));
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
GLfloat x1x1=0.5f; GLfloat y1y1=-0.2f; GLfloat radiuss11 =.1f; // cloud middle circle
int triangleAmount211 = 20;
GLfloat twicePi221 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1x1, y1y1);
for(int i = 0; i <= triangleAmount211; i++)
glVertex2f(x1x1 + (radiuss11 * cos(i * twicePi221 / triangleAmount211)),y1y1 + (radiuss11 * sin(i * twicePi221 / triangleAmount211)));
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
GLfloat xx2=0.4f; GLfloat yy2=-0.2f; GLfloat radiuss2 =.08f;
int triangleAmount212 = 20;
GLfloat twicePi212 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(xx2, yy2);
for(int i = 0; i <= triangleAmount212; i++)
glVertex2f(xx2 + (radiuss2 * cos(i * twicePi212 / triangleAmount212)),yy2 + (radiuss2 * sin(i * twicePi212 / triangleAmount212)));
glEnd();
glPopMatrix();                 //cloud finish
}





void Day(){
    //Ground
    glBegin(GL_QUADS);
    glColor3f(0.741f, 0.718f, 0.420f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();




//1st Bench Bar
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2f(-0.1f, 0.4f);
glVertex2f(-0.07f, 0.45f);
glVertex2f(-0.07f, 0.45f);
glVertex2f(0.17f, 0.45f);
glVertex2f(0.17f, 0.45f);
glVertex2f(0.2f, 0.4f);
glVertex2f(0.0f, 0.38f);
glVertex2f(0.0f, 0.45f);
glVertex2f(0.1f, 0.45f);
glVertex2f(0.1f, 0.38f);
glEnd();
//2nd Bench Bar
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.17f, 0.35f);
glVertex2f(-0.17f, 0.35f);
glVertex2f(0.07f, 0.35f);
glVertex2f(0.07f, 0.35f);
glVertex2f(0.1f, 0.3f);
glVertex2f(0.0f, 0.28f);
glVertex2f(0.0f, 0.35f);
glVertex2f(-0.1f, 0.35f);
glVertex2f(-0.1f, 0.28f);
glEnd();







glLoadIdentity();
glPushMatrix();
glTranslatef(-positionTrain,0,0);
glTranslatef(0.0,0.65,0);    //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();

glLoadIdentity();
glPopMatrix();            //Train ends


//////////////////////////////////////////////////////////////////////
    //Sky
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.749, 1.000);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(1.0f, 0.65f);
    glVertex2f(1.0f, 1.0f);
    glEnd();

    //Hills 1
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.9f, 0.7f);
    glVertex2f(-0.95f, 0.74f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.63f, 0.75f);
    glVertex2f(-0.55f, 0.67f);
    glVertex2f(-0.5f, 0.65f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.92f, 0.65f);
    glVertex2f(-0.87f, 0.65f);
    glVertex2f(-0.85f, 0.79f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.68f, 0.65f);
    glVertex2f(-0.64f, 0.65f);
    glVertex2f(-0.75f, 0.8f);
    glEnd();

    //Hills 2
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.65f, 0.65f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.53f, 0.83f);
    glVertex2f(-0.5f, 0.84f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.36f, 0.75f);
    glVertex2f(-0.3f, 0.72f);
    glVertex2f(-0.2f, 0.65f);
    glEnd();
    //Shadow 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.52f, 0.65f);
    glVertex2f(-0.39f, 0.65f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();

    //Hills 3
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.2f, 0.65f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.06f, 0.8f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(0.03f, 0.9f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.2f, 0.83f);
    glVertex2f(0.27f, 0.73f);
    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.4f, 0.65f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.04f, 0.65f);
    glVertex2f(0.03f, 0.65f);
    glVertex2f(0.03f, 0.9f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.22f, 0.65f);
    glVertex2f(0.29f, 0.65f);
    glVertex2f(0.1f, 0.9f);
    glEnd();

    //Hills 4
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(0.3f, 0.65f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.44f, 0.8f);
    glVertex2f(0.47f, 0.75f);
    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.56f, 0.84f);
    glVertex2f(0.6f, 0.86f);
    glVertex2f(0.7f, 0.88f);
    glVertex2f(0.75f, 0.75f);
    glVertex2f(0.8f, 0.75f);
    glVertex2f(0.9f, 0.65f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.35f, 0.65f);
    glVertex2f(0.38f, 0.65f);
    glVertex2f(0.42f, 0.8f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.47f, 0.65f);
    glVertex2f(0.52f, 0.65f);
    glVertex2f(0.56f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.7f, 0.65f);
    glVertex2f(0.78f, 0.65f);
    glVertex2f(0.67f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.85f, 0.65f);
    glVertex2f(0.89f, 0.65f);
    glVertex2f(0.82f, 0.73f);
    glEnd();



///////////////////////////////////////////////////////////////////////////////////////////////////////
//Train Calling
    Train();   //Train Calling


    //Main Road
    glBegin(GL_QUADS);
    glColor3f(0.467f, 0.533f, 0.600f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, 0.2f);
    glEnd();
    //1st road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 0.04f);
    glVertex2f(0.6f, -0.04f);
    glVertex2f(0.8f, -0.04f);
    glVertex2f(0.8f, 0.04f);
    glEnd();
    //2nd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.04f);
    glVertex2f(0.3f, -0.04f);
    glVertex2f(0.5f, -0.04f);
    glVertex2f(0.5f, 0.04f);
    glEnd();
    //3rd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.04f);
    glVertex2f(0.0f, -0.04f);
    glVertex2f(0.2f, -0.04f);
    glVertex2f(0.2f, 0.04f);
    glEnd();
    //4th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.3f, 0.04f);
    glVertex2f(-0.3f, -0.04f);
    glVertex2f(-0.1f, -0.04f);
    glVertex2f(-0.1f, 0.04f);
    glEnd();
    //5th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.6f, 0.04f);
    glVertex2f(-0.6f, -0.04f);
    glVertex2f(-0.4f, -0.04f);
    glVertex2f(-0.4f, 0.04f);
    glEnd();
    //6th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.04f);
    glVertex2f(-0.9f, -0.04f);
    glVertex2f(-0.7f, -0.04f);
    glVertex2f(-0.7f, 0.04f);
    glEnd();




    //1st Box
    glBegin(GL_POLYGON);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.6f, 0.27f);
    glVertex2f(-0.6f, 0.4f);
    glEnd();
    //2nd Box
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.6f, 0.27f);
    glVertex2f(-0.5f, 0.27f);
    glVertex2f(-0.5f, 0.4f);
    glEnd();
    //3rd Box
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.5f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.4f);
    glEnd();
    //4th Box
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.48f);
    glEnd();
    //5th Box
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.55f, 0.48f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.48f);
    glEnd();

    //Box Lines
    glBegin(GL_LINES);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.45f, 0.4f);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.69f, 0.4f);//
    glVertex2f(-0.69f, 0.27f);
    glVertex2f(-0.67f, 0.4f);
    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.27f);
    glVertex2f(-0.63f, 0.4f);
    glVertex2f(-0.63f, 0.27f);
    glVertex2f(-0.61f, 0.4f);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.61f, 0.27f);//
    glVertex2f(-0.59f, 0.4f);
    glVertex2f(-0.59f, 0.27f);
    glVertex2f(-0.57f, 0.4f);
    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.27f);
    glVertex2f(-0.53f, 0.4f);
    glVertex2f(-0.53f, 0.27f);
    glVertex2f(-0.51f, 0.4f);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.51f, 0.27f);//
    glVertex2f(-0.49f, 0.4f);
    glVertex2f(-0.49f, 0.27f);
    glVertex2f(-0.47f, 0.4f);
    glVertex2f(-0.47f, 0.27f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.27f);
    glVertex2f(-0.43f, 0.4f);
    glVertex2f(-0.43f, 0.27f);
    glVertex2f(-0.41f, 0.4f);
    glVertex2f(-0.41f, 0.27f);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.64f, 0.48f);//
    glVertex2f(-0.64f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.6f, 0.48f);
    glVertex2f(-0.6f, 0.4f);
    glColor3f(0.804, 0.522, 0.247);
    glVertex2f(-0.58f, 0.48f);//
    glVertex2f(-0.58f, 0.4f);
    glVertex2f(-0.56f, 0.48f);
    glVertex2f(-0.56f, 0.4f);
    glVertex2f(-0.54f, 0.48f);
    glVertex2f(-0.54f, 0.4f);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.52f, 0.48f);//
    glVertex2f(-0.52f, 0.4f);
    glVertex2f(-0.5f, 0.48f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.48f, 0.48f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.46f, 0.48f);
    glVertex2f(-0.46f, 0.4f);
    glEnd();
    //dartboard stand
    glBegin(GL_LINES);
	glColor3f(0.502, 0.502, 0.000);
	glVertex2f(-0.26f, 0.45f);
	glVertex2f(-0.26f, 0.25f);
	glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.2f, 0.45f);
    glEnd();





    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Body
    glBegin(GL_POLYGON);
    glColor3f(0.741f, 0.718f, 0.420f);
    glVertex2f(-0.8f, 0.21f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.4f, 0.21f);
    //glEnd();
    glPopMatrix();
    glEnd();


    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Body
    glBegin(GL_POLYGON);
    glColor3f(0.863f, 0.863f, 0.863f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 0.2f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.7f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 2
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.6f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 3
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.5f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Head Light
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.45f, 0.1f);
    glVertex2f(-0.45f, 0.05f);
    glVertex2f(-0.4f, 0.05f);
    glVertex2f(-0.4f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();


    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Back Light
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.8f, 0.05f);
    glVertex2f(-0.75f, 0.05f);
    glVertex2f(-0.75f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



//Bus Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,0.0f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Bus Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,0.0f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();






    //Military Van Body
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Front Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glPopMatrix();
    glEnd();
    //Military Van Back Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.8f, 0.2f);
    glPopMatrix();
    glEnd();
    //Military Van Head Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.05f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.35f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Back Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();


//Military Van Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move4,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Military Van Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move5,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();








/////////////////////////////////////////////////////////////////////////////
   //Tabu 1
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.5f);
    glEnd();
    //Door 1
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.73f, 0.58f);
    glVertex2f(-0.73f, 0.5f);
    glVertex2f(-0.67f, 0.5f);
    glVertex2f(-0.67f, 0.58f);
    glEnd();
    //Tabu 2
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.5f);
    glEnd();
    //Door 2
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.43f, 0.58f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.37f, 0.5f);
    glVertex2f(-0.37f, 0.58f);
    glEnd();
    //Tabu 3
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    //Door 3
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.13f, 0.58f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.07f, 0.5f);
    glVertex2f(-0.07f, 0.58f);
    glEnd();



///////////////////////////////////////////////////////////////////////////
    //Sun
    glBegin(GL_POLYGON);
    glColor3f(1.000, 1.000, 0.000);
    glVertex2f(-0.37f, 0.99f);
    glVertex2f(-0.4f, 0.97f);
    glVertex2f(-0.4f, 0.93f);
    glVertex2f(-0.37f, 0.9f);
    glVertex2f(-0.33f, 0.9f);
    glVertex2f(-0.3f, 0.93f);
    glVertex2f(-0.3f, 0.97f);
    glVertex2f(-0.33f, 0.99f);
    glEnd();




//////////////////////////////////////////////////////////////////////////////////
    //Tree log 1
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.57f, 0.7f);
    glVertex2f(-0.57f, 0.6f);
    glVertex2f(-0.53f, 0.6f);
    glVertex2f(-0.53f, 0.7f);
    glEnd();
    //Triangle 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.45f, 0.7f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();
    //Triangle 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-0.67f, 0.72f);
    glVertex2f(-0.43f, 0.72f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();

    //Tree log 2
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.27f, 0.7f);
    glVertex2f(-0.27f, 0.6f);
    glVertex2f(-0.23f, 0.6f);
    glVertex2f(-0.23f, 0.7f);
    glEnd();
    //Triangle 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();
    //Triangle 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-0.37f, 0.72f);
    glVertex2f(-0.13f, 0.72f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();


 glLineWidth(4.0);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.63f, 0.29f);
	glVertex2f(0.63f, 0.19f);
    glEnd();

    glLineWidth(4.0);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.68f, 0.29f);
	glVertex2f(0.68f, 0.19f);
    glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(0.62f, 0.28f);
    glVertex2f(0.62f, 0.24f);
    glVertex2f(0.69f, 0.24f);
    glVertex2f(0.69f, 0.28f);

    glEnd();
glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(0.62f, 0.23f);
    glVertex2f(0.6f, 0.21f);
    glVertex2f(0.72f, 0.21f);
    glVertex2f(0.69f, 0.23f);

    glEnd();

////////////////////////////////////////////////////////////////////////////////////////////////
    //Left Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.23f, 0.2f);
    glVertex2f(0.23f, 0.5f);
    glEnd();
    //Middle Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.47f, 0.5f);
    glVertex2f(0.47f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.5f);
    glEnd();
    //Right Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.77f, 0.5f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.8f, 0.5f);
    glEnd();
    //Upper Part
    glBegin(GL_POLYGON);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.2f, 0.5f);
    glEnd();
    //Check post
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.2f, 0.3);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glEnd();
    //Upper Bars
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.2f, 0.34f);
    glVertex2f(0.25f, 0.3f);
    glVertex2f(0.25f, 0.34f);
    glVertex2f(0.29f, 0.3f);
    glVertex2f(0.29f, 0.34f);
    glVertex2f(0.33f, 0.3f);
    glVertex2f(0.33f, 0.34f);
    glVertex2f(0.37f, 0.3f);
    glVertex2f(0.37f, 0.34f);
    glEnd();

    //Gate 2 Lines(HQ)
    glBegin(GL_LINES);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.01f, -0.2f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(0.03f, -0.3f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.2f);
    glVertex2f(0.07f, -0.3f);
    glVertex2f(0.09f, -0.2f);
    glVertex2f(0.09f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.11f, -0.2f);
    glVertex2f(0.11f, -0.3f);
    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.13f, -0.3f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.17f, -0.2f);
    glVertex2f(0.17f, -0.3f);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.19f, -0.3f);
    glVertex2f(0.81f, -0.2f);
    glVertex2f(0.81f, -0.3f);
    glVertex2f(0.83f, -0.2f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.87f, -0.2f);
    glVertex2f(0.87f, -0.3f);
    glVertex2f(0.89f, -0.2f);
    glVertex2f(0.89f, -0.3f);
    glVertex2f(0.91f, -0.2f);
    glVertex2f(0.91f, -0.3f);
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.3f);
    glVertex2f(0.95f, -0.2f);
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.97f, -0.2f);
    glVertex2f(0.97f, -0.3f);
    glVertex2f(0.99f, -0.2f);
    glVertex2f(0.99f, -0.3f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(0.8f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glEnd();

    //Bar gates
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.99f, 0.2f);
    glVertex2f(-0.99f, 0.3f);
    glVertex2f(-0.97f, 0.2f);
    glVertex2f(-0.97f, 0.3f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.95f, 0.3f);
    glVertex2f(-0.93f, 0.2f);
    glVertex2f(-0.93f, 0.3f);
    glVertex2f(-0.91f, 0.2f);
    glVertex2f(-0.91f, 0.3f);
    glVertex2f(-0.89f, 0.2f);
    glVertex2f(-0.89f, 0.3f);
    glVertex2f(-0.87f, 0.2f);
    glVertex2f(-0.87f, 0.3f);
    glVertex2f(-0.85f, 0.2f);
    glVertex2f(-0.85f, 0.3f);
    glVertex2f(-0.83f, 0.2f);
    glVertex2f(-0.83f, 0.3f);
    glVertex2f(-0.81f, 0.2f);
    glVertex2f(-0.81f, 0.3f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.79f, 0.3f);
    glVertex2f(-0.77f, 0.2f);
    glVertex2f(-0.77f, 0.3f);
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.73f, 0.2f);
    glVertex2f(-0.73f, 0.3f);
    glVertex2f(-0.71f, 0.2f);
    glVertex2f(-0.71f, 0.3f);
    glVertex2f(-0.69f, 0.2f);
    glVertex2f(-0.69f, 0.3f);
    glVertex2f(-0.67f, 0.2f);
    glVertex2f(-0.67f, 0.3f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.63f, 0.3f);
    glVertex2f(-0.61f, 0.2f);
    glVertex2f(-0.61f, 0.3f);
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.3f);
    glVertex2f(-0.57f, 0.2f);
    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.55f, 0.2f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.53f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.51f, 0.2f);
    glVertex2f(-0.51f, 0.3f);
    glVertex2f(-0.49f, 0.2f);
    glVertex2f(-0.49f, 0.3f);
    glVertex2f(-0.47f, 0.2f);
    glVertex2f(-0.47f, 0.3f);
    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.45f, 0.3f);
    glVertex2f(-0.43f, 0.2f);
    glVertex2f(-0.43f, 0.3f);
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.41f, 0.3f);
    glVertex2f(-0.39f, 0.2f);
    glVertex2f(-0.39f, 0.3f);
    glVertex2f(-0.37f, 0.2f);
    glVertex2f(-0.37f, 0.3f);
    glVertex2f(-0.35f, 0.2f);
    glVertex2f(-0.35f, 0.3f);
    glVertex2f(-0.33f, 0.2f);
    glVertex2f(-0.33f, 0.3f);
    glVertex2f(-0.31f, 0.2f);
    glVertex2f(-0.31f, 0.3f);
    glVertex2f(-0.29f, 0.2f);
    glVertex2f(-0.29f, 0.3f);
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.3f);
    glVertex2f(-0.25f, 0.2f);
    glVertex2f(-0.25f, 0.3f);
    glVertex2f(-0.23f, 0.2f);
    glVertex2f(-0.23f, 0.3f);
    glVertex2f(-0.21f, 0.2f);
    glVertex2f(-0.21f, 0.3f);
    glVertex2f(-0.19f, 0.2f);
    glVertex2f(-0.19f, 0.3f);
    glVertex2f(-0.17f, 0.2f);
    glVertex2f(-0.17f, 0.3f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.13f, 0.3f);
    glVertex2f(-0.11f, 0.2f);
    glVertex2f(-0.09f, 0.3f);
    glVertex2f(-0.09f, 0.2f);
    glVertex2f(-0.07f, 0.3f);
    glVertex2f(-0.07f, 0.2f);
    glVertex2f(-0.05f, 0.3f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.01f, 0.2f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.03f, 0.2f);
    glVertex2f(0.02f, 0.3f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.03f, 0.3f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.09f, 0.2f);
    glVertex2f(0.09f, 0.3f);
    glVertex2f(0.11f, 0.2f);
    glVertex2f(0.11f, 0.3f);
    glVertex2f(0.13f, 0.2f);
    glVertex2f(0.13f, 0.3f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.3f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.3f);
    glVertex2f(0.19f, 0.2f);
    glVertex2f(0.19f, 0.3f);
    glVertex2f(0.81f, 0.2f);
    glVertex2f(0.81f, 0.3f);
    glVertex2f(0.83f, 0.2f);
    glVertex2f(0.83f, 0.3f);
    glVertex2f(0.85f, 0.2f);
    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.87f, 0.2f);
    glVertex2f(0.87f, 0.3f);
    glVertex2f(0.89f, 0.2f);
    glVertex2f(0.89f, 0.3f);
    glVertex2f(0.91f, 0.2f);
    glVertex2f(0.91f, 0.3f);
    glVertex2f(0.93f, 0.2f);
    glVertex2f(0.93f, 0.3f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.95f, 0.3f);
    glVertex2f(0.97f, 0.2f);
    glVertex2f(0.97f, 0.3f);
    glVertex2f(0.99f, 0.2f);
    glVertex2f(0.99f, 0.3f);
    glEnd();


////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.133, 0.545, 0.133);
    glVertex2f(0.07f, 0.8f);
    glVertex2f(0.33f, 0.8f);
    glVertex2f(0.2f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(0.1f, 0.75);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.3f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.3f, 0.7);
    glVertex2f(0.3f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.11f, 0.5f);
    glVertex2f(0.11f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.29f, 0.7);
    glVertex2f(0.29f, 0.58f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.3f, 0.7f);
    glEnd();



    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.133, 0.545, 0.133);
    glVertex2f(0.57f, 0.8f);
    glVertex2f(0.83f, 0.8f);
    glVertex2f(0.7f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(0.6f, 0.75);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.8f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7);
    glVertex2f(0.6f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.8f, 0.7);
    glVertex2f(0.8f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.61f, 0.58f);
    glVertex2f(0.61f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.79f, 0.7);
    glVertex2f(0.79f, 0.51f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.7f);
    glEnd();




////////////////////////////////////////////////////////////////////////////////////////
    //Underground
    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.502f, 0.000f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.333f, 0.420f, 0.184f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.25f);
    glVertex2f(0.25f, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.3f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.5f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.45f);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.45f);
    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.65f);
    glVertex2f(0.25f, -0.7f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.3f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.65f);
    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.52f, -0.8f);
    glVertex2f(0.52f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.65f, -0.7f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, -0.65f);
    glEnd();

    //Playground Body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();
    //Goal Bar (Upper)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f(-0.76f, -0.4f);
    glEnd();
    //Goal Bar (Middle)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.76f, -0.4f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Bottom)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.93f, -0.7f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Mid Field)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.2f);
    glVertex2f(-0.48f, -1.0f);
    glEnd();
    //Goal Bar (Upper Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.07f, -0.4f);
    glVertex2f(-0.15f, -0.4f);
    glEnd();
    //Goal Bar (Middle Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, -0.4f);
    glVertex2f(-0.12f, -0.7f);
    glEnd();
    //Goal Bar (Bottom Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, -0.7f);
    glVertex2f(-0.03f, -0.7f);
    glEnd();



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Tank
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    //Back Part
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.6f, 0.4f);
    glEnd();
    //Exhaust
    glBegin(GL_QUADS);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.64f, 0.42f);
    glVertex2f(-0.64f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.46f);
    glVertex2f(-0.74f, 0.46f);
    glVertex2f(-0.74f, 0.42f);
    glVertex2f(-0.64f, 0.42f);
    glEnd();
    //Body
    glBegin(GL_QUADS);
    glColor3f(0.502, 0.502, 0.000);
    glVertex2f(-0.6f, 0.42f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.45f);
    glEnd();
    //Glass
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, 0.43f);
    glVertex2f(-0.4f, 0.35f);
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.3f, 0.45f);
    glEnd();
    //Firing Side
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.3f, 0.41f);
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, 0.43f);
    glVertex2f(-0.3f, 0.41f);
    glEnd();
    //Wheel Chain Body
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.2f, 0.3f);
    glEnd();
    //Wheel Chain Body Line
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.21f);
    glVertex2f(-0.7f, 0.21f);
    glVertex2f(-0.2f, 0.21f);
    glVertex2f(-0.2f, 0.21f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.7f, 0.3f);
    glEnd();
    //Wheel 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.67f, 0.23f);
    glVertex2f(-0.63f, 0.23f);
    glVertex2f(-0.63f, 0.27f);
    glEnd();
    //Wheel 2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.57f, 0.23f);
    glVertex2f(-0.53f, 0.23f);
    glVertex2f(-0.53f, 0.27f);
    glEnd();
     //Wheel 3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.47f, 0.27f);
    glVertex2f(-0.47f, 0.23f);
    glVertex2f(-0.43f, 0.23f);
    glVertex2f(-0.43f, 0.27f);
    glEnd();
     //Wheel 4
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.37f, 0.27f);
    glVertex2f(-0.37f, 0.23f);
    glVertex2f(-0.33f, 0.23f);
    glVertex2f(-0.33f, 0.27f);
    glEnd();
     //Wheel 5
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.27f, 0.27f);
    glVertex2f(-0.27f, 0.23f);
    glVertex2f(-0.23f, 0.23f);
    glVertex2f(-0.23f, 0.27f);
    glEnd();
    glPopMatrix();



////////////////////////////////////////////////////////////////////////////////////////
//Helicopter
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_POLYGON);
glColor3ub (240, 212, 34);
glVertex2f(.76, .16);
glVertex2f(.71, .16);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);
glVertex2f(.76, .01);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (59, 43, 196);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (105, 112, 0);
glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (240, 212, 34);    //last part of helicopter body
glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (240, 212, 34);    //last part pf helicopter body
glVertex2f(.89, .13);
glVertex2f(.9, .05);
glVertex2f(.91, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.74, .13);
glVertex2f(.74, .03);
glVertex2f(.77, .03);
glVertex2f(.77, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, 0.01);
glVertex2f(.71, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.725, 0.01);
glVertex2f(.725, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.8, 0.01);
glVertex2f(.8, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.815, 0.01);
glVertex2f(.815, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.69, -.020);
glVertex2f(.815,-.020);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, -.05);
glVertex2f(.83, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (255, 255, 255);
glVertex2f(.735, 0.16);
glVertex2f(.735,.18);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.6, .195);
glVertex2f(.6, .165);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.865, .195);
glVertex2f(.865, .165);
glEnd();
glPopMatrix();





/////////////////////////////////////////////////////////////////////////////////////////////////////
    //1st Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.75f);
    glVertex2f(-0.47f, 0.8f);
    glVertex2f(-0.47f, 0.8f);
    glVertex2f(-0.45f, 0.75f);
    glVertex2f(-0.45f, 0.75f);
    glVertex2f(-0.43f, 0.8f);
    glVertex2f(-0.43f, 0.8f);
    glVertex2f(-0.4f, 0.75f);
    glEnd();
    glPopMatrix();
    //2nd Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, move7, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.33f, 0.75f);
    glVertex2f(-0.33f, 0.75f);
    glVertex2f(-0.3f, 0.7f);
    glEnd();
    glPopMatrix();
    //3rd Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 0.75f);
    glVertex2f(-0.27f, 0.8f);
    glVertex2f(-0.27f, 0.8f);
    glVertex2f(-0.25f, 0.75f);
    glVertex2f(-0.25f, 0.75f);
    glVertex2f(-0.23f, 0.8f);
    glVertex2f(-0.23f, 0.8f);
    glVertex2f(-0.2f, 0.75f);
    glEnd();
    glPopMatrix();
    //4th Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.75f);
    glVertex2f(0.43f, 0.8f);
    glVertex2f(0.43f, 0.8f);
    glVertex2f(0.45f, 0.75f);
    glVertex2f(0.45f, 0.75f);
    glVertex2f(0.47f, 0.8f);
    glVertex2f(0.47f, 0.8f);
    glVertex2f(0.5f, 0.75f);
    glEnd();
    glPopMatrix();
    //5th Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.33f, 0.75f);
    glVertex2f(0.33f, 0.75f);
    glVertex2f(0.35f, 0.7f);
    glVertex2f(0.35f, 0.7f);
    glVertex2f(0.37f, 0.75f);
    glVertex2f(0.37f, 0.75f);
    glVertex2f(0.4f, 0.7f);
    glEnd();
    glPopMatrix();


/////////////////////////////////////////////////////////
//Bird2
glLoadIdentity();
glScalef(0.3,1.0,0.0);
glPushMatrix();
glTranslatef(positionB,0,0);
int iBird;
	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmountB = 20;
	GLfloat twicePiB = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();
	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();
	GLfloat mmmm=-0.638f;
	GLfloat nnnn=.801f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnnn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();




///////////////////////////////////////////////////////////////////////////////////
//Wndmil Body
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.333, 0.420, 0.184);
glVertex2f(-0.01f,-0.3f);
glVertex2f(0.01f,-0.3f);
glVertex2f(0.02f,-0.03f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.02f,-0.03f);
glEnd();
glPopMatrix();
//1st Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 0.0f);
glRotatef(move8,0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.000, 0.392, 0.000);
glVertex2f(0.0f,0.0f);
glVertex2f(0.03f,0.1f);
glVertex2f(-0.03f,0.1f);
glEnd();
glPopMatrix();
//2nd Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move9, 0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.420, 0.557, 0.137);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.08f,0.04f);
glVertex2f(-0.08f,-0.04f);
glEnd();
glPopMatrix();
//3rd Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move10, 0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.000, 0.392, 0.000);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.03f,-0.1f);
glVertex2f(0.03f,-0.1f);
glEnd();
glPopMatrix();
//4th Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move11, 0.0f, 0.0f, 1.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.502, 0.502, 0.000);
glVertex2f(0.0f,0.0f);
glVertex2f(0.08f,-0.04f);
glVertex2f(0.08f,0.04f);
glEnd();
glPopMatrix();




//////////////////////////////////////////////////////////////////////////////////////////////
//DartBoard

int j;                                           //dartboard

	GLfloat x1=-.23f; GLfloat y1=.5f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	int k;

	GLfloat x2=-.23f; GLfloat y2=.5f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	int l;

	GLfloat x3=-.23f; GLfloat y3=.5f; GLfloat radius3 =.035f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
  glColor3ub (0, 0, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l= 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int m;

	GLfloat x4=-.23f; GLfloat y4=.5f; GLfloat radius4 =.025f;
	int triangleAmount4 = 36; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
  glColor3ub (0, 255, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(m= 0; m <= triangleAmount4;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius3 * sin(m* twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	int n;

	GLfloat x5=-.23f; GLfloat y5=.5f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n= 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(n* twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	int o;

	GLfloat x6=-.23f; GLfloat y6=.5f; GLfloat radius6=.01f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o= 0; o <= triangleAmount6;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o* twicePi6 / triangleAmount6))
			);
		}
	glEnd();


//////////////////////////////////////////////////////////////////////////////////////////////////////
//Cloud
glLoadIdentity();
glPushMatrix();
glTranslatef(position,0,0);
int e;                                                             //cloud
	GLfloat x611=-.42f; GLfloat y611=.94f; GLfloat radius611=.03f;
	int triangleAmount611 = 20;
	GLfloat twicePi611 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x611, y611);
		for(e= 0; e<= triangleAmount611;e++) {
			glVertex2f(
		            x611 + (radius611 * cos(e *  twicePi611 / triangleAmount611)),
			    y611 + (radius611 * sin(e* twicePi611 / triangleAmount611))
			);
		}
	glEnd();
	int f;
	GLfloat x6112=-.47f; GLfloat y6112=.94f; GLfloat radius6112=.03f;
	int triangleAmount6112 = 20;
	GLfloat twicePi6112 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6112, y6112); // center of circle
		for(f= 0; f<= triangleAmount6112;f++) {
			glVertex2f(
		            x6112 + (radius6112 * cos(f *  twicePi6112 / triangleAmount6112)),
			    y6112 + (radius6112 * sin(f* twicePi6112 / triangleAmount6112))
			);
		}
	glEnd();
	int g;                                                             //cloud

	GLfloat x613=-.44f; GLfloat y613=.91f; GLfloat radius613=.03f;
	int triangleAmount613 = 20;
	GLfloat twicePi613 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x613, y613); // center of circle
		for(g= 0; g<= triangleAmount613;g++) {
			glVertex2f(
		            x613 + (radius613 * cos(g *  twicePi613 / triangleAmount613)),
			    y613 + (radius613 * sin(g* twicePi613 / triangleAmount613))
			);
		}
	glEnd();
int b;
	GLfloat x616=.42f; GLfloat y616=.96f; GLfloat radius616=.03f;
	int triangleAmount616 = 20;
	GLfloat twicePi616= 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x616, y616); // center of circle
		for(b= 0; b<= triangleAmount616;b++) {
			glVertex2f(
		            x616 + (radius616 * cos(b *  twicePi616 / triangleAmount616)),
			    y616 + (radius616 * sin(b* twicePi616 / triangleAmount616))
			);
		}
	glEnd();
	int z;                                                             //cloud
float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.9f, yC= 0.93f, radiusC =.05f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.83f, yC= 0.93f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.87f, yC= 0.9f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();

	GLfloat x6114=.47f; GLfloat y6114=.94f; GLfloat radius6114=.03f;
	int triangleAmount6114 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6114 = 2.0f * PI;
  glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6114, y6114); // center of circle
		for(z= 0; z<= triangleAmount6114;z++) {
			glVertex2f(
		            x6114+ (radius6114 * cos(z *  twicePi6114 / triangleAmount6114)),
			    y6114 + (radius6114 * sin(z* twicePi6114 / triangleAmount6114))
			);
		}
	glEnd();
	int c;                                                             //cloud

	GLfloat x615=.44f; GLfloat y615=.91f; GLfloat radius615=.03f;
	int triangleAmount615 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi615 = 2.0f * PI;
  glColor3f (1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x615, y615); // center of circle
		for(c= 0; c<= triangleAmount615;c++) {
			glVertex2f(
		            x615 + (radius615 * cos(c *  twicePi615 / triangleAmount615)),
			    y615 + (radius615 * sin(c* twicePi615 / triangleAmount615))
			);
}
glEnd();
glTranslatef(-1.2,1.0,0.0);
glColor3f(1.0f, 1.0f, 1.0f);
GLfloat x1x=0.6f; GLfloat y1y=-0.2f; GLfloat radius1s =.08f; // cloud right circle
int triangleAmount22 = 20;
GLfloat twicePi22 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1x, y1y);
for(int i = 0; i <= triangleAmount22; i++)
glVertex2f(x1x + (radius1s * cos(i * twicePi22 / triangleAmount22)),y1y + (radius1s * sin(i * twicePi22 / triangleAmount22)));
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
GLfloat x1x1=0.5f; GLfloat y1y1=-0.2f; GLfloat radiuss11 =.1f; // cloud middle circle
int triangleAmount211 = 20;
GLfloat twicePi221 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1x1, y1y1);
for(int i = 0; i <= triangleAmount211; i++)
glVertex2f(x1x1 + (radiuss11 * cos(i * twicePi221 / triangleAmount211)),y1y1 + (radiuss11 * sin(i * twicePi221 / triangleAmount211)));
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
GLfloat xx2=0.4f; GLfloat yy2=-0.2f; GLfloat radiuss2 =.08f;
int triangleAmount212 = 20;
GLfloat twicePi212 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(xx2, yy2);
for(int i = 0; i <= triangleAmount212; i++)
glVertex2f(xx2 + (radiuss2 * cos(i * twicePi212 / triangleAmount212)),yy2 + (radiuss2 * sin(i * twicePi212 / triangleAmount212)));
glEnd();
glPopMatrix();                 //cloud finish


glFlush();
}




void Night(){
    //Ground
    glBegin(GL_QUADS);
    glColor3f(0.235, 0.702, 0.443);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();




//1st Bench Bar
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(0.545, 0.000, 0.000);
glVertex2f(-0.1f, 0.4f);
glVertex2f(-0.07f, 0.45f);
glVertex2f(-0.07f, 0.45f);
glVertex2f(0.17f, 0.45f);
glVertex2f(0.17f, 0.45f);
glVertex2f(0.2f, 0.4f);
glVertex2f(0.0f, 0.38f);
glVertex2f(0.0f, 0.45f);
glVertex2f(0.1f, 0.45f);
glVertex2f(0.1f, 0.38f);
glEnd();
//2nd Bench Bar
glLineWidth(8.0);
glBegin(GL_LINES);
glColor3f(0.502, 0.000, 0.000);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.17f, 0.35f);
glVertex2f(-0.17f, 0.35f);
glVertex2f(0.07f, 0.35f);
glVertex2f(0.07f, 0.35f);
glVertex2f(0.1f, 0.3f);
glVertex2f(0.0f, 0.28f);
glVertex2f(0.0f, 0.35f);
glVertex2f(-0.1f, 0.35f);
glVertex2f(-0.1f, 0.28f);
glEnd();



//Train
glLoadIdentity();
glPushMatrix();
glTranslatef(-positionTrain,0,0);
glTranslatef(0.0,0.65,0);    //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.02,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.02,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();




glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();



glTranslatef(.26,0,0);         //Train
    glBegin(GL_QUADS);           //Train down body
    glColor3ub(60, 26, 214);
    glVertex2f(.0,.0);
    glVertex2f(.0,.03);
    glVertex2f(.252,.03);
    glVertex2f(.252,.0);
    glEnd();

    glBegin(GL_QUADS);          //Train 1st upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.03);
    glVertex2f(.0,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.0,.05);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.05,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.0,.03);
    glEnd();              //Train 1st upper body ends

    glBegin(GL_QUADS);    //Train 2nd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.03);
    glVertex2f(.05,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.05,.05);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.10,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.05,.03);
    glEnd();              //Train 2nd upper body ends

      glBegin(GL_QUADS);    //Train 3rd upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.03);
    glVertex2f(.10,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.10,.05);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.15,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.10,.03);
    glEnd();              //Train 3rd upper body ends

      glBegin(GL_QUADS);    //Train 4th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.03);
    glVertex2f(.15,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.15,.05);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.20,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.15,.03);
    glEnd();              //Train 4th upper body ends

       glBegin(GL_QUADS);    //Train 5th upper body starts
    glColor3ub(205, 214, 26);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.03);
    glVertex2f(.20,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.20,.05);
    glVertex2f(.25,.05);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.05);
    glVertex2f(.25,.03);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.03);
    glVertex2f(.20,.03);
    glEnd();              //Train 5th upper body ends

    glBegin(GL_LINES);    //Train 1st connector
    glColor3ub(1, 1, 1);
    glVertex2f(.25,.025);
    glVertex2f(.26,.025);
    glEnd();

glLoadIdentity();
glPopMatrix();            //Train ends




/////////////////////////////////////////////////////////////////////////
    //Sky
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(1.0f, 0.65f);
    glVertex2f(1.0f, 1.0f);
    glEnd();

    //Hills 1
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.9f, 0.7f);
    glVertex2f(-0.95f, 0.74f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.63f, 0.75f);
    glVertex2f(-0.55f, 0.67f);
    glVertex2f(-0.5f, 0.65f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.92f, 0.65f);
    glVertex2f(-0.87f, 0.65f);
    glVertex2f(-0.85f, 0.79f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.68f, 0.65f);
    glVertex2f(-0.64f, 0.65f);
    glVertex2f(-0.75f, 0.8f);
    glEnd();

    //Hills 2
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.65f, 0.65f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.53f, 0.83f);
    glVertex2f(-0.5f, 0.84f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.36f, 0.75f);
    glVertex2f(-0.3f, 0.72f);
    glVertex2f(-0.2f, 0.65f);
    glEnd();
    //Shadow 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.52f, 0.65f);
    glVertex2f(-0.39f, 0.65f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();

    //Hills 3
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.2f, 0.65f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.06f, 0.8f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(0.03f, 0.9f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.2f, 0.83f);
    glVertex2f(0.27f, 0.73f);
    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.4f, 0.65f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.04f, 0.65f);
    glVertex2f(0.03f, 0.65f);
    glVertex2f(0.03f, 0.9f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.22f, 0.65f);
    glVertex2f(0.29f, 0.65f);
    glVertex2f(0.1f, 0.9f);
    glEnd();

    //Hills 4
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(0.3f, 0.65f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.44f, 0.8f);
    glVertex2f(0.47f, 0.75f);
    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.56f, 0.84f);
    glVertex2f(0.6f, 0.86f);
    glVertex2f(0.7f, 0.88f);
    glVertex2f(0.75f, 0.75f);
    glVertex2f(0.8f, 0.75f);
    glVertex2f(0.9f, 0.65f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.35f, 0.65f);
    glVertex2f(0.38f, 0.65f);
    glVertex2f(0.42f, 0.8f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.47f, 0.65f);
    glVertex2f(0.52f, 0.65f);
    glVertex2f(0.56f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.7f, 0.65f);
    glVertex2f(0.78f, 0.65f);
    glVertex2f(0.67f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.85f, 0.65f);
    glVertex2f(0.89f, 0.65f);
    glVertex2f(0.82f, 0.73f);
    glEnd();




///////////////////////////////////////////////////////////////////////////////////////////////////////
//Train Calling
    glLineWidth(4.0);
    Train();




    //Main Road
    glBegin(GL_QUADS);
    glColor3f(0.467f, 0.533f, 0.600f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, 0.2f);
    glEnd();
    //1st road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 0.04f);
    glVertex2f(0.6f, -0.04f);
    glVertex2f(0.8f, -0.04f);
    glVertex2f(0.8f, 0.04f);
    glEnd();
    //2nd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.04f);
    glVertex2f(0.3f, -0.04f);
    glVertex2f(0.5f, -0.04f);
    glVertex2f(0.5f, 0.04f);
    glEnd();
    //3rd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.04f);
    glVertex2f(0.0f, -0.04f);
    glVertex2f(0.2f, -0.04f);
    glVertex2f(0.2f, 0.04f);
    glEnd();
    //4th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.3f, 0.04f);
    glVertex2f(-0.3f, -0.04f);
    glVertex2f(-0.1f, -0.04f);
    glVertex2f(-0.1f, 0.04f);
    glEnd();
    //5th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.6f, 0.04f);
    glVertex2f(-0.6f, -0.04f);
    glVertex2f(-0.4f, -0.04f);
    glVertex2f(-0.4f, 0.04f);
    glEnd();
    //6th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.04f);
    glVertex2f(-0.9f, -0.04f);
    glVertex2f(-0.7f, -0.04f);
    glVertex2f(-0.7f, 0.04f);
    glEnd();



/////////////////////////////////////////////////////////////////////////////
    //1st Box
    glBegin(GL_POLYGON);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.6f, 0.27f);
    glVertex2f(-0.6f, 0.4f);
    glEnd();
    //2nd Box
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.6f, 0.4f);
    glVertex2f(-0.6f, 0.27f);
    glVertex2f(-0.5f, 0.27f);
    glVertex2f(-0.5f, 0.4f);
    glEnd();
    //3rd Box
    glBegin(GL_POLYGON);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.5f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.4f);
    glEnd();
    //4th Box
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.48f);
    glEnd();
    //5th Box
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.55f, 0.48f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.48f);
    glEnd();

    //Box Lines
    glBegin(GL_LINES);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.7f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.27f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.4f, 0.4f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.45f, 0.48f);
    glVertex2f(-0.45f, 0.4f);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.69f, 0.4f);//
    glVertex2f(-0.69f, 0.27f);
    glVertex2f(-0.67f, 0.4f);
    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.27f);
    glVertex2f(-0.63f, 0.4f);
    glVertex2f(-0.63f, 0.27f);
    glVertex2f(-0.61f, 0.4f);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.61f, 0.27f);//
    glVertex2f(-0.59f, 0.4f);
    glVertex2f(-0.59f, 0.27f);
    glVertex2f(-0.57f, 0.4f);
    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.27f);
    glVertex2f(-0.53f, 0.4f);
    glVertex2f(-0.53f, 0.27f);
    glVertex2f(-0.51f, 0.4f);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.51f, 0.27f);//
    glVertex2f(-0.49f, 0.4f);
    glVertex2f(-0.49f, 0.27f);
    glVertex2f(-0.47f, 0.4f);
    glVertex2f(-0.47f, 0.27f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.45f, 0.27f);
    glVertex2f(-0.43f, 0.4f);
    glVertex2f(-0.43f, 0.27f);
    glVertex2f(-0.41f, 0.4f);
    glVertex2f(-0.41f, 0.27f);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.64f, 0.48f);//
    glVertex2f(-0.64f, 0.4f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.6f, 0.48f);
    glVertex2f(-0.6f, 0.4f);
    glColor3f(0.804, 0.522, 0.247);
    glVertex2f(-0.58f, 0.48f);//
    glVertex2f(-0.58f, 0.4f);
    glVertex2f(-0.56f, 0.48f);
    glVertex2f(-0.56f, 0.4f);
    glVertex2f(-0.54f, 0.48f);
    glVertex2f(-0.54f, 0.4f);
    glColor3f(0.627, 0.322, 0.176);
    glVertex2f(-0.52f, 0.48f);//
    glVertex2f(-0.52f, 0.4f);
    glVertex2f(-0.5f, 0.48f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.48f, 0.48f);
    glVertex2f(-0.48f, 0.4f);
    glVertex2f(-0.46f, 0.48f);
    glVertex2f(-0.46f, 0.4f);
    glEnd();
    //dartboard stand
    glBegin(GL_LINES);
	glColor3f(0.502, 0.502, 0.000);
	glVertex2f(-0.26f, 0.45f);
	glVertex2f(-0.26f, 0.25f);
	glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.2f, 0.45f);
    glEnd();



////////////////////////////////////////////////////////////////////////////////////////
//Vehicle
    //Military Van Body
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.502, 0.000);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Front Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.502, 0.502, 0.000);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glPopMatrix();
    glEnd();
    //Military Van Back Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.8f, 0.2f);
    glPopMatrix();
    glEnd();
    //Military Van Head Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.05f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.35f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Back Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();


//Military Van Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move4,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Military Van Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move5,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();





/////////////////////////////////////////////////////////////////
   //Tabu 1
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.5f);
    glEnd();
    //Door 1
    glBegin(GL_POLYGON);
    glColor3f(1.000f, 1.0f, 1.000f);
    glVertex2f(-0.73f, 0.58f);
    glVertex2f(-0.73f, 0.5f);
    glVertex2f(-0.67f, 0.5f);
    glVertex2f(-0.67f, 0.58f);
    glEnd();
    //Tabu 2
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.5f);
    glEnd();
    //Door 2
    glBegin(GL_POLYGON);
    glColor3f(1.000f, 1.0f, 1.000f);
    glVertex2f(-0.43f, 0.58f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.37f, 0.5f);
    glVertex2f(-0.37f, 0.58f);
    glEnd();
    //Tabu 3
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    //Door 3
    glBegin(GL_POLYGON);
    glColor3f(1.000f, 1.0f, 1.000f);
    glVertex2f(-0.13f, 0.58f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.07f, 0.5f);
    glVertex2f(-0.07f, 0.58f);
    glEnd();




    //Moon
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.37f, 0.99f);
    glVertex2f(-0.4f, 0.97f);
    glVertex2f(-0.4f, 0.93f);
    glVertex2f(-0.37f, 0.9f);
    glVertex2f(-0.33f, 0.9f);
    glVertex2f(-0.3f, 0.93f);
    glVertex2f(-0.3f, 0.97f);
    glVertex2f(-0.33f, 0.99f);
    glEnd();



    //Tree log 1
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.57f, 0.7f);
    glVertex2f(-0.57f, 0.6f);
    glVertex2f(-0.53f, 0.6f);
    glVertex2f(-0.53f, 0.7f);
    glEnd();
    //Triangle 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.45f, 0.7f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();
    //Triangle 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-0.67f, 0.72f);
    glVertex2f(-0.43f, 0.72f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();

    //Tree log 2
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.27f, 0.7f);
    glVertex2f(-0.27f, 0.6f);
    glVertex2f(-0.23f, 0.6f);
    glVertex2f(-0.23f, 0.7f);
    glEnd();
    //Triangle 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();
    //Triangle 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.000, 0.502, 0.000);
    glVertex2f(-0.37f, 0.72f);
    glVertex2f(-0.13f, 0.72f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();


/////////////////////////////////////////////////////////////////////////////////////////
    //Gate
    //Left Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.23f, 0.2f);
    glVertex2f(0.23f, 0.5f);
    glEnd();
    //Middle Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.47f, 0.5f);
    glVertex2f(0.47f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.5f);
    glEnd();
    //Right Pillar
    glBegin(GL_QUADS);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.77f, 0.5f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.8f, 0.5f);
    glEnd();
    //Upper Part
    glBegin(GL_POLYGON);
    glColor3f(0.184, 0.310, 0.310);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.2f, 0.5f);
    glEnd();
    //Check post
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.2f, 0.3);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glEnd();
    //Upper Bars
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.2f, 0.34f);
    glVertex2f(0.25f, 0.3f);
    glVertex2f(0.25f, 0.34f);
    glVertex2f(0.29f, 0.3f);
    glVertex2f(0.29f, 0.34f);
    glVertex2f(0.33f, 0.3f);
    glVertex2f(0.33f, 0.34f);
    glVertex2f(0.37f, 0.3f);
    glVertex2f(0.37f, 0.34f);
    glEnd();

    //Gate 2 Lines(HQ)
    glBegin(GL_LINES);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.01f, -0.2f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(0.03f, -0.3f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.2f);
    glVertex2f(0.07f, -0.3f);
    glVertex2f(0.09f, -0.2f);
    glVertex2f(0.09f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.11f, -0.2f);
    glVertex2f(0.11f, -0.3f);
    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.13f, -0.3f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.17f, -0.2f);
    glVertex2f(0.17f, -0.3f);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.19f, -0.3f);
    glVertex2f(0.81f, -0.2f);
    glVertex2f(0.81f, -0.3f);
    glVertex2f(0.83f, -0.2f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.87f, -0.2f);
    glVertex2f(0.87f, -0.3f);
    glVertex2f(0.89f, -0.2f);
    glVertex2f(0.89f, -0.3f);
    glVertex2f(0.91f, -0.2f);
    glVertex2f(0.91f, -0.3f);
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.3f);
    glVertex2f(0.95f, -0.2f);
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.97f, -0.2f);
    glVertex2f(0.97f, -0.3f);
    glVertex2f(0.99f, -0.2f);
    glVertex2f(0.99f, -0.3f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(0.8f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glEnd();

    //Bar gates
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.99f, 0.2f);
    glVertex2f(-0.99f, 0.3f);
    glVertex2f(-0.97f, 0.2f);
    glVertex2f(-0.97f, 0.3f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.95f, 0.3f);
    glVertex2f(-0.93f, 0.2f);
    glVertex2f(-0.93f, 0.3f);
    glVertex2f(-0.91f, 0.2f);
    glVertex2f(-0.91f, 0.3f);
    glVertex2f(-0.89f, 0.2f);
    glVertex2f(-0.89f, 0.3f);
    glVertex2f(-0.87f, 0.2f);
    glVertex2f(-0.87f, 0.3f);
    glVertex2f(-0.85f, 0.2f);
    glVertex2f(-0.85f, 0.3f);
    glVertex2f(-0.83f, 0.2f);
    glVertex2f(-0.83f, 0.3f);
    glVertex2f(-0.81f, 0.2f);
    glVertex2f(-0.81f, 0.3f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.79f, 0.3f);
    glVertex2f(-0.77f, 0.2f);
    glVertex2f(-0.77f, 0.3f);
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.73f, 0.2f);
    glVertex2f(-0.73f, 0.3f);
    glVertex2f(-0.71f, 0.2f);
    glVertex2f(-0.71f, 0.3f);
    glVertex2f(-0.69f, 0.2f);
    glVertex2f(-0.69f, 0.3f);
    glVertex2f(-0.67f, 0.2f);
    glVertex2f(-0.67f, 0.3f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.63f, 0.3f);
    glVertex2f(-0.61f, 0.2f);
    glVertex2f(-0.61f, 0.3f);
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.3f);
    glVertex2f(-0.57f, 0.2f);
    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.55f, 0.2f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.53f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.51f, 0.2f);
    glVertex2f(-0.51f, 0.3f);
    glVertex2f(-0.49f, 0.2f);
    glVertex2f(-0.49f, 0.3f);
    glVertex2f(-0.47f, 0.2f);
    glVertex2f(-0.47f, 0.3f);
    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.45f, 0.3f);
    glVertex2f(-0.43f, 0.2f);
    glVertex2f(-0.43f, 0.3f);
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.41f, 0.3f);
    glVertex2f(-0.39f, 0.2f);
    glVertex2f(-0.39f, 0.3f);
    glVertex2f(-0.37f, 0.2f);
    glVertex2f(-0.37f, 0.3f);
    glVertex2f(-0.35f, 0.2f);
    glVertex2f(-0.35f, 0.3f);
    glVertex2f(-0.33f, 0.2f);
    glVertex2f(-0.33f, 0.3f);
    glVertex2f(-0.31f, 0.2f);
    glVertex2f(-0.31f, 0.3f);
    glVertex2f(-0.29f, 0.2f);
    glVertex2f(-0.29f, 0.3f);
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.3f);
    glVertex2f(-0.25f, 0.2f);
    glVertex2f(-0.25f, 0.3f);
    glVertex2f(-0.23f, 0.2f);
    glVertex2f(-0.23f, 0.3f);
    glVertex2f(-0.21f, 0.2f);
    glVertex2f(-0.21f, 0.3f);
    glVertex2f(-0.19f, 0.2f);
    glVertex2f(-0.19f, 0.3f);
    glVertex2f(-0.17f, 0.2f);
    glVertex2f(-0.17f, 0.3f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.13f, 0.3f);
    glVertex2f(-0.11f, 0.2f);
    glVertex2f(-0.09f, 0.3f);
    glVertex2f(-0.09f, 0.2f);
    glVertex2f(-0.07f, 0.3f);
    glVertex2f(-0.07f, 0.2f);
    glVertex2f(-0.05f, 0.3f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.01f, 0.2f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.03f, 0.2f);
    glVertex2f(0.02f, 0.3f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.03f, 0.3f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.09f, 0.2f);
    glVertex2f(0.09f, 0.3f);
    glVertex2f(0.11f, 0.2f);
    glVertex2f(0.11f, 0.3f);
    glVertex2f(0.13f, 0.2f);
    glVertex2f(0.13f, 0.3f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.3f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.3f);
    glVertex2f(0.19f, 0.2f);
    glVertex2f(0.19f, 0.3f);
    glVertex2f(0.81f, 0.2f);
    glVertex2f(0.81f, 0.3f);
    glVertex2f(0.83f, 0.2f);
    glVertex2f(0.83f, 0.3f);
    glVertex2f(0.85f, 0.2f);
    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.87f, 0.2f);
    glVertex2f(0.87f, 0.3f);
    glVertex2f(0.89f, 0.2f);
    glVertex2f(0.89f, 0.3f);
    glVertex2f(0.91f, 0.2f);
    glVertex2f(0.91f, 0.3f);
    glVertex2f(0.93f, 0.2f);
    glVertex2f(0.93f, 0.3f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.95f, 0.3f);
    glVertex2f(0.97f, 0.2f);
    glVertex2f(0.97f, 0.3f);
    glVertex2f(0.99f, 0.2f);
    glVertex2f(0.99f, 0.3f);
    glEnd();



//////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Watch Tower
    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.133, 0.545, 0.133);
    glVertex2f(0.07f, 0.8f);
    glVertex2f(0.33f, 0.8f);
    glVertex2f(0.2f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(0.1f, 0.75);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.3f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.3f, 0.7);
    glVertex2f(0.3f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.11f, 0.5f);
    glVertex2f(0.11f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.29f, 0.7);
    glVertex2f(0.29f, 0.58f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.3f, 0.7f);
    glEnd();


    //Watch Tower
    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.133, 0.545, 0.133);
    glVertex2f(0.57f, 0.8f);
    glVertex2f(0.83f, 0.8f);
    glVertex2f(0.7f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.392, 0.000);
    glVertex2f(0.6f, 0.75);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.8f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7);
    glVertex2f(0.6f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.8f, 0.7);
    glVertex2f(0.8f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.61f, 0.58f);
    glVertex2f(0.61f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.79f, 0.7);
    glVertex2f(0.79f, 0.51f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.7f);
    glEnd();



////////////////////////////////////////////////////////////////////////////////////
//Underground
    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.502f, 0.000f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.333f, 0.420f, 0.184f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.25f, -0.25f);
    glVertex2f(0.25f, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.3f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.5f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.25f, -0.45f);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.45f);
    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.65f);
    glVertex2f(0.25f, -0.7f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.3f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.65f);
    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.52f, -0.8f);
    glVertex2f(0.52f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.65f, -0.7f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, -0.65f);
    glEnd();

    //Playground Body
    glBegin(GL_QUADS);
    glColor3f(0.678, 1.000, 0.184);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();
    //Goal Bar (Upper)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f(-0.76f, -0.4f);
    glEnd();
    //Goal Bar (Middle)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.76f, -0.4f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Bottom)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.93f, -0.7f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Mid Field)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.45f, -0.2f);
    glVertex2f(-0.48f, -1.0f);
    glEnd();
    //Goal Bar (Upper Right)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.07f, -0.4f);
    glVertex2f(-0.15f, -0.4f);
    glEnd();
    //Goal Bar (Middle Right)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, -0.4f);
    glVertex2f(-0.12f, -0.7f);
    glEnd();
    //Goal Bar (Bottom Right)
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12f, -0.7f);
    glVertex2f(-0.03f, -0.7f);
    glEnd();



////////////////////////////////////////////////////////////////////////////////
//Helicopter
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_POLYGON);
glColor3ub (240, 212, 34);
glVertex2f(.76, .16);
glVertex2f(.71, .16);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);
glVertex2f(.76, .01);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (59, 43, 196);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (105, 112, 0);
glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (240, 212, 34);    //last part of helicopter body
glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (240, 212, 34);    //last part pf helicopter body
glVertex2f(.89, .13);
glVertex2f(.9, .05);
glVertex2f(.91, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.74, .13);
glVertex2f(.74, .03);
glVertex2f(.77, .03);
glVertex2f(.77, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, 0.01);
glVertex2f(.71, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.725, 0.01);
glVertex2f(.725, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.8, 0.01);
glVertex2f(.8, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.815, 0.01);
glVertex2f(.815, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.69, -.020);
glVertex2f(.815,-.020);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, -.05);
glVertex2f(.83, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (255, 255, 255);
glVertex2f(.735, 0.16);
glVertex2f(.735,.18);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.6, .195);
glVertex2f(.6, .165);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.865, .195);
glVertex2f(.865, .165);
glEnd();
glPopMatrix();



/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Bird2
glLoadIdentity();
glScalef(0.3,1.0,0.0);
glPushMatrix();
glTranslatef(positionB,0,0);
int iBird;
	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmountB = 20;
	GLfloat twicePiB = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();
	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();
	GLfloat mmmm=-0.638f;
	GLfloat nnnn=.801f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnn + (radiusmmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(iBird = 0; iBird <= triangleAmountB;iBird++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(iBird *  twicePiB / triangleAmountB)),
			    nnnnn + (radiusmm * sin(iBird * twicePiB / triangleAmountB))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();



////////////////////////////////////////////////////////////////////////////////////
//WindMil
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.333, 0.420, 0.184);
glVertex2f(-0.01f,-0.3f);
glVertex2f(0.01f,-0.3f);
glVertex2f(0.02f,-0.03f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.02f,-0.03f);
glEnd();
glPopMatrix();
//1st Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 0.0f);
glRotatef(move8,0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.698, 0.133, 0.133);
glVertex2f(0.0f,0.0f);
glVertex2f(0.03f,0.1f);
glVertex2f(-0.03f,0.1f);
glEnd();
glPopMatrix();
//2nd Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move9, 0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.698, 0.133, 0.133);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.08f,0.04f);
glVertex2f(-0.08f,-0.04f);
glEnd();
glPopMatrix();
//3rd Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move10, 0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.416, 0.353, 0.804);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.03f,-0.1f);
glVertex2f(0.03f,-0.1f);
glEnd();
glPopMatrix();
//4th Blade
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.45f, 0.72f, 1.0f);
glRotatef(move11, 0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3f(0.416, 0.353, 0.804);
glVertex2f(0.0f,0.0f);
glVertex2f(0.08f,-0.04f);
glVertex2f(0.08f,0.04f);
glEnd();
glPopMatrix();




/////////////////////////////////////////////////////////////////////////////////////////
//DartBoard

int j;                                           //dartboard

	GLfloat x1=-.23f; GLfloat y1=.5f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
  glColor3ub (255, 255, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
	int k;

	GLfloat x2=-.23f; GLfloat y2=.5f; GLfloat radius2 =.05f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
	int l;

	GLfloat x3=-.23f; GLfloat y3=.5f; GLfloat radius3 =.035f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
  glColor3ub (0, 0, 255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(l= 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
	glEnd();

	int m;

	GLfloat x4=-.23f; GLfloat y4=.5f; GLfloat radius4 =.025f;
	int triangleAmount4 = 36; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
  glColor3ub (0, 255, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(m= 0; m <= triangleAmount4;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius3 * sin(m* twicePi4 / triangleAmount4))
			);
		}
	glEnd();
	int n;

	GLfloat x5=-.23f; GLfloat y5=.5f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;
  glColor3ub (255, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(n= 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(n* twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	int o;

	GLfloat x6=-.23f; GLfloat y6=.5f; GLfloat radius6=.01f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;
  glColor3ub (0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(o= 0; o <= triangleAmount6;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o* twicePi6 / triangleAmount6))
			);
		}
	glEnd();




//////////////////////////////////////////////////////////////////////////////////////////
//cloud
    glLoadIdentity();
glPushMatrix();
glTranslatef(position,0,0);
int e;                                                             //cloud
	GLfloat x611=-.42f; GLfloat y611=.94f; GLfloat radius611=.03f;
	int triangleAmount611 = 20;
	GLfloat twicePi611 = 2.0f * PI;
  glColor3f (1.000, 0.627, 0.478);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x611, y611);
		for(e= 0; e<= triangleAmount611;e++) {
			glVertex2f(
		            x611 + (radius611 * cos(e *  twicePi611 / triangleAmount611)),
			    y611 + (radius611 * sin(e* twicePi611 / triangleAmount611))
			);
		}
	glEnd();
	int f;
	GLfloat x6112=-.47f; GLfloat y6112=.94f; GLfloat radius6112=.03f;
	int triangleAmount6112 = 20;
	GLfloat twicePi6112 = 2.0f * PI;
  glColor3f (1.000, 0.627, 0.478);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6112, y6112); // center of circle
		for(f= 0; f<= triangleAmount6112;f++) {
			glVertex2f(
		            x6112 + (radius6112 * cos(f *  twicePi6112 / triangleAmount6112)),
			    y6112 + (radius6112 * sin(f* twicePi6112 / triangleAmount6112))
			);
		}
	glEnd();
	int g;                                                             //cloud

	GLfloat x613=-.44f; GLfloat y613=.91f; GLfloat radius613=.03f;
	int triangleAmount613 = 20;
	GLfloat twicePi613 = 2.0f * PI;
  glColor3f (1.000, 0.627, 0.478);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x613, y613); // center of circle
		for(g= 0; g<= triangleAmount613;g++) {
			glVertex2f(
		            x613 + (radius613 * cos(g *  twicePi613 / triangleAmount613)),
			    y613 + (radius613 * sin(g* twicePi613 / triangleAmount613))
			);
		}
	glEnd();
int b;
	GLfloat x616=.42f; GLfloat y616=.96f; GLfloat radius616=.03f;
	int triangleAmount616 = 20;
	GLfloat twicePi616= 2.0f * PI;
  glColor3f (1.000, 0.627, 0.478);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x616, y616); // center of circle
		for(b= 0; b<= triangleAmount616;b++) {
			glVertex2f(
		            x616 + (radius616 * cos(b *  twicePi616 / triangleAmount616)),
			    y616 + (radius616 * sin(b* twicePi616 / triangleAmount616))
			);
		}
	glEnd();
	int z;                                                             //cloud
float xC,yC,radiusC,triangleAmountC,twicePiC;
    xC= -0.9f, yC= 0.93f, radiusC =.05f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.000, 0.627, 0.478);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.83f, yC= 0.93f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.000, 0.627, 0.478);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();
	xC= -0.87f, yC= 0.9f, radiusC =.04f;
    triangleAmountC = 20;
    twicePiC = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.000, 0.627, 0.478);
    glVertex2f(xC, yC);
    for(int iC = 0; iC <= triangleAmountC;iC++)
    {
        glVertex2f(xC + (radiusC * cos(iC *  twicePiC / triangleAmountC)),yC + (radiusC * sin(iC * twicePiC / triangleAmountC)));
    }
	glEnd();

	GLfloat x6114=.47f; GLfloat y6114=.94f; GLfloat radius6114=.03f;
	int triangleAmount6114 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6114 = 2.0f * PI;
  glColor3f(1.000, 0.627, 0.478);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6114, y6114); // center of circle
		for(z= 0; z<= triangleAmount6114;z++) {
			glVertex2f(
		            x6114+ (radius6114 * cos(z *  twicePi6114 / triangleAmount6114)),
			    y6114 + (radius6114 * sin(z* twicePi6114 / triangleAmount6114))
			);
		}
	glEnd();
	int c;                                                             //cloud

	GLfloat x615=.44f; GLfloat y615=.91f; GLfloat radius615=.03f;
	int triangleAmount615 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi615 = 2.0f * PI;
  glColor3f (1.000, 0.627, 0.478);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x615, y615); // center of circle
		for(c= 0; c<= triangleAmount615;c++) {
			glVertex2f(
		            x615 + (radius615 * cos(c *  twicePi615 / triangleAmount615)),
			    y615 + (radius615 * sin(c* twicePi615 / triangleAmount615))
			);
}
glEnd();
glTranslatef(-1.2,1.0,0.0);
glColor3f(1.000, 0.627, 0.478);
GLfloat x1x=0.6f; GLfloat y1y=-0.2f; GLfloat radius1s =.08f; // cloud right circle
int triangleAmount22 = 20;
GLfloat twicePi22 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1x, y1y);
for(int i = 0; i <= triangleAmount22; i++)
glVertex2f(x1x + (radius1s * cos(i * twicePi22 / triangleAmount22)),y1y + (radius1s * sin(i * twicePi22 / triangleAmount22)));
glEnd();
glColor3f(1.000, 0.627, 0.478);
GLfloat x1x1=0.5f; GLfloat y1y1=-0.2f; GLfloat radiuss11 =.1f; // cloud middle circle
int triangleAmount211 = 20;
GLfloat twicePi221 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1x1, y1y1);
for(int i = 0; i <= triangleAmount211; i++)
glVertex2f(x1x1 + (radiuss11 * cos(i * twicePi221 / triangleAmount211)),y1y1 + (radiuss11 * sin(i * twicePi221 / triangleAmount211)));
glEnd();
glColor3f(1.000, 0.627, 0.478);
GLfloat xx2=0.4f; GLfloat yy2=-0.2f; GLfloat radiuss2 =.08f;
int triangleAmount212 = 20;
GLfloat twicePi212 = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glVertex2f(xx2, yy2);
for(int i = 0; i <= triangleAmount212; i++)
glVertex2f(xx2 + (radiuss2 * cos(i * twicePi212 / triangleAmount212)),yy2 + (radiuss2 * sin(i * twicePi212 / triangleAmount212)));
glEnd();
glPopMatrix();                 //cloud finish


glFlush();
}




void display(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glLineWidth(4.0);
    //Functions
    Day();
    Night();
}



void handleKeypress(unsigned char key, int x, int y) {  //201
	switch (key) {
case 'w':
    speed = 0.1f;
    break;
case 's':
    speed = 0.0f;
    break;
 case 'n':
        glutDisplayFunc(Night);
        break;
    case 'd':
        glutDisplayFunc(Day);
        break;
glutPostRedisplay();
	}
}



void update(int value) {  //202
_angle+=8.0f;
if(_angle > 360.0)
{
_angle-=360;
}
glutPostRedisplay();
glutTimerFunc(90, update, 0);
}



void updateTrain(int value) {  //203
   if(positionTrain >3.5)             //movement of Train
        positionTrain = -1.5f;
        positionTrain += speed;
	glutPostRedisplay();
	glutTimerFunc(5, updateTrain, 0);
}



void update1(int value) {  //204
move1+=0.02f;
if(move1 > 1.3)
{
move1 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update1, 0);
}


void update2(int value) {  //205
move2+=0.02f;
if(move2 > 1.3)
{
move2 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update2, 0);
}



void update3(int value) {  //206
move3+=0.02f;
if(move3 > 1.3)
{
move3 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update3, 0);
}


void update4(int value) {  //207
move4-=0.02f;
if(-move4 > 1.3)
{
move4 = 1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update4, 0);
}


void update5(int value) {  //208
move5-=0.02f;
if(-move5 > 1.3)
{
move5 = 1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update5, 0);
}


void update6(int value) {  //209
    if(position > 1.0)
        {
             position = -1.0f;
        }
    else if(position < -1.0)
    {
        position =  1.0f ;
    }
        position += speed;
	glutPostRedisplay();
	glutTimerFunc(700, update6, 0);
}



void updateB(int value) {    //217
    if(positionB >3.5)
    positionB = -3.1f;
    positionB += speedB;
	glutPostRedisplay();
	glutTimerFunc(5, updateB, 0);
}


void update7(int value) {  //210
move8+=20;
glutPostRedisplay();
glutTimerFunc(5, update7, 0);
}


void update8(int value) {   //211
move9+=20;
glutPostRedisplay();
glutTimerFunc(50, update8, 0);
}


void update9(int value) {   //212
move10+=20;
glutPostRedisplay();
glutTimerFunc(5, update9, 0);
}


void update10(int value) {  //213
move11+=20;
glutPostRedisplay();
glutTimerFunc(50, update10, 0);
}


void update11(int value) {  //214
move6-=0.015f;           //Helicopter
if(-move6 > 1.0)
{
move6 = 1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update11, 0);
}


void update12(int value) {  //215
move7+=0.02f;          //Bird
if(move7 > 1.3)
{
move7 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update12, 0);
}


void update13(int value) {   //216
if(position >1.9)
position = -1.3f;
position += speed;             //Cloud
glutPostRedisplay();
glutTimerFunc(1000, update13, 0);
}



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1920, 1080);
glutInitWindowPosition(50, 50);
glutCreateWindow("Military Base");
glutDisplayFunc(display);
glutTimerFunc(5, updateTrain, 0);
glutTimerFunc(90, update, 0);
glutTimerFunc(90, update1, 0);
glutTimerFunc(90, update2, 0);
glutTimerFunc(90, update3, 0);
glutTimerFunc(90, update4, 0);
glutTimerFunc(90, update5, 0);
glutTimerFunc(700,update6, 0);
glutTimerFunc(20, update7, 0);
glutTimerFunc(20, update8, 0);
glutTimerFunc(20, update9, 0);
glutTimerFunc(20, update10, 0);
glutTimerFunc(90, update11, 0);
glutTimerFunc(90, update12, 0);
glutTimerFunc(5, update13, 0);
glutTimerFunc(5, updateB, 0);
glutKeyboardFunc(handleKeypress);
glutMainLoop();
return 0;
}

