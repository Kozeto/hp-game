#include "iGraphics.h"
#include "bitmap_loader.h"
#include "menu.h"
#include "enemy.h"

//void move()
//{
	//x1 -= 5;
	//x2 += 6;
	//y += 5;

	//if (x1+110 <= 0)x1 = 1200;
	//if (x2 + 70 >= 1280)x2 = 0;
	//if (y >= 0 && y <= 40)y += 4;
	//if (y <= 40 && y <= 40)y += 4;
//}

/*
 function iDraw() is called again and again by the system.

 */

void iDraw()
{
	//place your drawing codes here
	iClear();
	imageDrawFunc();
	
}

/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if (flag==1 && mx >= ((screenSizeX / 4) * 2) && mx <= (((screenSizeX / 4) * 2) + (screenSizeX / 5)) && my >= ((screenSizeY / 4) * 2.6) && my <= (((screenSizeY / 4) * 2.6) + screenSizeY / 25))
		{
			flag = 6;
		}
		else if (flag == 1 && mx >= ((screenSizeX / 4) * 2) && mx <= (((screenSizeX / 4) * 2) + (screenSizeX / 5)) && my >= ((screenSizeY / 4) * 2.3) && my <= (((screenSizeY / 4) * 2.3) + screenSizeY / 25))
		{
			flag = 2;
		}
		else if (flag == 1 && mx >= ((screenSizeX / 4) * 2) && mx <= (((screenSizeX / 4) * 2) + (screenSizeX / 5)) && my >= ((screenSizeY / 4) * 2) && my <= (((screenSizeY / 4) * 2) + screenSizeY / 25))
		{
			flag = 4;
		}
		else if (flag == 1 && mx >= ((screenSizeX / 4) * 2) && mx <= (((screenSizeX / 4) * 2) + (screenSizeX / 5)) && my >= ((screenSizeY / 4) * 1.7) && my <= (((screenSizeY / 4) * 1.7) + screenSizeY / 25))
		{
			flag = 5;
		}
		else if (flag == 5 && mx >= 0 && mx <= 216 && my >= (screenSizeY / 36) && my <= ((screenSizeY / 36)+24))
		{
			flag = 1;
		}
		else if (mx >= ((screenSizeX / 4) * 2) && mx <= (((screenSizeX / 4) * 2) + (screenSizeX / 5)) && my >= ((screenSizeY / 4) * 1.4) && my <= (((screenSizeY / 4) * 1.4) + screenSizeY / 25))
		{
			exit(0);
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	if (key == 'r')
	{
		flag = 1;
	}
	if (key == 13)
	{
		flag = 1;
	}
	if (flag == 2 && key == 'n')
	{
		flag = 3;
	}
	if (flag == 2 && key == 'p')
	{
		flag = 1;
	}
	if (flag == 3 && key == 'p')
	{
		flag = 2;
	}


	//place your codes for other keys here
}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	if (key == GLUT_KEY_RIGHT)
	{
		x+=4;
	}
	if (key == GLUT_KEY_LEFT)
	{
		x -= 4;
	}
	//place your codes for other keys here
}

int main()
{
	iSetTimer(100, move);
	
	//place your own initialization codes here.
	
	iInitialize(screenSizeX,screenSizeY, "HARRY POTTER");
	imageLoadFunc();
	iStart();
	return 0;
}
