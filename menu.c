/* game_7 */
/* menu.c */
/* YusukeKato */
/* 2016.3.3 */
/* 2016.3.4 */

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

/* ���j���[�i�ŏ��j*/
void menu(void)
{
	int fg;
	
	system("cls");
	
	printf("\n ==============================\n");
	printf( "\t 1.�͂��߂���\n"
			"\t 2.�Â�����\n"
			"\t 3.�w���v\n");
	printf(" ==============================\n");
	printf("\n ����:");
	scanf("%d",&fg);
	switch(fg)
	{
		/* �͂��߂��� */
		case 1:
		make_char();
		break;
		/* �Â����� */
		case 2:
		break;
		/* �w���v */
		case 3:
		help();
		break;
		/* ���̑� */
		default:
		printf("\n �Q�[�����I�����܂�\n");
		exit(0);
		break;
	}
}