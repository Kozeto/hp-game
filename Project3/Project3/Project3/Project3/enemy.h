#ifndef enemy_H_INCLUDED
#define enemy_H_INCLUDED
#include "menu.h"
void P()
{
	if (x1 <= x + screenSizeX / 11.5){
		i++;
		if (i > 17)
		{
			i = 16;
			//flag = 0;
			//iPauseTimer(0);
		}
	}
}
void move()
{
	if (x1 <= x + screenSizeX / 11.5){ x1 = x + (screenSizeX / 11.5) - 60; }

	x1 -= 5;
	P();

}
#endif