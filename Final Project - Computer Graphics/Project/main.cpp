#include<cstdio>
#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
#define PI 3.1415
#include<mmsystem.h>
using namespace std;


// Cloud


void DrawCircle(float cx, float cy, float r)
{
    glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i < 300; i++)
        {
            double theta = 2.0f * 3.1416f * i /300;//get current angle
            double x = r * cosf(theta);//calculate x
            double y = r * sinf(theta);//calculate y
            glVertex2f(x + cx, y + cy);//output vertex
        }
    glEnd();
    glFlush();
}



/*
void update1(int value)
{
    //cloud 1 movement

    if(positionOfCloud < -1.30)
    positionOfCloud = 1.0f;
    positionOfCloud -=Speed4;


    glutPostRedisplay();
    glutTimerFunc(100, update1, 0);
}



void update2(int value)
{
    //cloud 2 movement

    if(positionOfCloud2 < -1.30)
    positionOfCloud2 = 1.0f;
    positionOfCloud2 -=Speed5;

    glutPostRedisplay();
    glutTimerFunc(100, update2, 0);
}

*/


void init()
{
    glClearColor(1,1,1,0);
    glShadeModel(GL_SMOOTH);// Enable Smooth Shading
    glClearDepth(1.0f);// Depth Buffer Setup
    glEnable(GL_DEPTH_TEST);// Enables Depth Testing
}



void cloud1()
{
    glPushMatrix();
        glColor3ub(255, 240, 255);
        DrawCircle(0.5f,0.90f, .05f);
        DrawCircle(0.55f,0.87f, .05f);
        DrawCircle(0.45f,0.87f, .05f);
        DrawCircle(0.52f,0.83f, .05f);
        DrawCircle(0.60f,0.85f, .05f);

        glEnd();
    glPopMatrix();
}





void cloud2()
{

    glPushMatrix();
        glColor3ub(255, 240, 255);
        DrawCircle(-0.5f,0.85f, .05f);
        DrawCircle(-0.55f,0.82f, .05f);
        DrawCircle(-0.45f,0.82f, .05f);
        DrawCircle(-0.52f,0.79f, .05f);
        DrawCircle(-0.60f,0.81f, .05f);
        glEnd();
    glPopMatrix();
}










