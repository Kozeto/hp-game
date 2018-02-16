#ifndef highscore_H_INCLUDED
#define highscore_H_INCLUDED
#include "menu.h"
# include <stdlib.h>

int mode, len;
char str[20];
char s[10];
int ag = 0;
int see = 0;


int Score ;

char *str1[20], str2[20];


struct Highscore{
	char name[20];
	int scores;
} v[4];


void store(){
	FILE *fp;



	fp = fopen("info.txt", "r");

	int j = 0;
	while (fscanf(fp, "%s\t%d\n", v[j].name, &v[j].scores) != EOF)
	{
		j++;
	}
	/*
	for(j=0;j<3;j++){
	printf("%s\t%d\n",v[j].name,v[j].scores);
	}
	*/

	fclose(fp);


	int *pointer;
	int LS;

	LS = v[0].scores;            //LS stores the lowest score of the file
	pointer = &v[0].scores;       //this pointer variable points to the location of lowest score
	*str1 = v[0].name;            //str1 holds the name of lowest scorerer

	for (j = 1; j<3; j++)
	{
		if (v[j].scores<LS)
		{
			LS = v[j].scores;
			pointer = &v[j].scores;
			*str1 = v[j].name;

		}
	}
	//printf("%s\t%d\n",*str1,LS);
	if (ag == 1){
		if (Score>LS){

			*pointer = Score;
			strcpy(*str1, str2);
			ag = 0;
		}
		// printf("%s\t%d\n\n",*str1,*pointer);        //this str1 holds the new high scorer & score
	}
	// else  printf("%s\t%d\n\n",*str1,LS);                //this str1 holds the new high scorer & LS holds the score


	//printf("%d\n",v[0].scores);

	//Descending order
	Highscore temp[2];
	for (int i = 0; i<3; i++){
		for (j = 0; j<3 - 1; j++)
		{

			if (v[j].scores<v[j + 1].scores)
			{
				temp[0].scores = v[j].scores;
				v[j].scores = v[j + 1].scores;
				v[j + 1].scores = temp[0].scores;

				strcpy(temp[0].name, v[j].name);
				strcpy(v[j].name, v[j + 1].name);
				strcpy(v[j + 1].name, temp[0].name);
			}

		}
	}
	fp = fopen("info.txt", "w");

	int x = 0;
	for (j = 0; j<3; j++)
	{
		//iText(525, 450 - x, v[j].name, GLUT_BITMAP_TIMES_ROMAN_24);
		//itoa(v[j].scores, s, 10);
		//iText(905, 450 - x, s, GLUT_BITMAP_TIMES_ROMAN_24);
		fprintf(fp, "%s\t%d\n", v[j].name, v[j].scores);
		printf("%s\t%d\n", v[j].name, v[j].scores);
		//x = x + 50;

	}
	if (see == 1){
		for (j = 0; j < 3; j++)
		{

			iText(525, 450 - x, v[j].name, GLUT_BITMAP_TIMES_ROMAN_24);
			itoa(v[j].scores, s, 10);
			iText(905, 450 - x, s, GLUT_BITMAP_TIMES_ROMAN_24);


			x = x + 50;
		}see = 0;
	}

	fclose(fp);

}

#endif