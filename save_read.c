/* game_7 */
/* save_read */
/* YusukeKato */
/* 2016.3.4 */
/* 2016.3.4 */

#include <stdio.h>
#include "func.h"

void save_read(void)
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
	fclose(fp);
}