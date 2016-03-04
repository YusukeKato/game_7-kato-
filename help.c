/* game_7 */
/* help.c */
/* YusukeKato */
/* 2016.3.4 */
/* 2016.3.4 */

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void help(void)
{
	fp=fopen("game_7_save_date.txt","r");
	fscanf(fp,"%s %d %d %d %d %d %d\n",
			player.name,
			&player.level,
			&player.hp,
			&player.attack,
			&player.defense,
			&player.money,
			&player.flag );
	
	system("cls");
	
	printf("\n");		
	printf( " 名前: %s\n"
			" レベル: %d\n"
			" 体力: %d\n"
			" 攻撃: %d\n"
			" 防御: %d\n"
			" お金: %d\n"
			" フラグ: %d\n",
			player.name,
			player.level,
			player.hp,
			player.attack,
			player.defense,
			player.money,
			player.flag );
	fclose(fp);
}