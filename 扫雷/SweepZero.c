#include "function.h"
#include "head.h"

int SweepZero(char ChessBoard[][lenY], int x, int y)
{
	int Mnum = cal(ChessBoard, x, y);
	if (ChessBoard[x][y] == 'U'|| ChessBoard[x][y] == 'R' || ChessBoard[x][y] == 'B')//��̽���Ŀո�,����ǵĸ��ӻ����̱߽�
		return 1;
	
	if (Mnum != 0)
	{
		ChessBoard[x][y] = '0'+ Mnum;//��ʾ�߽�
		return 1;
	}
	//�߽�����

	if (Mnum == 0)//��Ϊδ̽���Ŀո񣬱��Ϊ�ѵ��
	{
		ChessBoard[x][y] = 'U';
	}

	if (SweepZero(ChessBoard, x, y - 1) && SweepZero(ChessBoard, x + 1, y) && SweepZero(ChessBoard, x, y + 1) && SweepZero(ChessBoard, x - 1, y))
		return 1;

	return 1;
}