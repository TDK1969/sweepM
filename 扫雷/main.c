#include "function.h"
#include "head.h"

int main(void)
{
	char ChessBoard[lenX][lenY];  
	int county;
	for (county = 0; county < lenX; county++)
	{
		memset(ChessBoard[county], 'E', lenX * sizeof(char));
	}
	
	SetBoard(ChessBoard);
	printboard(ChessBoard,normal);
	
	int choice,result=0;
	int x, y; 
	printf("\n\t\t\t\t\t请输入：1.点击。2.立flag。\n\t\t\t\t\t");
	while (scanf("%d", &choice) == 1)
	{
		if (choice == 1)
		{
			printf("\t\t\t\t\t请输入坐标：（x,y坐标中间空一格）\n\t\t\t\t\t");
			scanf("%d%d", &x, &y);

			result = judge(ChessBoard, x, y);

			if (result == boom)
			{
				printf("\n");
				printboard(ChessBoard, lose);
				printf("\n\t\t\t\t\t（M表示地雷，X表示炸雷，m表示被正确标记的地雷，x表示被错误标记的格子）\n");
				printf("\t\t\t\t\t瞬间爆炸！\n");
				return 0;
			}
		}

		if (choice == 2)
		{
			printf("\t\t\t\t\t请输入坐标：（x,y坐标中间空一格）\n\t\t\t\t\t");
			scanf("%d%d", &x, &y);

			result = flag(ChessBoard, x, y);
		}
		
		system("cls");

		if (judgewin(ChessBoard))
			break;

		printboard(ChessBoard,normal);
		if (result == error)
		{
			printf("\n\t\t\t\t\t坐标错误！（点击了已标记的坐标，或者重复标记坐标）\n");
		}
		printf("\n\t\t\t\t\t请输入：1.点击。2.立flag。\n\t\t\t\t\t");
	}

	printboard(ChessBoard, win);
	printf("\n\t\t\t\t\t（M表示地雷）\n\t\t\t\t\t恭喜通关！\n");

	return 0;
}