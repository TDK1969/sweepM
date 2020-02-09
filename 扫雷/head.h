#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<time.h>


#pragma warning(disable:4996)

#define bool int
#define safe 1
#define boom 0
#define error 2


#define normal 0
#define win 1
#define lose 2

#define lenX 9
#define lenY 9

/*
棋盘：
地雷：M（标记为N，炸雷为X）
非雷：E（点击后显示数字，标记为R）
	空格：V（点击后为U）
边界区域：B
*/

//清空屏幕：system("cls");