void tree1()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f ,0.4f, 0.0f);//deep green
    glVertex2f(-0.75f, -0.12f);
    glVertex2f(-0.78f, -0.05f);
    glVertex2f(-0.80f, -0.12f);

    glColor3f(0.0f ,0.4f, 0.0f);
    glVertex2f(0.78f, -0.12f);
    glVertex2f(0.80f, 0.0f);
    glVertex2f(0.82f, -0.12f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//middle
    DrawCircle(0.70, 0.40,0.06);
    DrawCircle(0.80, 0.40,0.06);
    DrawCircle(0.75, 0.45,0.06);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.67, 0.45,0.06);
    DrawCircle(0.82, 0.45,0.06);
    DrawCircle(0.75, 0.52,0.06);
    DrawCircle(0.82, 0.36,0.06);
    DrawCircle(0.68, 0.35,0.06);
    glEnd();

    glLineWidth(18.5);//middle
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.75f, -0.12f);
    glVertex2f(0.75f, 0.40f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//left
    DrawCircle(0.67, 0.28,0.06);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.65, 0.25,0.06);
    DrawCircle(0.64, 0.30,0.06);
    glEnd();

    glLineWidth(12.5);//left
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.75f, 0.22f);
    glVertex2f(0.70f, 0.27f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//right
    DrawCircle(0.82, 0.24,0.05);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.84, 0.26,0.05);
    DrawCircle(0.83, 0.21,0.05);

    glEnd();

    glLineWidth(12.5);//right
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.75f, 0.15f);
    glVertex2f(0.80f, 0.22f);
    glEnd();


    glFlush();

}
void tree2()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f ,0.4f, 0.0f);//deep green
    glVertex2f(0.0f, -0.15f);
    glVertex2f(0.03f, 0.05f);
    glVertex2f(0.05f, -0.15f);

    glColor3f(0.0f ,0.4f, 0.0f);
    glVertex2f(0.06f, 0.01f);
    glVertex2f(0.08f, -0.15f);
    glVertex2f(0.04f, -0.15f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//middle
    DrawCircle(-0.05, 0.50,0.07);
    DrawCircle(0.05, 0.50,0.07);
    DrawCircle(0.0, 0.55,0.07);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.09, 0.55,0.07);
    DrawCircle(0.0, 0.62,0.07);
    DrawCircle(0.08, 0.45,0.07);
    DrawCircle(0.08, 0.55,0.07);
    DrawCircle(-0.09, 0.45,0.07);
    glEnd();

    glLineWidth(18.5);//middle
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.0f, 0.50f);
    glVertex2f(0.0f, -0.15f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//left
    DrawCircle(-0.10, 0.34,0.07);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.14, 0.40,0.07);
    DrawCircle(-0.12, 0.30,0.07);
    glEnd();

    glLineWidth(12.5);//left
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.0f, 0.30f);
    glVertex2f(-0.1f, 0.38f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//right
    DrawCircle(0.10, 0.31,0.07);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(0.12, 0.26,0.07);
    DrawCircle(0.13, 0.35,0.07);

    glEnd();

    glLineWidth(12.5);//right
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(0.0f, 0.20f);
    glVertex2f(0.1f, 0.30f);
    glEnd();

    glFlush();

}
void tree3()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f ,0.4f, 0.0f);//deep green
    glVertex2f(-0.25f, -0.10f);
    glVertex2f(-0.23f, 0.02f);
    glVertex2f(-0.21f, -0.10f);

    glColor3f(0.0f ,0.4f, 0.0f);
    glVertex2f(-0.22f, -0.10f);
    glVertex2f(-0.205f, 0.0f);
    glVertex2f(-0.19f, -0.10f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//middle
    DrawCircle(-0.25, 0.27,0.05);
    DrawCircle(-0.28, 0.23,0.04);
    DrawCircle(-0.22, 0.23,0.04);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.29, 0.26,0.05);
    DrawCircle(-0.25, 0.29,0.05);
    DrawCircle(-0.22, 0.26,0.05);
    DrawCircle(-0.25, 0.32,0.05);
    glEnd();

    glLineWidth(18.5);//middle
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(-0.25f, 0.22f);
    glVertex2f(-0.25f, -0.10f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//left
    DrawCircle(-0.325, 0.17,0.05);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.34, 0.15,0.05);
    DrawCircle(-0.345, 0.19,0.05);
    glEnd();

    glLineWidth(12.5);//left
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(-0.25f, 0.12f);
    glVertex2f(-0.31f, 0.17f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//right
    DrawCircle(-0.175, 0.17,0.05);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.16, 0.15,0.05);
    DrawCircle(-0.15, 0.19,0.05);
    glEnd();

    glLineWidth(12.5);//right
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(-0.25f, 0.06f);
    glVertex2f(-0.18f, 0.15f);
    glEnd();

    glFlush();

}
void tree4()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f ,0.4f, 0.0f);//deep green
    glVertex2f(-0.75f, -0.12f);
    glVertex2f(-0.72f, 0.05f);
    glVertex2f(-0.70f, -0.12f);

    glColor3f(0.0f ,0.4f, 0.0f);
    glVertex2f(-0.72f, -0.12f);
    glVertex2f(-0.70f, 0.0f);
    glVertex2f(-0.68f, -0.12f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//middle
    DrawCircle(-0.70, 0.40,0.06);
    DrawCircle(-0.80, 0.40,0.06);
    DrawCircle(-0.75, 0.45,0.06);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.67, 0.45,0.06);
    DrawCircle(-0.82, 0.45,0.06);
    DrawCircle(-0.75, 0.52,0.06);
    DrawCircle(-0.82, 0.36,0.06);
    DrawCircle(-0.68, 0.35,0.06);
    glEnd();

    glLineWidth(18.5);//middle
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(-0.75f, -0.12f);
    glVertex2f(-0.75f, 0.40f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//left
    DrawCircle(-0.83, 0.28,0.06);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.85, 0.25,0.06);
    DrawCircle(-0.86, 0.30,0.06);
    glEnd();

    glLineWidth(12.5);//left
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(-0.75f, 0.22f);
    glVertex2f(-0.80f, 0.27f);
    glEnd();

    glColor3f(0.2f ,0.5f, 0.1f);//right
    DrawCircle(-0.68, 0.23,0.05);
    glColor3f(0.2f ,0.4f, 0.0f);
    DrawCircle(-0.66, 0.25,0.05);
    DrawCircle(-0.67, 0.20,0.05);

    glEnd();

    glLineWidth(12.5);//right
    glBegin(GL_LINES);
    glColor3f(0.3f ,0.0f, 0.0f);
    glVertex2f(-0.75f, 0.15f);
    glVertex2f(-0.70f, 0.22f);
    glEnd();


    glFlush();

}

