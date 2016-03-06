/* game_7 */
/* func.h */
/* YusukeKato */
/* 2016.3.2 */
/* 2016.3.6 */

struct person{
	char name[256];
	int level;
	int hp;
	int attack;
	int defense;
	int exp;
	int money;
	int flag;
};

int func(void);
int make_char(void);
int story_1(void);
int story_2(void);
int story_3(void);
int battle_1(void);
int shop_1(void);
int menu(void);
int action_1(void);
int shooting_1(void);
int help(void);
int main_1(void);
int flag(void);
int enterkey(void);
int save_write(void);
int save_read(void);
int level_up(void);