#include<stdio.h>
int main(void)
{
	int a, b = 1;
	printf("������ �Է��Ͻÿ� : \n");
	scanf("%d", &a);
	printf("\n");

	for (a; b <= 20; b++)
	{
		printf("%d * %d = %d", a, b, a * b);
		printf("\n");


	}

}










/*int main(void)
{
	int x, y;

		for (x = 1; x <= 9; x+=3)
		{
			for (y = 1; y <= 9; y++)
				printf("%d * %d = %2d\n", x, y, x * y);
				printf("%d * %d = %2d\n", (x+1), y, (x+1) * y);
				printf("%d * %d = %2d\n", (x+2), y, (x+2) * y);
			printf("\n");
		}
		printf("\n");
}
*/
//��������

/*	int i, j;

	for (int i = 1; i < 9; i+=3)/// i = i + 3
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d", i, j, i * j);
			printf("%3d * %d = %2d", (i + 1), j, (i + 1) * j);
			printf("%3d * %d = %2d", (i + 2), j, (i + 2) * j);
			printf("\n");
		}
		printf("\n");
	}
}

//�ǵ��
*////���� �⺻���� ���º��� ���, ���� ���� �߱��ϸ� �ϼ�

/*
int main(void)
{
	int i, j, k;

	for (int i = 1; i < 9; i += 3)/// i = i + 3
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = 0; k <= 2; k++)
			{
				printf("%d * %d = %2d", (i + k), j, (i + k) * j);
				if (k != 2)
					printf("  ");
			}
			printf("\n");
		}
		printf("\n");
	}
}
*///for�� k �� �ϳ� �� �߰��� ����