void allTrees() // all trees scaling
{
    tree1();
    tree2();
    tree3();
    tree4();

    glFlush();
}


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}



void CentreDome()
{

    glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.0,0.45,0.0);     //centre
	glutSolidSphere(0.02,50,50);
	glPopMatrix();

	glColor3f(1.0,1.0,1.0 );
	glPushMatrix();
	glTranslatef(0.0,0.45,0.0);
	glutSolidSphere(0.018,200,200);    //centre
	glPopMatrix();

	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(1.0,1.0,1.0);    //centre
	glutSolidSphere(0.01,50,50);
	glPopMatrix();

	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.0,0.473,0.0);    //centre
	glutSolidSphere(0.008,200,200);
	glPopMatrix();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.00, 0.6);
	glVertex2f(0.005, 0.45);           //centre
	glVertex2f(-0.005, 0.45);

	glEnd();


	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(-0.20,0.40,0.0);
	glutSolidSphere(0.02,200,200);
	glPopMatrix();



		glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.20,0.40,0.0);
	glutSolidSphere(0.02,200,200);
	glPopMatrix();


		glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.12, 0.34);
    glVertex2f(0.12, 0.34);
	glVertex2f(0.12, 0.0);
	glVertex2f(-0.12, 0.0);          //centre

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.04, 0.435);
	glVertex2f(0.04, 0.435);           //centre
	glVertex2f(0.04, 0.34);
	glVertex2f(-0.04, 0.34);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.0377, 0.43);
	glVertex2f(0.0376, 0.43);           //centre
	glVertex2f(0.0376, 0.3389);
	glVertex2f(-0.0377, 0.3389);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.03, 0.43);
	glVertex2f(0.03, 0.43);
	glVertex2f(0.03, 0.3389);
	glVertex2f(-0.03, 0.3389);

	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.0223, 0.43);
	glVertex2f(0.0223, 0.43);
	glVertex2f(0.0223, 0.3389);
	glVertex2f(-0.0223, 0.3389);

	glEnd();


glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.0146, 0.43);
	glVertex2f(0.0146, 0.43);
	glVertex2f(0.0146, 0.3389);
	glVertex2f(-0.0146, 0.3389);

	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.0069, 0.43);
	glVertex2f(0.0069, 0.43);
	glVertex2f(0.0069, 0.3389);
	glVertex2f(-0.0069, 0.3389);

	glEnd();


	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(0.0,0.33,0.0);    //1.3
	glutSolidSphere(0.0377,50,50);
	glPopMatrix();
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.0,0.31,0.0);    //1.3
	glutSolidSphere(0.0377,50,50);
	glPopMatrix();
glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.11, 0.0);
	glVertex2f(0.11, 0.0);
	glVertex2f(0.11, 0.32);
	glVertex2f(-0.11, 0.32);

	glEnd();
	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(0.0,0.3,0.0);    //1.3
	glutSolidSphere(0.02,50,50);
	glPopMatrix();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.09, 0.08);
	glVertex2f(-0.08, 0.08);
	glVertex2f(-0.045,0.2);
	glVertex2f(-0.005,0.08);
	glVertex2f(0.005, 0.08);
	glVertex2f(-0.045,0.25);

glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.09, 0.08);
	glVertex2f(0.08, 0.08);
	glVertex2f(0.045,0.2);
	glVertex2f(0.005,0.08);
	glVertex2f(-0.005, 0.08);
	glVertex2f(0.045,0.25);

glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.11, 0.15);
	glVertex2f(0.11, 0.15);
	glVertex2f(0.11, 0.13);
	glVertex2f(-0.11, 0.13);
glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.11, 0.22);
	glVertex2f(0.11, 0.22);
	glVertex2f(0.11, 0.20);
	glVertex2f(-0.11, 0.20);
glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.11, 0.26);
	glVertex2f(0.11, 0.26);
	glVertex2f(0.11, 0.28);
	glVertex2f(-0.11, 0.28);
glEnd();

glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.085,0.08,0.0);    //1.3
	glutSolidSphere(0.015,500,500);
	glPopMatrix();

	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(0.085,0.08,0.0);    //1.3
	glutSolidSphere(0.01,500,500);
	glPopMatrix();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.09, 0.08);
	glVertex2f(-0.08, 0.08);
	glVertex2f(-0.08, 0.0);
	glVertex2f(-0.09, 0.0);
