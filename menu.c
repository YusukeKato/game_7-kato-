/* game_7 */
/* menu.c */
/* YusukeKato */
/* 2016.3.3 */
/* 2016.3.4 */

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

/* メニュー（最初）*/
void menu(void)
{
	int fg;
	
	system("cls");
	
	printf("\n ==============================\n");
	printf( "\t 1.はじめから\n"
			"\t 2.つづきから\n"
			"\t 3.ヘルプ\n");
	printf(" ==============================\n");
	printf("\n 入力:");
	scanf("%d",&fg);
	switch(fg)
	{
		/* はじめから */
		case 1:
		make_char();
		break;
		/* つづきから */
		case 2:
		break;
		/* ヘルプ */
		case 3:
		help();
		break;
		/* その他 */
		default:
		printf("\n ゲームを終了します\n");
		exit(0);
		break;
	}
}