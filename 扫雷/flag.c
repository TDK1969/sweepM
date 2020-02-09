#include "function.h"
#include "head.h"

bool flag(char ChessBoard[][lenY] , int x, int y)
{
	if (ChessBoard[x][y] == 'N')
		ChessBoard[x][y] = 'M';
	else if (ChessBoard[x][y] == 'R')
		ChessBoard[x][y] = 'E';
	else if (ChessBoard[x][y] == 'M')
		ChessBoard[x][y] = 'N';
	else if (ChessBoard[x][y] == 'E')
		ChessBoard[x][y] = 'R';

	return safe;
}