glEnd();

glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.0,0.08,0.0);    //1.3
	glutSolidSphere(0.015,500,500);
	glPopMatrix();

	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(0.0,0.08,0.0);    //1.3
	glutSolidSphere(0.01,500,500);
	glPopMatrix();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.005, 0.08);
	glVertex2f(0.005, 0.08);
	glVertex2f(0.005, 0.0);
	glVertex2f(-0.005, 0.0);
glEnd();

glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(-0.085,0.08,0.0);    //1.3
	glutSolidSphere(0.015,500,500);
	glPopMatrix();

	glColor3f(0.0,0.0,0.0);
	glPushMatrix();
	glTranslatef(-0.085,0.08,0.0);    //1.3
	glutSolidSphere(0.01,500,500);
	glPopMatrix();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.09, 0.08);
	glVertex2f(0.08, 0.08);
	glVertex2f(0.08, 0.0);
	glVertex2f(0.09, 0.0);
glEnd();




}





void LeftmostDome()
{


	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(-0.5001,0.415,0.0);    //1.3
	glutSolidSphere(0.008,50,50);
	glPopMatrix();

	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(-0.50,0.396,0.0);
	glutSolidSphere(0.018,200,200);     //1.4
	glPopMatrix();

	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(-0.30, 0.397,0.0);
	glutSolidSphere(0.02,200,200);
	glPopMatrix();

 glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.28, 0.32);
	glVertex2f(0.12, 0.32);         //Rectangle
	glVertex2f(0.12, 0.0);
	glVertex2f(0.28, 0.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.12, 0.25);
	glVertex2f(0.28, 0.25);
	glVertex2f(0.12, 0.28);
	glVertex2f(0.28, 0.28);
	glVertex2f(0.12, 0.31);
	glVertex2f(0.28, 0.31);
	glVertex2f(0.12, 0.13);
	glVertex2f(0.28, 0.13);
	glVertex2f(0.12, 0.25);
	glVertex2f(0.28, 0.25);
	glVertex2f(0.17, 0.25);
	glVertex2f(0.17, 0.13);
	glVertex2f(0.23, 0.25);
	glVertex2f(0.23, 0.13);
	glVertex2f(0.165, 0.13);
	glVertex2f(0.165, 0.00);
	glVertex2f(0.175, 0.13);
	glVertex2f(0.175, 0.00);
	glVertex2f(0.225, 0.13);
	glVertex2f(0.225, 0.00);
	glVertex2f(0.235, 0.13);
	glVertex2f(0.235, 0.00);
	glVertex2f(0.12, 0.07);
	glVertex2f(0.165, 0.07);
	glVertex2f(0.175, 0.07);
	glVertex2f(0.225, 0.07);
	glVertex2f(0.235, 0.07);
	glVertex2f(0.28, 0.07);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.12, 0.13);
    glVertex2f(0.13, 0.22);
	glVertex2f(0.145, 0.25);
	glVertex2f(0.16, 0.22);
	glVertex2f(0.17, 0.13);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.17, 0.13);
    glVertex2f(0.18, 0.23);
	glVertex2f(0.20, 0.25);
	glVertex2f(0.22, 0.23);
	glVertex2f(0.23, 0.13);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.23, 0.13);
    glVertex2f(0.24, 0.23);
	glVertex2f(0.255, 0.25);
	glVertex2f(0.27, 0.23);
	glVertex2f(0.28, 0.13);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.134, 0.07);
	glVertex2f(0.125, 0.07);         //1
	glVertex2f(0.125, 0.00);
	glVertex2f(0.134, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.146, 0.07);
	glVertex2f(0.137, 0.07);         //2
	glVertex2f(0.137, 0.00);
	glVertex2f(0.146, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.158, 0.07);
	glVertex2f(0.149, 0.07);         //3
	glVertex2f(0.149, 0.00);
	glVertex2f(0.158, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.190, 0.07);
	glVertex2f(0.178, 0.07);         //4
	glVertex2f(0.178, 0.00);
	glVertex2f(0.190, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.206, 0.07);
	glVertex2f(0.193, 0.07);         //5
	glVertex2f(0.193, 0.00);
	glVertex2f(0.206, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.222, 0.07);
	glVertex2f(0.210, 0.07);         //6
	glVertex2f(0.210, 0.00);
	glVertex2f(0.222, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.249, 0.07);
	glVertex2f(0.240, 0.07);         //Rectangle
	glVertex2f(0.240, 0.00);
	glVertex2f(0.249, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.262, 0.07);
	glVertex2f(0.253, 0.07);         //Rectangle
	glVertex2f(0.253, 0.00);
	glVertex2f(0.262, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.276, 0.07);
	glVertex2f(0.266, 0.07);         //Rectangle
	glVertex2f(0.266, 0.00);
	glVertex2f(0.276, 0.0);
	glEnd();
	//asif

	//asif
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.28, 0.32);
	glVertex2f(-0.12, 0.32);         //Rectangle
	glVertex2f(-0.12, 0.0);
	glVertex2f(-0.28, 0.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.12, 0.25);
	glVertex2f(-0.28, 0.25);
	glVertex2f(-0.12, 0.28);
	glVertex2f(-0.28, 0.28);
	glVertex2f(-0.12, 0.31);
	glVertex2f(-0.28, 0.31);
	glVertex2f(-0.12, 0.13);
	glVertex2f(-0.28, 0.13);
	glVertex2f(-0.12, 0.25);
	glVertex2f(-0.28, 0.25);
	glVertex2f(-0.17, 0.25);
	glVertex2f(-0.17, 0.13);
	glVertex2f(-0.23, 0.25);
	glVertex2f(-0.23, 0.13);
	glVertex2f(-0.165, 0.13);
	glVertex2f(-0.165, 0.00);
	glVertex2f(-0.175, 0.13);
	glVertex2f(-0.175, 0.00);
	glVertex2f(-0.225, 0.13);
	glVertex2f(-0.225, 0.00);
	glVertex2f(-0.235, 0.13);
	glVertex2f(-0.235, 0.00);
	glVertex2f(-0.12, 0.07);
	glVertex2f(-0.165, 0.07);
	glVertex2f(-0.175, 0.07);
	glVertex2f(-0.225, 0.07);
	glVertex2f(-0.235, 0.07);
	glVertex2f(-0.28, 0.07);
	glEnd();

    glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.12, 0.13);
    glVertex2f(-0.13, 0.22);
	glVertex2f(-0.145, 0.25);
	glVertex2f(-0.16, 0.22);
	glVertex2f(-0.17, 0.13);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.17, 0.13);
    glVertex2f(-0.18, 0.23);
	glVertex2f(-0.20, 0.25);
	glVertex2f(-0.22, 0.23);
	glVertex2f(-0.23, 0.13);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.23, 0.13);
    glVertex2f(-0.24, 0.23);
	glVertex2f(-0.255, 0.25);
	glVertex2f(-0.27, 0.23);
	glVertex2f(-0.28, 0.13);
	glEnd();



    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.134, 0.07);
	glVertex2f(-0.125, 0.07);         //1
	glVertex2f(-0.125, 0.00);
	glVertex2f(-0.134, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.146, 0.07);
	glVertex2f(-0.137, 0.07);         //2
	glVertex2f(-0.137, 0.00);
	glVertex2f(-0.146, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.158, 0.07);
	glVertex2f(-0.149, 0.07);         //3
	glVertex2f(-0.149, 0.00);
	glVertex2f(-0.158, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.190, 0.07);
	glVertex2f(-0.178, 0.07);         //4
	glVertex2f(-0.178, 0.00);
	glVertex2f(-0.190, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.206, 0.07);
	glVertex2f(-0.193, 0.07);         //5
	glVertex2f(-0.193, 0.00);
	glVertex2f(-0.206, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.222, 0.07);
	glVertex2f(-0.210, 0.07);         //6
	glVertex2f(-0.210, 0.00);
	glVertex2f(-0.222, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.249, 0.07);
	glVertex2f(-0.240, 0.07);         //Rectangle
	glVertex2f(-0.240, 0.00);
	glVertex2f(-0.249, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.262, 0.07);
	glVertex2f(-0.253, 0.07);         //Rectangle
	glVertex2f(-0.253, 0.00);
	glVertex2f(-0.262, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.276, 0.07);
	glVertex2f(-0.266, 0.07);         //Rectangle
	glVertex2f(-0.266, 0.00);
	glVertex2f(-0.276, 0.0);
	glEnd();

