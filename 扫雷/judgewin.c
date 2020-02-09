#include "function.h"
#include "head.h"

bool judgewin(char ChessBoard[][lenY])
{
	int x = 0, y = 0;
	for (y = 1; y <= lenY - 2; y++)
	{
		for (x = 1; x <= lenX - 2; x++)
		{
			if (ChessBoard[x][y] == 'E' || ChessBoard[x][y] == 'R')
				return normal;
		}
	}

	return win;
}