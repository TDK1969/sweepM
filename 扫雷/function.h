#pragma once
#include"head.h"

bool judge(char ChessBoard[][lenY], int x, int y);

int cal(char ChessBoard[][lenY], int x, int y);

int SweepZero(char ChessBoard[][lenY],int x,int y);

bool flag(char ChessBoard[][lenY], int x, int y);

void printboard(char ChessBoard[][lenY],int mode);

void printchess(char ChessBoard[][lenY], int x, int y,int mode);

void SetBoard(char ChessBoard[][lenY]);

bool judgewin(char ChessBoard[][lenY]);