//start JUHAER
 glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.28, 0.38);
	glVertex2f(0.32, 0.38);
	glVertex2f(0.32, 0.0);
	glVertex2f(0.28, 0.0);

	glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.32, 0.32);
	glVertex2f(0.48, 0.32);
	glVertex2f(0.48, 0.0);
	glVertex2f(0.32, 0.0);
	glEnd();

glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.32, 0.31);
	glVertex2f(0.48, 0.31);
            glVertex2f(0.33, 0.29);
            glVertex2f(0.38, 0.29);
            glVertex2f(0.38, 0.29);
            glVertex2f(0.38, 0.24);
            glVertex2f(0.38, 0.24);
            glVertex2f(0.33, 0.24);
            glVertex2f(0.33, 0.24);
            glVertex2f(0.33, 0.29);


            glVertex2f(0.42, 0.29);
            glVertex2f(0.47, 0.29);
            glVertex2f(0.47, 0.29);
            glVertex2f(0.47, 0.24);
            glVertex2f(0.47, 0.24);
            glVertex2f(0.42, 0.24);
            glVertex2f(0.42, 0.24);
            glVertex2f(0.42, 0.29);
	glVertex2f(0.32, 0.22);
	glVertex2f(0.48, 0.22);
	glVertex2f(0.32, 0.20);
	glVertex2f(0.48, 0.20);

            glVertex2f(0.33, 0.10);
            glVertex2f(0.33, 0.15);
            glVertex2f(0.33, 0.15);
            glVertex2f(0.40, 0.20);
            glVertex2f(0.40, 0.20);
            glVertex2f(0.47, 0.15);
            glVertex2f(0.47, 0.15);
            glVertex2f(0.47, 0.10);


            glVertex2f(0.35, 0.10);
            glVertex2f(0.35, 0.15);
            glVertex2f(0.35, 0.15);
            glVertex2f(0.39, 0.15);
            glVertex2f(0.39, 0.15);
            glVertex2f(0.39, 0.10);


            glVertex2f(0.45, 0.10);
            glVertex2f(0.45, 0.15);
            glVertex2f(0.45, 0.15);
            glVertex2f(0.41, 0.15);
            glVertex2f(0.41, 0.15);
            glVertex2f(0.41, 0.10);



	glVertex2f(0.32, 0.10);
	glVertex2f(0.48, 0.10);


            glVertex2f(0.35, 0.0);
            glVertex2f(0.35, 0.07);
            glVertex2f(0.35, 0.07);
            glVertex2f(0.37, 0.10);
            glVertex2f(0.37, 0.10);
            glVertex2f(0.39, 0.07);
            glVertex2f(0.39, 0.07);
            glVertex2f(0.39, 0.0);   //line


            glVertex2f(0.46, 0.0);
            glVertex2f(0.46, 0.07);
            glVertex2f(0.46, 0.07);
            glVertex2f(0.44, 0.10);
            glVertex2f(0.44, 0.10);
            glVertex2f(0.42, 0.07);
            glVertex2f(0.42, 0.07);
            glVertex2f(0.42, 0.0);


	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.48, 0.38);
	glVertex2f(0.52, 0.38);
	glVertex2f(0.52, 0.0);
	glVertex2f(0.48, 0.0);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.28, 0.38);
	glVertex2f(0.28, 0.0);
	glVertex2f(0.32, 0.38);
	glVertex2f(0.32, 0.0);
	glVertex2f(0.48, 0.0);
	glVertex2f(0.48, 0.38);


	glEnd();


