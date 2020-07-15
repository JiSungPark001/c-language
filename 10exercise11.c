#include<stdio.h>
#include<stdlib.h>

#define ROWS 3
#define COLS 5

int print_2Darr(double arr[][COLS]);
int double_2Darr(double arr[][COLS]);


int main(void)
{
	int i, j;

	double junk[ROWS][COLS] =
	{
		{2.1, 4.1, 6.1, 8.1, 10.1},
		{3.2, 5.2, 7.2, 9.2, 11.2},
		{2.3, 3.3, 8.3, 6.3, 4.3}
	};
	printf("Before\n");
	print_2Darr(junk);

	double_2Darr(junk); // ������ ���, �����ϴ� �κ�. ��� x

	printf("After\n");
	print_2Darr(junk);

	return 0;
}
//2�����迭�� for�� ���, ��� ����
int print_2Darr(double arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%2.1lf   ", arr[i][j]); //double���� lf
		}
		printf("\n");
	}
	return 0;
}


int double_2Darr(double arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] *= 2; //2�� ����
		}
		printf("\n");
	}
	return 0;
}