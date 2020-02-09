#include "function.h"
#include "head.h"

int cal(char ChessBoard[][lenY], int x, int y)
{
	int Mnum = 0;

	if (ChessBoard[x-1][y-1] == 'M'|| ChessBoard[x - 1][y - 1] == 'N')
		Mnum++;
	if (ChessBoard[x][y-1] == 'M'||ChessBoard[x ][y - 1] == 'N')
		Mnum++;
	if (ChessBoard[x+1][y-1] == 'M' || ChessBoard[x+1][y - 1] == 'N')
		Mnum++;
	if (ChessBoard[x-1][y] == 'M' || ChessBoard[x-1][y] == 'N')
		Mnum++;
	if (ChessBoard[x+1][y] == 'M' || ChessBoard[x+1][y] == 'N')
		Mnum++;
	if (ChessBoard[x-1][y+1] == 'M' || ChessBoard[x-1][y + 1] == 'N')
		Mnum++;
	if (ChessBoard[x][y+1] == 'M' || ChessBoard[x][y + 1] == 'N')
		Mnum++;
	if (ChessBoard[x+1][y+1] == 'M' || ChessBoard[x+1][y + 1] == 'N')
		Mnum++;

	return Mnum;
}