//finish


//start JUHAER
 glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.28, 0.38);
	glVertex2f(-0.32, 0.38);
	glVertex2f(-0.32, 0.0);
	glVertex2f(-0.28, 0.0);

	glEnd();

glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.32, 0.32);
	glVertex2f(-0.48, 0.32);
	glVertex2f(-0.48, 0.0);
	glVertex2f(-0.32, 0.0);
	glEnd();

glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.32, 0.31);
	glVertex2f(-0.48, 0.31);
            glVertex2f(-0.33, 0.29);
            glVertex2f(-0.38, 0.29);
            glVertex2f(-0.38, 0.29);
            glVertex2f(-0.38, 0.24);
            glVertex2f(-0.38, 0.24);
            glVertex2f(-0.33, 0.24);
            glVertex2f(-0.33, 0.24);
            glVertex2f(-0.33, 0.29);

            glVertex2f(-0.42, 0.29);
            glVertex2f(-0.47, 0.29);
            glVertex2f(-0.47, 0.29);
            glVertex2f(-0.47, 0.24);
            glVertex2f(-0.47, 0.24);
            glVertex2f(-0.42, 0.24);
            glVertex2f(-0.42, 0.24);
            glVertex2f(-0.42, 0.29);
	glVertex2f(-0.32, 0.22);
	glVertex2f(-0.48, 0.22);
	glVertex2f(-0.32, 0.20);
	glVertex2f(-0.48, 0.20);

            glVertex2f(-0.33, 0.10);
            glVertex2f(-0.33, 0.15);
            glVertex2f(-0.33, 0.15);
            glVertex2f(-0.40, 0.20);
            glVertex2f(-0.40, 0.20);
            glVertex2f(-0.47, 0.15);
            glVertex2f(-0.47, 0.15);
            glVertex2f(-0.47, 0.10);


            glVertex2f(-0.35, 0.10);
            glVertex2f(-0.35, 0.15);
            glVertex2f(-0.35, 0.15);
            glVertex2f(-0.39, 0.15);
            glVertex2f(-0.39, 0.15);
            glVertex2f(-0.39, 0.10);


            glVertex2f(-0.45, 0.10);
            glVertex2f(-0.45, 0.15);
            glVertex2f(-0.45, 0.15);
            glVertex2f(-0.41, 0.15);
            glVertex2f(-0.41, 0.15);
            glVertex2f(-0.41, 0.10);



	glVertex2f(-0.32, 0.10);
	glVertex2f(-0.48, 0.10);


            glVertex2f(-0.35, 0.0);
            glVertex2f(-0.35, 0.07);
            glVertex2f(-0.35, 0.07);
            glVertex2f(-0.37, 0.10);
            glVertex2f(-0.37, 0.10);
            glVertex2f(-0.39, 0.07);
            glVertex2f(-0.39, 0.07);
            glVertex2f(-0.39, 0.0);


            glVertex2f(-0.46, 0.0);
            glVertex2f(-0.46, 0.07);
            glVertex2f(-0.46, 0.07);
            glVertex2f(-0.44, 0.10);
            glVertex2f(-0.44, 0.10);
            glVertex2f(-0.42, 0.07);
            glVertex2f(-0.42, 0.07);
            glVertex2f(-0.42, 0.0);


	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.48, 0.38);
	glVertex2f(-0.52, 0.38);
	glVertex2f(-0.52, 0.0);
	glVertex2f(-0.48, 0.0);

	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.28, 0.38);
	glVertex2f(-0.28, 0.0);
	glVertex2f(-0.32, 0.38);
	glVertex2f(-0.32, 0.0);
	glVertex2f(-0.48, 0.0);
	glVertex2f(-0.48, 0.38);


	glEnd();


