#include <windows.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>
#define PI  3.141592653589793238
float add_r, add_g, add_b;
void circle(float x_value, float y_value, float radious_value)
{
    float x = x_value;
    float y = y_value;
    float radious = radious_value;
    float twicePI = 2.0f * PI;
    int racmax = 50;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= racmax; i++)
    {
        glVertex2f(
            x + (radious * cos(i * twicePI / racmax)),
            y + (radious * sin(i * twicePI / racmax))
        );
    }
    glEnd();
}


bool night = false;
bool evening = false;

/////////Sky///////////
float sky_r = 0.3019, sky_g = 0.9568, sky_b = 1.0;

void Sky()
{
    glBegin(GL_QUADS);
    if (night == true)
        glColor3f(0.282353, 0.282353, 0.941176);
    else
        glColor3f(sky_r, sky_g, sky_b);
    glVertex2f(0, 50);
    if (night == true)
        glColor3f(0.282353, 0.282353, 0.941176);
    else
        glColor3f(sky_r, sky_g, sky_b);
    glVertex2f(1900, 50);
    if (evening == true)
        glColor3f(0.980392, 0.627451, 0.137255);
    else
        glColor3f(sky_r, sky_g, sky_b);
    glVertex2f(1900, 528);
    if (evening == true)
        glColor3f(0.980392, 0.627451, 0.137255);
    else
        glColor3f(sky_r, sky_g, sky_b);
    glVertex2f(0, 528);
    glEnd();
}
///////////////////////////


