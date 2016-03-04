/* game_7 */
/* flag.c */
/* YusukeKato */
/* 2016.3.4 */
/* 2016.3.4 */

#include <stdio.h>
#include "func.h"

void flag(void)
{
	FILE *fp;
	struct person player;
	
	for(;;)
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
	
		switch(player.flag)
		{
			case 1:
			story_1();
			break;
			case 2:
			story_2();
			break;
			case 3:
			story_3();
			break;
			case 4:
			printf("\n\n èIóπÇµÇ‹Ç∑\n\n");
			default:
			break;
		}
	}
}