//finish

}
void RightmostDome()
{

	glColor3f(1.0,1.0,1.0);

	glPushMatrix();
	glTranslatef(0.50,0.4,0.0);     //2.0
	glutSolidSphere(0.02,50,50);
	glPopMatrix();


	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.4999,0.418,0.0);    //2.2
	glutSolidSphere(0.01,50,50);
	glPopMatrix();












glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(0.30,0.397,0.0);    //3.0
	glutSolidSphere(0.02,200,200);
	glPopMatrix();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.04, 0.4350);
	glVertex2f(0.04, 0.435);
	glVertex2f(0.04, 0.4350);
	glVertex2f(0.04, 0.34);
	glVertex2f(0.04, 0.34);
	glVertex2f(0.12, 0.34);
	glVertex2f(0.12, 0.34);
	glVertex2f(0.12, 0.0);



	glVertex2f(-0.12, 0.0);
	glVertex2f(-0.12, 0.34);
	glVertex2f(-0.12, 0.34);
	glVertex2f(-0.04, 0.34);

	glVertex2f(-0.04, 0.34);
	glVertex2f(-0.04, 0.435);








    glEnd();

    glBegin(GL_LINE);
	glColor3f(0.0f, 0.0f, 0.0f);


    glVertex2f(0.03, 0.0);
	glVertex2f(0.03, 0.435);
	glVertex2f(-0.03, 0.0);
	glVertex2f(-0.03, 0.435);
	glEnd();









}

void MOON()
     {
         glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(-0.82,0.82,0.0);
	glutSolidSphere(0.06,300,300);      //Moon
	glPopMatrix();


	glColor3f(0.0,0.0,0.9);
	glPushMatrix();
	glTranslatef(-0.827,0.830,0.0);
	glutSolidSphere(0.051,300,300);      //Moon
	glPopMatrix();

     }
