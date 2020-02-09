#include "function.h"
#include "head.h"

void SetBoard(char ChessBoard[][lenY])
{
	int x, y;
	//设置边界
	for (x = 0; x < lenX; x++)
	{
		ChessBoard[x][0] = 'B';
		ChessBoard[x][lenY - 1] = 'B';
	}

	for (y = 0; y < lenY; y++)
	{
		ChessBoard[0][y] = 'B';
		ChessBoard[lenX - 1][y] = 'B';
	}

	int M[15] = { 0 };
	srand((unsigned)time(NULL));
	int countM = 0;
 	for (countM; countM < 10; countM++)
	{
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		if (ChessBoard[x][y] != 'M')
			ChessBoard[x][y] = 'M';
		else countM--;

	}
	   
	//设雷 以后可以改为随机地图
	/*ChessBoard[4][2] = 'M'; ChessBoard[5][2] = 'M'; ChessBoard[6][2] = 'M';
	ChessBoard[4][3] = 'M'; ChessBoard[6][3] = 'M'; ChessBoard[2][4] = 'M';
	ChessBoard[3][4] = 'M'; ChessBoard[4][4] = 'M'; ChessBoard[5][4] = 'M';
	ChessBoard[6][4] = 'M'; ChessBoard[3][5] = 'M'; ChessBoard[6][5] = 'M';
	ChessBoard[3][6] = 'M'; ChessBoard[4][6] = 'M'; ChessBoard[5][6] = 'M';*/
	
}