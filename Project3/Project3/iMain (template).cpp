#pragma warning (disable : 4996)
#include "iGraphics.h"
#include "bitmap_loader.h"
#include "menu.h"
#include "enemy.h"
#include "highscore.h"



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
		else if (flag == 4 && mx >= 0 && mx <= 216 && my >= (screenSizeY / 36) && my <= ((screenSizeY / 36) + 24))
		{
			flag = 1;

		}
		else if (flag == 1 && mx >= ((screenSizeX / 4) * 2) && mx <= (((screenSizeX / 4) * 2) + (screenSizeX / 5)) && my >= ((screenSizeY / 4) * 1.4) && my <= (((screenSizeY / 4) * 1.4) + screenSizeY / 25))
		{
			exit(0);
		}
		else if (flag == 6 && mx >= 615 && mx <= 615 + 300 && my >= 440 && my <= 440 + 50)
		{
			mode = 1;
		}
		else if (flag == 2 && mx >= 850 && mx <= 980  && my >= 200 && my <= 250)
		{
			flag = 3;
		}
		else if (flag == 2 && mx >= 535 && mx <= 665 && my >= 200 && my <= 250)
		{
			flag = 1;
		}
		if (flag == 3 && mx >= 670 && mx <= 800 && my >= 220 && my <= 270)
		{
			flag = 2;
		}
		if (flag == 7 && mx >= 640 && mx <= 740 && my >= 630 && my <= 730)
		{
			flag = 1;
		}
		else if (flag == 8 && mx >= 0 && mx <= 216 && my >= (screenSizeY / 36) && my <= ((screenSizeY / 36) + 24))
		{
			flag = 1;

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

	if (key == 'n'){
		magic = 1;
		standing = 0;

		magic_ball_x = x + 10;
		magic_ball_y = y + 70;
	}
	if (flag!=6 && key == 'r')
	{
		flag = 1;
		int x = 0, y = 0;
		int x1 = 1170, x2 = 0;
	}
	if (flag == 0 && key == 13)

	{
		//PlaySound("sound\\.wav", NULL, SND_LOOP | SND_ASYNC);
		flag = 1;
	}
	
	//if (flag == 6 && key == 13)
	//{
	//	flag = 7;
	//PlaySound("sound\\.wav", NULL, SND_LOOP | SND_ASYNC);
	//}

	int i;

	if (flag == 6 && mode == 1)
	{
		ag = 1;
		if (key == 13)
		{
			flag = 7;
			strcpy(str2, str);
			mode = 0;
			store();		//calls the store() for storing latest name & score
			for (i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
		}
		if (key == 8){			//for backspace

			printf("%d", key);
			if (len>0)
				str[--len] = ' ';

		}
		else
		{
			str[len] = key;		//for taking name input from the user
			len++;

		}
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
	if (flag==7&&key == GLUT_KEY_RIGHT)
	{
		state = 0;
		x+=4;
	}
	if (flag == 7 && key == GLUT_KEY_LEFT)
	{
		state = 1;
		x -= 4;
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here.
	iSetTimer(100, move);
	//if(flag==0)PlaySound("sound\\.wav", NULL, SND_LOOP | SND_ASYNC);
	iInitialize(screenSizeX,screenSizeY, "HARRY POTTER");
	imageLoadFunc();
	
	iStart();
	return 0;
}
