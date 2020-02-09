#include "function.h"
#include "head.h"

void printchess(char ChessBoard[][lenY], int x, int y,int mode)
{
	if (mode == normal)
	{
		if (ChessBoard[x][y] == 'X' || (ChessBoard[x][y] >= '1' && ChessBoard[x][y] <= '8'))
			printf("  %c", ChessBoard[x][y]);
		else if (ChessBoard[x][y] == 'N' || ChessBoard[x][y] == 'R')
			printf("  F");
		else if (ChessBoard[x][y] == 'U')
			printf("   ");
		else
			printf("  *");
	}

	else if (mode == win)
	{
		if ((ChessBoard[x][y] >= '1' && ChessBoard[x][y] <= '8'))
			printf("  %c", ChessBoard[x][y]);
		else if (ChessBoard[x][y] == 'M' || ChessBoard[x][y] == 'N')
			printf("  M");
		else if (ChessBoard[x][y] == 'U')
			printf("   ");
	}

	else if (mode == lose)
	{
		if (ChessBoard[x][y] == 'X' || ChessBoard[x][y] == 'M' || (ChessBoard[x][y] >= '1' && ChessBoard[x][y] <= '8'))
			printf("  %c", ChessBoard[x][y]);
		else if (ChessBoard[x][y] == 'N')
			printf("  m");
		else if (ChessBoard[x][y] == 'R')
			printf("  x");
		else if (ChessBoard[x][y] == 'U')
			printf("   ");
		else
			printf("  *");
	}
}