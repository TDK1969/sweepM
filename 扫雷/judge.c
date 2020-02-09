#include "head.h"
#include "function.h"

bool judge(char ChessBoard[][lenY], int x, int y)
{
	if (ChessBoard[x][y] == 'N' || ChessBoard[x][y] == 'R')
	{
		return error;
	}

	if (ChessBoard[x][y] == 'M')
	{
		ChessBoard[x][y] = 'X';
		return boom;
	}

	else
	{
		int Mnum = 0;
		
		Mnum = cal(ChessBoard, x, y);

		

		if (Mnum != 0)
		{
			ChessBoard[x][y] = '0' + Mnum;
		}


		if (Mnum == 0)
		{
			SweepZero(ChessBoard, x, y);
		}
	}

	return safe;
}

