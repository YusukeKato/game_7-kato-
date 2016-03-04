# makefile for main
# target : main.exe
all : main.exe

main.exe:   main.obj func.obj make_char.obj story_1.obj story_2.obj story_3.obj battle_1.obj shop_1.obj menu.obj action_1.obj shooting_1.obj help.obj inn.obj main_1.obj flag.obj enterkey.obj save_write.obj save_read.obj
		bcc32 -emain.exe main.obj func.obj make_char.obj story_1.obj story_2.obj story_3.obj battle_1.obj shop_1.obj menu.obj action_1.obj shooting_1.obj help.obj inn.obj main_1.obj flag.obj enterkey.obj save_write.obj save_read.obj

main.obj: main.c func.h
		bcc32 -c main.c

func.obj: func.c
		bcc32 -c func.c
		
make_char.obj: make_char.c
		bcc32 -c make_char.c
		
story_1.obj: story_1.c
		bcc32 -c story_1.c
		
story_2.obj: story_2.c
		bcc32 -c story_2.c
		
story_3.obj: story_3.c
		bcc32 -c story_3.c
		
battle_1.obj: battle_1.c
		bcc32 -c battle_1.c
		
shop_1.obj: shop_1.c
		bcc32 -c shop_1.c
		
menu.obj: menu.c
		bcc32 -c menu.c
		
action_1.obj: action_1.c
		bcc32 -c action_1.c
		
shooting_1.obj: shooting_1.c
		bcc32 -c shooting_1.c
		
help.obj: help.c
		bcc32 -c help.c
		
inn.obj: inn.c
		bcc32 -c inn.c
		
main_1.obj: main_1.c
		bcc32 -c main_1.c
		
flag.obj: flag.c
		bcc32 -c flag.c
		
enterkey.obj: enterkey.c
		bcc32 -c enterkey.c
		
save_write.obj: save_write.c
		bcc32 -c save_write.c
		
save_read.obj: save_read.c
		bcc32 -c save_read.c