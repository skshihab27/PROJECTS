#include <windows.h>

#include <GL/glut.h>



GLfloat position= 0.0f;
GLfloat position2= 0.0f;
GLfloat position3= 0.0f;
GLfloat position4= 0.0f;
GLfloat position5=0.0f;

GLfloat speed=0.0f;
GLfloat speed2=0.0f;
GLfloat speed3=0.0f;
void initGL()
{
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void update(int value)
{

    if(position < -1.5)
        position = 1.0f;

    position -= speed;


    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}
void update2(int value)
{
    if(position2 > 1.5)
        position2 = -1.0f;

    position2 += speed;



    glutPostRedisplay();


    glutTimerFunc(100, update2, 0);
}
void update3(int value)
{

    if(position3 <-1.5)
        position3 = 1.0f;

    position3 -= speed2;


    glutPostRedisplay();


    glutTimerFunc(100, update3, 0);
}
void update4(int value)
{
    if(position4 > 1.7)
        position4 = -1.0f;

    position4 += speed3;



    glutPostRedisplay();


    glutTimerFunc(100, update4, 0);
}
void update5(int value)
{

    if(position5 < -1.0)
        position5 = 1.0f;

    position5 -= speed;


    glutPostRedisplay();


    glutTimerFunc(100, update5, 0);
}



void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'e':   //ship //bird
        speed = 0.0f;
        break;
    case 's':
        speed = 0.03f; //ship //bird
        break;
    case 'b':
        speed2= 0.1f; //car
        break;
    case 'f':
        speed2 = 0.0f; //car
        break;
    case 'x':
        speed3= 0.01f; //sun
        break;
    case 'y':
        speed3= 0.0f; //sun

        /* case 'h':
         PlaySound(NULL,0,0);
             PlaySound(TEXT("Ship.wav"),NULL,SND_ASYNC|SND_FILENAME); */
        glutPostRedisplay();


    }
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

    glLoadIdentity(); // Reset the model-view matrix
    //sky
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.596f,0.96f,1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f( 1.0f, 0.3f);
    glVertex2f( -1.0f,  1.0f);
    glVertex2f(-1.0f,  0.3f);
    glEnd();
    // water
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.38f,0.72f,1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-0.1f);
    glVertex2f(-1.0f,-0.1f);


    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(0.8f,-0.8f);
    glVertex2f(0.95f,-0.8f);
    glVertex2f(0.8f,-0.81f);
    glVertex2f(0.95f,-0.81f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(-0.8f,-0.8f);
    glVertex2f(-0.95f,-0.8f);
    glVertex2f(-0.8f,-0.81f);
    glVertex2f(-0.95f,-0.81f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(-0.6f,-0.6f);
    glVertex2f(-0.75f,-0.6f);
    glVertex2f(-0.6f,-0.61f);
    glVertex2f(-0.75f,-0.61f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(0.5f,-0.6f);
    glVertex2f(0.65f,-0.6f);
    glVertex2f(0.5f,-0.61f);
    glVertex2f(0.65f,-0.61f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.35f,-0.2f);
    glVertex2f(0.2f,-0.21f);
    glVertex2f(0.35f,-0.21f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.2f,-0.21f);
    glVertex2f(-0.35f,-0.21f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.678f,0.847f,0.90f);
    glVertex2f(0.2f,-0.4f);
    glVertex2f(0.35f,-0.4f);
    glVertex2f(0.2f,-0.41f);
    glVertex2f(0.35f,-0.41f);
    glEnd();




//ship 1
    glPushMatrix();
    glTranslatef(position5,0.0f,0.0f);
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.9f,-0.2f);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.8f,-0.3f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.75f,0.75f,0.75f);
    glVertex2f(0.4f,-0.13f);
    glVertex2f(0.8f,-0.13f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.8f,-0.2f);
    glEnd();

    //ship 2
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.35f,0.17f);
    glVertex2f(-0.9f,-0.4f);
    glVertex2f(-0.2f,-0.4f);
    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.3f,-0.5f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.75f,0.75f,0.75f);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-0.8f,-0.4f);
    glVertex2f(-0.3f,-0.3f);
    glVertex2f(-0.3f,-0.4f);
    glEnd();

    glPopMatrix();
    //ship 3
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545,0.102f,0.102f);
    glVertex2f(-0.2f,-0.7f);
    glVertex2f(0.8f,-0.7f);
    glVertex2f(-0.1f,-0.85f);
    glVertex2f(0.7f,-0.85f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,0.647f,0.0f);
    glVertex2f(-0.1f,-0.6f);
    glVertex2f(0.7f,-0.6f);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(0.7f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.2f,-0.6f);
    glVertex2f(0.25f,-0.6f);
    glVertex2f(0.2f,-0.5f);
    glVertex2f(0.25f,-0.5f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.4f,-0.6f);
    glVertex2f(0.45f,-0.6f);
    glVertex2f(0.4f,-0.5f);
    glVertex2f(0.45f,-0.5f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.5f,-0.6f);
    glVertex2f(0.55f,-0.6f);
    glVertex2f(0.5f,-0.5f);
    glVertex2f(0.55f,-0.5f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.15f,-0.6f);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.15f,-0.5f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.3f,-0.6f);
    glVertex2f(0.35f,-0.6f);
    glVertex2f(0.3f,-0.5f);
    glVertex2f(0.35f,-0.5f);
    glEnd();
    glPopMatrix();