///////Buildings///////////
void Building_1()
{
    glColor3f(0.054902, 0.105882, 0.141176);
    glBegin(GL_POLYGON);
    glVertex2f(435, 528);
    glVertex2f(450, 528);
    glVertex2f(450, -150);
    glVertex2f(435, -150);
    glEnd();

    glColor3f(0.627451 + add_r, 0.921569 + add_g, 0.980392 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(365, 528);
    glVertex2f(390, 528);
    glVertex2f(390, 500);
    glVertex2f(365, 500);
    glEnd();
    float glass_y = 45;
    for (int i = 0; i < 14; i++)
    {
        if (night == true && (i == 1 || i == 3 || i == 4 || i == 5 || i == 10))
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.627451 + add_r, 0.921569 + add_g, 0.980392 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(365, 528 - glass_y);
        glVertex2f(390, 528 - glass_y);
        glVertex2f(390, 500 - glass_y);
        glVertex2f(365, 500 - glass_y);
        glEnd();
        glass_y += 45;
    }
    glColor3f(0.2 + add_r, 0.054902 + add_g, 0.145098 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(355, 528);
    glVertex2f(400, 528);
    glVertex2f(400, -150);
    glVertex2f(355, -150);
    glEnd();

    glColor3f(0.054902 + add_r, 0.105882 + add_g, 0.141176 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(305, 528);
    glVertex2f(355, 528);
    glVertex2f(355, -150);
    glVertex2f(305, -150);
    glEnd();

    glColor3f(0.631373 + add_r, 0.486275 + add_g, 0.384314 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(205, 528);
    glVertex2f(305, 528);
    glVertex2f(305, 450);
    glVertex2f(205, 450);
    glEnd();

    glColor3f(0.054902 + add_r, 0.105882 + add_g, 0.141176 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(195, 528);
    glVertex2f(205, 528);
    glVertex2f(205, -150);
    glVertex2f(195, -150);
    glEnd();

    glColor3f(0.054902 + add_r, 0.105882 + add_g, 0.141176 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(155, 528);
    glVertex2f(195, 528);
    glVertex2f(195, 508);
    glVertex2f(155, 508);
    glEnd();
    float yx = 40;
    for (int i = 0; i < 16; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(155, 528 - yx);
        glVertex2f(195, 528 - yx);
        glVertex2f(195, 508 - yx);
        glVertex2f(155, 508 - yx);
        glEnd();
        yx = yx + 40;
    }


    glColor3f(0.631373 + add_r, 0.486275 + add_g, 0.384314 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(110, 528);
    glVertex2f(150, 528);
    glVertex2f(150, 450);
    glVertex2f(110, 450);
    glEnd();

    glColor3f(0.054902 + add_r, 0.105882 + add_g, 0.141176 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(90, 528);
    glVertex2f(105, 528);
    glVertex2f(105, -150);
    glVertex2f(90, -150);
    glEnd();

    glColor3f(0.631373 + add_r, 0.486275 + add_g, 0.384314 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(22, 528);
    glVertex2f(85, 528);
    glVertex2f(85, 450);
    glVertex2f(22, 450);
    glEnd();

    glColor3f(0.631373 + add_r, 0.486275 + add_g, 0.384314 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(0, 528);
    glVertex2f(20, 528);
    glVertex2f(20, -150);
    glVertex2f(0, -150);
    glEnd();

    glColor3f(0.929412 + add_r, 0.611765 + add_g, 0.380392 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(0, 528);
    glVertex2f(450, 528);
    glVertex2f(450, -150);
    glVertex2f(0, -150);
    glEnd();

}

void Building_2()
{
    glColor3f(0.627451 + add_r, 0.921569 + add_g, 0.980392 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(460, 330);
    glVertex2f(528, 330);
    glVertex2f(528, 280);
    glVertex2f(460, 280);
    glEnd();

    glPushMatrix();
    float glass_y = 70;
    for (int i = 0; i < 5; i++)
    {
        if (night == true && (i == 0 || i == 1 || i == 3 || i == 4))
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.627451 + add_r, 0.921569 + add_g, 0.980392 + add_b);
        glTranslatef(0, -glass_y, 0);
        glBegin(GL_POLYGON);
        glVertex2f(460, 330);
        glVertex2f(528, 330);
        glVertex2f(528, 280);
        glVertex2f(460, 280);
        glEnd();
    }
    glPopMatrix();

    glColor3f(0.211765 + add_r, 0.321569 + add_g, 0.490196 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(450, 358);
    glVertex2f(538, 358);
    glVertex2f(538, -80);
    glVertex2f(450, -80);
    glEnd();

    glColor3f(0.498039 + add_r, 0.654902 + add_g, 0.890196 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(450, 428);
    glVertex2f(550, 428);
    glVertex2f(550, 438);
    glVertex2f(450, 438);
    glEnd();

    glColor3f(0.498039 + add_r, 0.654902 + add_g, 0.890196 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(450, 378);
    glVertex2f(550, 378);
    glVertex2f(550, 388);
    glVertex2f(450, 388);
    glEnd();

    glColor3f(0.309804 + add_r, 0.490196 + add_g, 0.760784 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(450, 428);
    glVertex2f(550, 428);
    glVertex2f(550, -80);
    glVertex2f(450, -80);
    glEnd();
}
void Building_3()
{
    float x_div = 0, y_div = 0;
    glColor3f(0.501961 + add_r, 0.415686 + add_g, 0.27451 + add_b);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            glBegin(GL_POLYGON);
            glVertex2f(1000 + x_div, 20 - y_div);
            glVertex2f(1040 + x_div, 20 - y_div);
            glVertex2f(1040 + x_div, 17 - y_div);
            glVertex2f(1000 + x_div, 17 - y_div);
            glEnd();
            y_div += 30;
        }
        y_div = 0;
        x_div += 50;
    }


    glColor3f(0.054902, 0.0509804, 0.14902);
    glBegin(GL_POLYGON);
    glVertex2f(1000, 50);
    glVertex2f(1040, 50);
    glVertex2f(1040, -200);
    glVertex2f(1000, -200);
    glEnd();
    float x_pos = 50;
    for (int i = 0; i < 7; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(1000 + x_pos, 50);
        glVertex2f(1040 + x_pos, 50);
        glVertex2f(1040 + x_pos, -200);
        glVertex2f(1000 + x_pos, -200);
        glEnd();
        x_pos += 50;
    }

    glColor3f(1, 0.819608, 0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1030, 60);
    glVertex2f(1370, 60);
    glVertex2f(1370, 95);
    glVertex2f(1030, 95);
    glEnd();

    glColor3f(0.929412, 0.733333, 0.494118);
    glBegin(GL_POLYGON);
    glVertex2f(1000, -200);
    glVertex2f(1400, -200);
    glVertex2f(1400, 50);
    glVertex2f(1000, 50);
    glEnd();
}

void Building_4()
{

    float y_pos = 0, y_pos_1 = 0;

    glPushMatrix();
    glTranslatef(110, 0, 0);
    for (int i = 0; i < 13; i++)
    {
        if (night == true && (i == 1 || i == 10 || i == 7 || i == 6 || i == 3))
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.266667 + add_r, 0.345098 + add_g, 0.580392 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(962, 528 - y_pos_1);
        glVertex2f(999, 528 - y_pos_1);
        glVertex2f(999, 483 - y_pos_1);
        glVertex2f(962, 483 - y_pos_1);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1048, 528 - y_pos_1);
        glVertex2f(1011, 528 - y_pos_1);
        glVertex2f(1011, 483 - y_pos_1);
        glVertex2f(1048, 483 - y_pos_1);
        glEnd();
        y_pos_1 += 52;
    }
    glPopMatrix();

    for (int i = 0; i < 13; i++)
    {
        if (night == true && (i == 2 || i == 11 || i == 4 || i == 8 || i == 7))
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.266667 + add_r, 0.345098 + add_g, 0.580392 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(962, 528 - y_pos);
        glVertex2f(999, 528 - y_pos);
        glVertex2f(999, 483 - y_pos);
        glVertex2f(962, 483 - y_pos);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(1048, 528 - y_pos);
        glVertex2f(1011, 528 - y_pos);
        glVertex2f(1011, 483 - y_pos);
        glVertex2f(1048, 483 - y_pos);
        glEnd();
        y_pos += 52.00;
    }
    glColor3f(0.929412, 0.733333, 0.494118);
    glBegin(GL_POLYGON);
    glVertex2f(1200, 528);
    glVertex2f(1180, 528);
    glVertex2f(1180, -150);
    glVertex2f(1200, -150);
    glEnd();

    glColor3f(0.0156863, 0.054902, 0.168627);
    glBegin(GL_POLYGON);
    glVertex2f(900, 528);
    glVertex2f(950, 528);
    glVertex2f(950, -150);
    glVertex2f(900, -150);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(955, 528);
    glVertex2f(1055, 528);
    glVertex2f(1055, -150);
    glVertex2f(955, -150);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1065, 528);
    glVertex2f(1165, 528);
    glVertex2f(1165, -150);
    glVertex2f(1065, -150);
    glEnd();


    glColor3f(0.862745, 0.886275, 0.960784);
    glBegin(GL_POLYGON);
    glVertex2f(900, 528);
    glVertex2f(1200, 528);
    glVertex2f(1200, -150);
    glVertex2f(900, -150);
    glEnd();
}

void Building_5()
{
    float y_pos = 0;

    for (int i = 0; i < 10; i++)
    {
        if (night == true && (i == 0 || i == 3 || i == 5 || i == 6 || i == 9))
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.266667 + add_r, 0.345098 + add_g, 0.580392 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(830, 325 - y_pos);
        glVertex2f(950, 325 - y_pos);
        glVertex2f(950, 290 - y_pos);
        glVertex2f(830, 290 - y_pos);
        glEnd();
        y_pos += 40;
    }

    glColor3f(0.0156863, 0.054902, 0.168627);
    glBegin(GL_POLYGON);
    glVertex2f(820, 328);
    glVertex2f(1000, 328);
    glVertex2f(1000, 348);
    glVertex2f(820, 348);
    glEnd();

    glColor3f(0.941176, 0.435294, 0.282353);
    glBegin(GL_POLYGON);
    glVertex2f(820, 328);
    glVertex2f(1000, 328);
    glVertex2f(1000, -100);
    glVertex2f(820, -100);
    glEnd();
}
void Building_6()
{

    glColor3f(0.309804 + add_r, 0.490196 + add_g, 0.760784 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1280, 428);
    glVertex2f(1360, 428);
    glVertex2f(1360, 490);
    glVertex2f(1280, 490);
    glEnd();

    float x_pos = 0;
    glColor3f(0.541176 + add_r, 0.705882 + add_g, 0.831373 + add_b);
    for (int i = 0; i < 9; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(1285 + x_pos, 328);
        glVertex2f(1290 + x_pos, 328);
        glVertex2f(1290 + x_pos, 400);
        glVertex2f(1285 + x_pos, 400);
        glEnd();
        x_pos += 10;
    }

    glColor3f(0.156863 + add_r, 0.345098 + add_g, 0.490196 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1280, 328);
    glVertex2f(1375, 328);
    glVertex2f(1375, 400);
    glVertex2f(1280, 400);
    glEnd();
    float y_pos = 0;
    //glass
    for (int i = 0; i < 6; i++)
    {
        if (night == true)
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.337255 + add_r, 0.662745 + add_g, 0.909804 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(1210, 318 - y_pos);
        glVertex2f(1270, 318 - y_pos);
        glVertex2f(1270, 278 - y_pos);
        glVertex2f(1210, 278 - y_pos);
        glEnd();
        y_pos += 50;
    }
    glColor3f(0.156863 + add_r, 0.345098 + add_g, 0.490196 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1000, 328);
    glVertex2f(1280, 328);
    glVertex2f(1280, -100);
    glVertex2f(1000, -100);
    glEnd();

    float y_pos_1 = 0;
    //glass
    for (int i = 0; i < 6; i++)
    {
        if (night == true && (i == 2 || i == 4 || i == 5))
            glColor3f(0.984314, 1, 0);
        else
            glColor3f(0.490196 + add_r, 0.627451 + add_g, 0.729412 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(1285, 318 - y_pos_1);
        glVertex2f(1370, 318 - y_pos_1);
        glVertex2f(1370, 278 - y_pos_1);
        glVertex2f(1285, 278 - y_pos_1);
        glEnd();
        y_pos_1 += 50;
    }
    glColor3f(0.109804 + add_r, 0.223529 + add_g, 0.309804 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1280, 328);
    glVertex2f(1375, 328);
    glVertex2f(1375, -100);
    glVertex2f(1280, -100);
    glEnd();

    glColor3f(0.309804 + add_r, 0.490196 + add_g, 0.760784 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1000, 428);
    glVertex2f(1380, 428);
    glVertex2f(1380, -100);
    glVertex2f(1000, -100);
    glEnd();
}
void Building_7()
{

    float x_pos = 0, y_pos = 0;
    for (int y = 0; y < 16; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (night == true && ((y == 2 && (x == 3 || x == 2)) || (y == 4 && (x == 1 || x == 4)) || (y == 5 && x == 0) || (y == 1 && (x == 0 || x == 2)) || (y == 6 && x == 2) || (y == 7 && (x == 0 || x == 4))
                || (y == 8 && (x == 0 || x == 4)) || (y == 11) || y == 13 || (y == 15 && (x == 0 || x == 2))))
                glColor3f(0.984314, 1, 0);
            else
                glColor3f(0.568627 + add_r, 0.180392 + add_g, 0.121569 + add_b);
            glBegin(GL_POLYGON);
            glVertex2f(1710 + x_pos, 528 - y_pos);
            glVertex2f(1742 + x_pos, 528 - y_pos);
            glVertex2f(1742 + x_pos, 498 - y_pos);
            glVertex2f(1710 + x_pos, 498 - y_pos);
            glEnd();
            x_pos += 40;
        }
        x_pos = 0;
        y_pos += 40;
    }

    glColor3f(0.580392 + add_r, 0.545098 + add_g, 0.282353 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1700, -130);
    glVertex2f(1900, -130);
    glVertex2f(1900, 528);
    glVertex2f(1700, 528);
    glEnd();
}

void Building_8()
{
    float y_pos = 0;
    for (int x = 0; x < 10; x++)
    {
        glColor3f(0.74902 + add_r, 0.588235 + add_g, 0.427451 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(1643, 420 - y_pos);
        glVertex2f(1700, 420 - y_pos);
        glVertex2f(1700, 427 - y_pos);
        glVertex2f(1643, 427 - y_pos);
        glEnd();
        glColor3f(0.431373 + add_r, 0.364706 + add_g, 0.329412 + add_b);
        glBegin(GL_POLYGON);
        glVertex2f(1643, 420 - y_pos);
        glVertex2f(1700, 420 - y_pos);
        glVertex2f(1700, 417 - y_pos);
        glVertex2f(1643, 417 - y_pos);
        glEnd();

        y_pos += 50;
    }

    glColor3f(0.0509804 + add_r, 0, 0.219608 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1635, -80);
    glVertex2f(1645, -80);
    glVertex2f(1645, 420);
    glVertex2f(1635, 420);
    glEnd();

    glColor3f(0.568627 + add_r, 0.247059 + add_g, 0.0980392 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1600, -80);
    glVertex2f(1635, -80);
    glVertex2f(1635, 420);
    glVertex2f(1600, 420);
    glEnd();


    glColor3f(0.811765 + add_r, 0.333333 + add_g, 0.113725 + add_b);
    glBegin(GL_POLYGON);
    glVertex2f(1600, -80);
    glVertex2f(1700, -80);
    glVertex2f(1700, 420);
    glVertex2f(1600, 420);
    glEnd();

}

//////////////////////////

///////road//////
void road()
{
    glColor3f(1, 1, 1);
    float x_r_p = 0, y_r_p = 0;
    for (int i = 0; i < 6; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(0 + x_r_p, -346);
        glVertex2f(250 + x_r_p, -346);
        glVertex2f(250 + x_r_p, -352);
        glVertex2f(0 + x_r_p, -352);
        glEnd();
        x_r_p += 350;
    }
    for (int i = 0; i < 2; i++)
    {
        glBegin(GL_POLYGON);
        glVertex2f(685, -250 + y_r_p);
        glVertex2f(691, -250 + y_r_p);
        glVertex2f(691, -100 + y_r_p);
        glVertex2f(685, -100 + y_r_p);
        glEnd();
        y_r_p += 180;
    }

    glColor3f(0.258824, 0.258824, 0.258824);
    glBegin(GL_POLYGON);
    glVertex2f(0, -10);
    glVertex2f(1900, -10);
    glVertex2f(1900, -528);
    glVertex2f(0, -528);
    glEnd();
}

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1900, -528, 528);
    glMatrixMode(GL_MODELVIEW);
}

void init()
{
    glClearColor(0, 0, 0, 1.0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'd':
    {
        night = false;
        evening = false;
        sky_r = 0.3019;
        sky_g = 0.9538;
        sky_b = 1.0;
        add_r = 0;
        add_g = 0;
        add_b = 0;
        glClear(GL_COLOR_BUFFER_BIT);
        glutPostRedisplay();
        break;
    }
    case 'e':
    {
        night = false;
        evening = true;
        add_r = -0.0588235;
        add_g = -0.0588235;
        add_b = -0.0588235;
        glutPostRedisplay();
        break;
    }
    case 'n':
    {
        night = true;
        evening = false;
        sky_r = 0;
        sky_g = 0.0823529;
        sky_b = 0.278431;
        add_r = -0.117647;
        add_g = -0.117647;
        add_b = -0.117647;
        glutPostRedisplay();
        break;
    }
    }
}
void Display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ///buildings///
    Building_1();
    Building_2();
    //Building_3();
    Building_4();
    Building_5();
    Building_6();
    Building_7();
    Building_8();
    Building_5();

    ///road///
    road();

    ///Sky//
    Sky();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(900, 480);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("City View");
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display);
    glutKeyboardFunc(keyboard);
    init();
    glutIdleFunc(Display);
    glutMainLoop();
}