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
	printf("\n\t\t\t\t\t�����룺1.�����2.��flag��\n\t\t\t\t\t");
	while (scanf("%d", &choice) == 1)
	{
		if (choice == 1)
		{
			printf("\t\t\t\t\t���������꣺��x,y�����м��һ��\n\t\t\t\t\t");
			scanf("%d%d", &x, &y);

			result = judge(ChessBoard, x, y);

			if (result == boom)
			{
				printf("\n");
				printboard(ChessBoard, lose);
				printf("\n\t\t\t\t\t��M��ʾ���ף�X��ʾը�ף�m��ʾ����ȷ��ǵĵ��ף�x��ʾ�������ǵĸ��ӣ�\n");
				printf("\t\t\t\t\t˲�䱬ը��\n");
				return 0;
			}
		}

		if (choice == 2)
		{
			printf("\t\t\t\t\t���������꣺��x,y�����м��һ��\n\t\t\t\t\t");
			scanf("%d%d", &x, &y);

			result = flag(ChessBoard, x, y);
		}
		
		system("cls");

		if (judgewin(ChessBoard))
			break;

		printboard(ChessBoard,normal);
		if (result == error)
		{
			printf("\n\t\t\t\t\t������󣡣�������ѱ�ǵ����꣬�����ظ�������꣩\n");
		}
		printf("\n\t\t\t\t\t�����룺1.�����2.��flag��\n\t\t\t\t\t");
	}

	printboard(ChessBoard, win);
	printf("\n\t\t\t\t\t��M��ʾ���ף�\n\t\t\t\t\t��ϲͨ�أ�\n");

	return 0;
}