//Behind HiLL 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.545f,0.0f);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(-1.0, 0.55f);
    glVertex2f(-0.8f, 0.3f);
    glEnd();
//Behind HiLL 1&2
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.545f,0.0f);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.6, 0.55f);
    glVertex2f(-0.4f, 0.3f);
    glEnd();
    //Behind HiLL 2&3
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.545f,0.0f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(-0.2, 0.55f);
    glVertex2f(0.0f, 0.3f);
    glEnd();
    //Behind HiLL 3&4
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.545f,0.0f);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.2, 0.55f);
    glVertex2f(0.4f, 0.3f);
    glEnd();

    //Behind HiLL 4&5
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.545f,0.0f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.6, 0.55f);
    glVertex2f(0.8f, 0.3f);
    glEnd();

    //Behind HiLL 5
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.545f,0.0f);
    glVertex2f(0.8f,0.3f);
    glVertex2f(1.0, 0.55f);
    glVertex2f(1.0f, 0.3f);
    glEnd();
    //HiLL 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.4f, 0.80f, 0.0f);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(-0.8, 0.6f);
    glVertex2f(-0.6f, 0.3f);
    glEnd();
    //HiLL 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.4f, 0.80f, 0.0f);
    glVertex2f(-0.6f,0.3f);
    glVertex2f(-0.4, 0.6f);
    glVertex2f(-0.2f, 0.3f);
    glEnd();

    //HiLL 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.4f, 0.80f, 0.0f);
    glVertex2f(-0.2f,0.3f);
    glVertex2f(0.0, 0.6f);
    glVertex2f(0.2f, 0.3f);
    glEnd();
    //HiLL 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.4f, 0.80f, 0.0f);
    glVertex2f(0.2f,0.3f);
    glVertex2f(0.4, 0.6f);
    glVertex2f(0.6f, 0.3f);
    glEnd();


    //HiLL 5
    glBegin(GL_TRIANGLES);
    glColor3f(0.4f, 0.80f, 0.0f);
    glVertex2f(0.6f,0.3f);
    glVertex2f(0.8, 0.6f);
    glVertex2f(1.0f, 0.3f);
    glEnd();


    //road
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.471f,0.471f,0.471f);
    glVertex2f(1.0f,0.3f);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(1.0f,-0.1f);
    glVertex2f(-1.0f,-0.1f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(-1.0f,0.25f);
    glVertex2f(-0.9f,0.3f);
    glVertex2f(-0.9f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f (-0.9f,0.3f);
    glVertex2f(-0.9f,0.25f);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.8f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.8f,0.25f);
    glVertex2f(-0.7f,0.3f);
    glVertex2f(-0.7f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.7f,0.3f);
    glVertex2f(-0.7f,0.25f);
    glVertex2f(-0.6f,0.3f);
    glVertex2f(-0.6f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.6f,0.3f);
    glVertex2f(-0.6f,0.25f);
    glVertex2f(-0.5f,0.3f);
    glVertex2f(-0.5f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.5f,0.3f);
    glVertex2f(-0.5f,0.25f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(-0.4f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(-0.4f,0.25f);
    glVertex2f(-0.3f,0.3f);
    glVertex2f(-0.3f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.3f,0.3f);
    glVertex2f(-0.3f,0.25f);
    glVertex2f(-0.2f,0.3f);
    glVertex2f(-0.2f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.2f,0.3f);
    glVertex2f(-0.2f,0.25f);
    glVertex2f(-0.1f,0.3f);
    glVertex2f(-0.1f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.1f,0.3f);
    glVertex2f(-0.1f,0.25f);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.0f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.0f,0.25f);
    glVertex2f(0.1f,0.3f);
    glVertex2f(0.1f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.3f);
    glVertex2f(0.1f,0.25f);
    glVertex2f(0.2f,0.3f);
    glVertex2f(0.2f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.2f,0.3f);
    glVertex2f(0.2f,0.25f);
    glVertex2f(0.3f,0.3f);
    glVertex2f(0.3f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.3f,0.3f);
    glVertex2f(0.3f,0.25f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.4f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.4f,0.25f);
    glVertex2f(0.5f,0.3f);
    glVertex2f(0.5f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.5f,0.3f);
    glVertex2f(0.5f,0.25f);
    glVertex2f(0.6f,0.3f);
    glVertex2f(0.6f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.6f,0.3f);
    glVertex2f(0.6f,0.25f);
    glVertex2f(0.7f,0.3f);
    glVertex2f(0.7f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.7f,0.3f);
    glVertex2f(0.7f,0.25f);
    glVertex2f(0.8f,0.3f);
    glVertex2f(0.8f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.8f,0.3f);
    glVertex2f(0.8f,0.25f);
    glVertex2f(0.9f,0.3f);
    glVertex2f(0.9f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.9f,0.3f);
    glVertex2f(0.9f,0.25f);
    glVertex2f(1.0f,0.3f);
    glVertex2f(1.0f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f (-0.9f,0.05f);
    glVertex2f(-0.7f,0.1f);
    glVertex2f(-0.7f,0.05f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.5f,0.1f);
    glVertex2f (-0.5f,0.05f);
    glVertex2f(-0.3f,0.1f);
    glVertex2f(-0.3f,0.05f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.3f,0.1f);
    glVertex2f (0.3f,0.05f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.1f,0.05f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.5f,0.1f);
    glVertex2f (0.5f,0.05f);
    glVertex2f(0.7f,0.1f);
    glVertex2f(0.7f,0.05f);
    glEnd();
    //partition
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(-1.0f,-0.1f);
    glVertex2f(-0.97f,-0.1f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(-0.97f,0.0f);
    glEnd();

    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.86f,-0.1f);
    glVertex2f(-0.89f,-0.1f);
    glVertex2f(-0.86f,0.0f);
    glVertex2f(-0.89f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(-0.78f,-0.1f);
    glVertex2f(-0.75f,-0.1f);
    glVertex2f(-0.78f,0.0f);
    glVertex2f(-0.75f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.68f,-0.1f);
    glVertex2f(-0.65f,-0.1f);
    glVertex2f(-0.68f,0.0f);
    glVertex2f(-0.65f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(-0.58f,-0.1f);
    glVertex2f(-0.55f,-0.1f);
    glVertex2f(-0.58f,0.0f);
    glVertex2f(-0.55f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.48f,-0.1f);
    glVertex2f(-0.45f,-0.1f);
    glVertex2f(-0.48f,0.0f);
    glVertex2f(-0.45f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(-0.38f,-0.1f);
    glVertex2f(-0.35f,-0.1f);
    glVertex2f(-0.38f,0.0f);
    glVertex2f(-0.35f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.28f,-0.1f);
    glVertex2f(-0.25f,-0.1f);
    glVertex2f(-0.28f,0.0f);
    glVertex2f(-0.25f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(-0.18f,-0.1f);
    glVertex2f(-0.15f,-0.1f);
    glVertex2f(-0.18f,0.0f);
    glVertex2f(-0.15f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.05f,-0.1f);
    glVertex2f(-0.02f,-0.1f);
    glVertex2f(-0.05f,0.0f);
    glVertex2f(-0.02f,0.0f);
    glEnd();

    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(0.05f,-0.1f);
    glVertex2f(0.08f,-0.1f);
    glVertex2f(0.05f,0.0f);
    glVertex2f(0.08f,0.0f);
    glEnd();

    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.15f,-0.1f);
    glVertex2f(0.18f,0.0f);
    glVertex2f(0.15f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(0.28f,-0.1f);
    glVertex2f(0.25f,-0.1f);
    glVertex2f(0.28f,0.0f);
    glVertex2f(0.25f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.38f,-0.1f);
    glVertex2f(0.35f,-0.1f);
    glVertex2f(0.38f,0.0f);
    glVertex2f(0.35f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(0.48f,-0.1f);
    glVertex2f(0.45f,-0.1f);
    glVertex2f(0.48f,0.0f);
    glVertex2f(0.45f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.58f,-0.1f);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.58f,0.0f);
    glVertex2f(0.55f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(0.68f,-0.1f);
    glVertex2f(0.65f,-0.1f);
    glVertex2f(0.68f,0.0f);
    glVertex2f(0.65f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.78f,-0.1f);
    glVertex2f(0.75f,-0.1f);
    glVertex2f(0.78f,0.0f);
    glVertex2f(0.75f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.545f,0.145f,0.0f);
    glVertex2f(0.86f,-0.1f);
    glVertex2f(0.89f,-0.1f);
    glVertex2f(0.86f,0.0f);
    glVertex2f(0.89f,0.0f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(1.0f,-0.1f);
    glVertex2f(0.97f,-0.1f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.97f,0.0f);
    glEnd();
    //car
    glPushMatrix();
    glTranslatef(position3,0.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.12f,0.56f,1.0f);
    glVertex2f(0.35f,0.35f);
    glVertex2f(0.2f,0.25f);
    glVertex2f(0.35f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.50f);
    glVertex2f(0.35f,0.35f);
    glVertex2f(0.5f,0.35f);
    glVertex2f(0.35f,0.25f);
    glVertex2f(0.5f,0.25f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.282f,0.239f,0.545f);
    glVertex2f(0.2f,0.25f);
    glVertex2f(0.2f,0.12f);
    glVertex2f(0.5f,0.25f);
    glVertex2f(0.5f,0.12f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.682f,0.933f,0.933f);
    glVertex2f(0.36f,0.32f);
    glVertex2f(0.36f,0.26f);
    glVertex2f(0.40f,0.32f);
    glVertex2f(0.40f,0.26f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.682f,0.933f,0.933f);
    glVertex2f(0.44f,0.32f);
    glVertex2f(0.44f,0.26f);
    glVertex2f(0.48f,0.32f);
    glVertex2f(0.48f,0.26f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(1.0f,1.0f,0.99f);
    glVertex2f(0.20f,0.18f);
    glVertex2f(0.20f,0.14f);
    glVertex2f(0.22f,0.18f);
    glVertex2f(0.22f,0.14f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.3f,0.12f);
    glVertex2f(0.35,0.12f);
    glVertex2f(0.3f,0.18f);
    glVertex2f(0.35f,0.18f);
    glEnd();
    glBegin(GL_POLYGON_BIT);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.42f,0.12f);
    glVertex2f(0.47f,0.12f);
    glVertex2f(0.42f,0.18f);
    glVertex2f(0.47f,0.18f);
    glEnd();

    glPopMatrix();
    //bird 1
    glPushMatrix();

    glTranslatef(position,position2,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.2f,0.9f);
    glVertex2f(0.17f,0.86f);
    glVertex2f(0.22f,0.82f);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.27f,0.86f);
    glVertex2f(0.22f,0.82f);
    glEnd();
    glPopMatrix();


    //bird 2
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.53f,0.9f);
    glVertex2f(0.5f,0.86f);
    glVertex2f(0.55f,0.82f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.58f,0.9f);
    glVertex2f(0.60f,0.86f);
    glVertex2f(0.55f,0.82f);
    glEnd();
    glPopMatrix();
    //bird 3
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.33f,0.66f);
    glVertex2f(-0.27f,0.62f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.22f,0.66f);
    glVertex2f(-0.27f,0.62f);
    glEnd();
    glPopMatrix();


    sun();

    glFlush();   // Render now
}
void circle(GLfloat x, GLfloat y, GLfloat r)
{

    int tc=100;

    GLfloat tpi=2.0f *3.141592653589793238;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);

    for(int i=0; i<=tc; i++)
    {
        glVertex2f(x+ (r*cos( (i*tpi)/tc)), y+ (r*sin( (i*tpi)/tc)));
    }
    glEnd();
}
void sun()
{
    glTranslatef(position4,0.0f,0.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    circle(-0.8, 0.9, 0.1);
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(800, 440);   // Set the window's initial width & height - non-square
    glutInitWindowPosition(90, 90); // Position the window's initial top-left corner
    glutCreateWindow("MARINE DRIVE ROAD");  // Create window with the given title
    glutDisplayFunc(display); // Register callback handler for window re-size event
    initGL();
    glutKeyboardFunc(handleKeypress);

    glutTimerFunc(100,update,0);
    glutTimerFunc(100,update2,0);
    glutTimerFunc(100,update3,0);
    glutTimerFunc(100,update4,0);
    glutTimerFunc(100,update5,0);



    glutMainLoop();



    return 0;
}










