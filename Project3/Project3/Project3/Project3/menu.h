#ifndef menu_H_INCLUDED
#define menu_H_INCLUDED
int i = 16;
int images[25];
int x = 0, y = 0;
int x1 = 1170, x2 = 0;
int screenSizeX = 1280, screenSizeY = 720;
int flag = 0;

void imageLoadFunc()
{
	images[0] = iLoadImage("pic\\title_screen.png");//assigns the specified image of the specified location in the array
	images[1] = iLoadImage("pic\\menu_screen.png");//assigns the specified image of the specified location in the array
	images[2] = iLoadImage("pic\\main_menu.png");//assigns the specified image of the specified location in the array
	images[3] = iLoadImage("pic\\start.png");//assigns the specified image of the specified location in the array
	images[4] = iLoadImage("pic\\instructions.png");//assigns the specified image of the specified location in the array
	images[5] = iLoadImage("pic\\high_score.png");//assigns the specified image of the specified location in the array
	images[6] = iLoadImage("pic\\credit.png");//assigns the specified image of the specified location in the array
	images[7] = iLoadImage("pic\\exit.png");//assigns the specified image of the specified location in the array
	images[8] = iLoadImage("pic\\instructions1.jpg");//assigns the specified image of the specified location in the array
	images[9] = iLoadImage("pic\\instructions2.jpg");//assigns the specified image of the specified location in the array
	images[10] = iLoadImage("pic\\high_score1.jpg");//assigns the specified image of the specified location in the array
	images[11] = iLoadImage("pic\\score.png");//assigns the specified image of the specified location in the array
	images[12] = iLoadImage("pic\\name.png");//assigns the specified image of the specified location in the array
	images[13] = iLoadImage("pic\\credit2.jpg");//assigns the specified image of the specified location in the array
	images[14] = iLoadImage("pic\\level1.png");//assigns the specified image of the specified location in the array
	images[15] = iLoadImage("pic\\harry.png");//assigns the specified image of the specified location in the array
	images[16] = iLoadImage("pic\\creep1.png");//assigns the specified image of the specified location in the array
	images[17] = iLoadImage("pic\\creep2.png");//assigns the specified image of the specified location in the array
	images[18] = iLoadImage("pic\\score1.png");//assigns the specified image of the specified location in the array
	images[19] = iLoadImage("pic\\health.png");//assigns the specified image of the specified location in the array
}

	void titleScreen()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[0]);
	}
	//shows the menu screen by showing the specified image in the specified dimension
	void menuScreen()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[1]);
	}
	//shows the main menu title by showing the specified image in the specified dimension
	void mainMenu()
	{
		iShowImage((screenSizeX / 4) * 2, (screenSizeY / 4) * 3, screenSizeX / 5, screenSizeY/18, images[2]);
	}
	//shows the start title by showing the specified image in the specified dimension
	void start()
	{
		iShowImage((screenSizeX / 4) * 2, (screenSizeY / 4) * 2.6, screenSizeX / 5, screenSizeY / 25, images[3]);
	}
	//shows the instructions title by showing the specified image in the specified dimension
	void instructions()
	{
		iShowImage((screenSizeX / 4) * 2, (screenSizeY / 4) * 2.3, screenSizeX / 5, screenSizeY / 25, images[4]);
	}
	//shows the high score title by showing the specified image in the specified dimension
	void highScore()
	{
		iShowImage((screenSizeX / 4) * 2, (screenSizeY / 4) * 2, screenSizeX / 5, screenSizeY / 25, images[5]);
	}
	//shows the credit title by showing the specified image in the specified dimension
	void credit()
	{
		iShowImage((screenSizeX / 4) * 2, (screenSizeY / 4) * 1.7, screenSizeX / 5, screenSizeY / 25, images[6]);
	}
	//shows the exit title by showing the specified image in the specified dimension
	void Exit()
	{
		iShowImage((screenSizeX / 4) * 2, (screenSizeY / 4) * 1.4, screenSizeX / 5, screenSizeY / 25, images[7]);
	}
	//shows the first page of instructions by showing the specified image in the specified dimension
	void instructions1()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[8]);
	}
	//shows the second page of instructions by showing the specified image in the specified dimension
	void instructions2()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[9]);
	}
	//shows the high score title in high score menu page by showing the specified image in the specified dimension
	void high_score1()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[10]);
	}
	//shows the score title in high score menu page by showing the specified image in the specified dimension
	void score()
	{
		iShowImage((screenSizeX / 8)*5.5, (screenSizeY/8)*5.5, screenSizeX / 13, screenSizeY / 29, images[11]);
	}
	//shows the name title in high score menu page by showing the specified image in the specified dimension
	void name()
	{
		iShowImage((screenSizeX / 8)*3.2, (screenSizeY / 8)*5.5, screenSizeX / 13, screenSizeY / 29, images[12]);
	}
	//shows the credits in credit menu page by showing the specified image in the specified dimension
	void credit2()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[13]);
	}
	//shows the gameplay page by showing the specified image in the specified dimension
	void start1()
	{
		iShowImage(0, 0, screenSizeX, screenSizeY, images[14]);
		iShowImage(x, y, screenSizeX / 11.5, screenSizeY/3.5, images[15]);
		iShowImage(x1, 0, 110, 200, images[i]);
		//iShowImage(x2, 0, 70, 100, images[17]);
		iShowImage(-40, 625, 200, 150, images[19]);
		iSetColor(0, 255, 0);
		iFilledRectangle(10, 660, 180, 20);

		iShowImage(1100, 600, 230, 200, images[18]);
		if (flag == 8)y = 0;

	}
	void imageDrawFunc()
	{
		if (flag == 0)
			titleScreen();//calls the titleScreen function
		if (flag == 1)
		{
			menuScreen();//calls the menuScreen function
			mainMenu();//calls the mainMenu function
			start();//calls the start function
			instructions();//calls the instructions function
			highScore();//calls the highScore
			credit();//calls the credit function
			Exit();//calls the Exit function
		}
		if (flag == 2)
		{
			instructions1();//calls the instructions1 function
		}
		if (flag == 3)
		{
			instructions2();//calls instructions2 function
		}
		if (flag == 4)
		{
			high_score1();//calls the high_score1 function
			score();//calls the score function
			name();//calls the name function
			iSetColor(0, 0, 0);//sets the color of the text
			iText(525, 450, "Rakin", GLUT_BITMAP_TIMES_ROMAN_24);//calls the iText function and shows the specified text in the specified coordinate in the specified font
			iText(525, 400, "Arnab", GLUT_BITMAP_TIMES_ROMAN_24);//calls the iText function and shows the specified text in the specified coordinate in the specified font
			iText(525, 350, "Saeid", GLUT_BITMAP_TIMES_ROMAN_24);//calls the iText function and shows the specified text in the specified coordinate in the specified font
			iText(905, 450, "100", GLUT_BITMAP_TIMES_ROMAN_24);//calls the iText function and shows the specified text in the specified coordinate in the specified font
			iText(905, 400, "100", GLUT_BITMAP_TIMES_ROMAN_24);//calls the iText function and shows the specified text in the specified coordinate in the specified font
			iText(905, 350, "100", GLUT_BITMAP_TIMES_ROMAN_24);//calls the iText function and shows the specified text in the specified coordinate in the specified font
		}
		if (flag == 5)
		{
			credit2();//calls the credit2 function
			iSetColor(255, 255, 255);
			iText(0, screenSizeY/36, "MAIN MENU", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if (flag == 6)
		{
			start1();//calls start1 function
		}
	}

#endif 