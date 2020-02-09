#include "function.h"
#include "head.h"

int SweepZero(char ChessBoard[][lenY], int x, int y)
{
	int Mnum = cal(ChessBoard, x, y);
	if (ChessBoard[x][y] == 'U'|| ChessBoard[x][y] == 'R' || ChessBoard[x][y] == 'B')//已探索的空格,被标记的格子或棋盘边界
		return 1;
	
	if (Mnum != 0)
	{
		ChessBoard[x][y] = '0'+ Mnum;//揭示边界
		return 1;
	}
	//边界条件

	if (Mnum == 0)//若为未探索的空格，标记为已点击
	{
		ChessBoard[x][y] = 'U';
	}

	if (SweepZero(ChessBoard, x, y - 1) && SweepZero(ChessBoard, x + 1, y) && SweepZero(ChessBoard, x, y + 1) && SweepZero(ChessBoard, x - 1, y))
		return 1;

	return 1;
}