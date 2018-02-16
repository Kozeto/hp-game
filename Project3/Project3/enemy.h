#ifndef enemy_H_INCLUDED
#define enemy_H_INCLUDED
#include "menu.h"
#include "highscore.h"
int p = 0;

void Magic(){
	
	
	index++;
	if (index >= 28)
	{
		standing = 1;
		magic = 0;
		index = 23;


	}
}
void a()
{
	if (magic==1 && (magic_ball_x + screenSizeX / 11.5 >= x1 && magic_ball_x + screenSizeX / 11.5 <= x1 + 110))
	{
		p++;
		if (p >= 5){ Score += 10; x1 = 1370; }
	}
	else if (magic == 1 && (magic_ball_x + screenSizeX / 11.5 >= x2 && magic_ball_x + screenSizeX / 11.5 <= x2 + 110))
		 {
		p++;
		if (p >= 5){ Score += 10; x2 = 1370; }
	}
	else if (magic == 1 && (magic_ball_x + screenSizeX / 11.5 >= x3 && magic_ball_x + screenSizeX / 11.5 <= x3 + 110))
		  {
		p++;
		if (p >= 5){ Score += 10; x3 = 1370; }
	}
	
	}




void P()
{
	if (x1 >= x && x1 <= (x + screenSizeX / 11.5)-50){
		i++;
		if (harryLife != 0)
		{
			harryLife--;
		}
		if (i > 17)
		{
			i = 16;
		}
	}
	else
		i = 16;
	if (x2 >= x && x2 <= (x + screenSizeX / 11.5) - 50){
		j++;
		if (harryLife != 0)
		{
			harryLife--;
		}
		if (j > 17)
		{
			j = 16;
		}
	}
	else
		j = 16;
	if (x3 >= x && x3 <= (x + screenSizeX / 11.5) - 50){
		k++;
		if (harryLife != 0)
		{
			harryLife--;
		}
		if (k > 17)
		{
			k = 16;
		}
	}
	else
		k = 16;

}
void move()
{
	if (x1 > (x + screenSizeX / 11.5) - 50 || x1<x)
	{
		x1 -= 5;
	}
	if (x2 >(x + screenSizeX / 11.5) - 50 || x2<x)
	{
		x2 -= 5;
	}
	if (x3 >(x + screenSizeX / 11.5) - 50 || x3<x)
	{
		x3 -= 5;
	}
	P();
	Magic();
	a();
	
}

#endif