void Ground()
{

    glBegin(GL_POLYGON);
	glColor3f(0.647059f, 0.4, 0.4);
	glVertex2f(50.0, 0.0);
	glVertex2f(-50.0, 0.0);           //2.6
	glVertex2f(-50.0, -50.0);
	glVertex2f(50.0, -50.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(0.12, -0.00);
	glVertex2f(0.12, -0.05);
	glVertex2f(0.32, -1.00);
	glVertex2f(0.32, -1.04);
	glVertex2f(2.0, -1.04);
	glVertex2f(2.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-0.12, -0.00);
	glVertex2f(-0.12, -0.05);
	glVertex2f(-0.32, -1.00);
	glVertex2f(-0.32, -1.04);
	glVertex2f(-2.0, -1.04);
	glVertex2f(-2.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.7f);
    glVertex2f(-0.12, 0.00);
	glVertex2f(-0.12, -0.05);
	glVertex2f(-0.32, -1.04);
	glVertex2f(0.32, -1.04);
	glVertex2f(0.12, -0.05);
	glVertex2f(0.12, 0.00);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.55, 0.0);
	glVertex2f(0.55, 0.0);
	glVertex2f(0.55, -0.02);
	glVertex2f(-0.55, -0.02);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, -0.01);
	glVertex2f(-0.12, -0.05);
	glVertex2f(-0.32, -1.04);
	glVertex2f(-0.32, -1.00);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, -0.01);
	glVertex2f(0.12, -0.05);
	glVertex2f(0.32, -1.04);
	glVertex2f(0.32, -1.00);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.205, -0.01);
	glVertex2f(0.21, -0.01);
	glVertex2f(0.42, -1.04);
	glVertex2f(0.415, -1.04);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.205, -0.01);
	glVertex2f(-0.21, -0.01);
	glVertex2f(-0.42, -1.04);
	glVertex2f(-0.415, -1.04);
	glEnd();


}
GLfloat sunPosition = 0.0f;
GLfloat sunSpeed = 0.0f;

void updateSun(int value){
    if(sunPosition > 15.0f)
        sunPosition = -15.0f;

    sunPosition += sunSpeed;

    glutPostRedisplay();
    glutTimerFunc(200, updateSun, 0);
}

void sunset(float Setx){
    sunSpeed=Setx;
}

void sunset2(float Setx){
    sunSpeed=Setx;
}

void sun()
{
 glColor3f(1.0,1.0,0.0);
	glPushMatrix();
	glTranslatef(0.82,0.82,0.0);
	glutSolidSphere(0.06,300,300);      //Moon
	glPopMatrix();


	int i;
    int triangleAmount = 40;
    GLfloat twicePi = 2.0f * PI;

    float x=18.0f;
    float y=5.0f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.82f,0.82f,0.3f);
    glVertex2f(x,y);

    for(i=0; i<=triangleAmount;i++)
    {
        glVertex2f(
            x+(4*cos(i*twicePi/triangleAmount)),
            y+(4*sin(i*twicePi/triangleAmount))
        );
    }

    glEnd();
}




void Bird()
{

}









//cloud finish line









void display() {
    glClearColor(0.0f, 0.0f, 0.900000001f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


    glColor3f(1.0,1.0,1.0);
    renderBitmapString(-0.081f, 0.7f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Mysore Palace");


    CentreDome();

    LeftmostDome();
    RightmostDome();
    MOON();
    Ground();

    Bird();


    glPushMatrix();
        glTranslatef(0.0f,sunPosition, 0.0f);
        sun();
    glPopMatrix();
    sun();





glPushMatrix();{
    allTrees();
    cloud2();
    cloud1();
 }
glPopMatrix();

glPushMatrix();
{
    allTrees();
    cloud2();
    cloud1();
}
glPopMatrix();
	glFlush();





     glFlush(); // Render now
}

void keyboard(unsigned char key, int x, int y)
{
    if(key=='p')
    {
        sunset(0.2);
        glutPostRedisplay();
    }

    else if(key=='l')
    {
        sunset2(0.0);
        glutPostRedisplay();
    }

}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    //glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
    glutInitWindowSize(1300, 730); // Set the window's initial width & height
    glutInitWindowPosition(20, 0);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutIdleFunc(display);
    glutMainLoop(); // Enter the event-processing loop
    glutCreateWindow("Text Window");


    glutKeyboardFunc(keyboard);






    return 0;
}
