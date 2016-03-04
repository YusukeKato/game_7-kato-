/* game_7 */
/* story_2 */
/* YusukeKato */
/* 2016.3.4 */
/* 2016.3.4 */

#include <stdio.h>
#include <stdlib.h>
#include "func.h"

void story_2(void)
{
	FILE *fp;
	struct person player;
	
	fp=fopen("game_7_save_date.txt","r");
	fscanf(fp,"%s %d %d %d %d %d %d\n",
			player.name,
			&player.level,
			&player.hp,
			&player.attack,
			&player.defense,
			&player.money,
			&player.flag );
	fclose(fp);
	
	player.flag = 3;
	
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
}