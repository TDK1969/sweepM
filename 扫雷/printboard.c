#include "function.h"
#include "head.h"

void printboard(char ChessBoard[][lenY],int mode)
{
	int lenx = lenX - 2;
	int leny = lenY - 2;

	int x = 1, y = 1;
	for (y; y <= leny; y++)
	{
		if (y == 1)
		{
			printf("\t\t\t\t\t");
			printf(" ");
			for (x; x <= lenx; x++)
			{
				printf("  %d", x);
			}
			printf("(x)\n\n");
		}
		printf("\t\t\t\t\t");
		printf("%d", y);
		for (x = 1; x <= lenx; x++)
		{
				printchess(ChessBoard, x, y,mode);
		}
		printf("\n\n");
	}

	printf("\t\t\t\t\t(y)");
}