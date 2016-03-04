/* game_7 */
/* make_char */
/* YusukeKato */
/* 2016.3.3 */
/* 2016.3.3 */

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

/* キャラクター作成 */
void make_char(void)
{	
	system("cls");
	
	printf("\n ==============================\n");
	printf("\n キャラクターを作成します\n");
	printf("\n ==============================\n");
	printf("\n 名前を入力してください\n");
	printf("\n 入力:");
	scanf("%s",&player.name);
	player.level=1;
	player.hp=20;
	player.attack=5;
	player.defense=3;
	player.money=500;
	player.flag=1;
	
	fp=fopen("game_7_save_date.txt","w");
	fprintf(fp,"%s %d %d %d %d %d %d\n",
			player.name,
			player.level,
			player.hp,
			player.attack,
			player.defense,
			player.money,
			player.flag );
	fclose(fp);
	
	printf("\n キャラクター作成を終了します\n");
}