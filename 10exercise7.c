#include<stdio.h>
#define ROWS 3
#define COLS 4
#define SIZE 5

int copy_arr(double tgt[], double src[], int n);
int copy_2Darr(double tgt[][COLS], double src[][COLS], int n);

int main(void)
{
	int i, j;
	double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target[SIZE];
	double junk[ROWS][COLS] =
	{

		{2.1, 4.1, 6.1, 8.1},
		{3.2, 5.2, 7.2, 9.2},
		{12.3, 10.3, 8.3, 6.3}

	};
	double junk2[ROWS][COLS];

	copy_arr(target, source, SIZE);

	printf("Target Array : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1lf", target[i]);
	}

	copy_2Darr(junk2, junk, ROWS); //????????????????????????
	
	printf("\njunk Array \n");
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%3.1lf  ", junk2[i][j]);
		printf("\n");
	}
}

int copy_arr(double tgt[], double src[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tgt[i] = src[i];
	}
	return 0;
}

int copy_2Darr(double tgt[][COLS], double src[][COLS], int n) 
//2차원 배열에 접근하는
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		copy_arr(tgt[i], src[i], COLS);

		//for (j = 0; j < COLS; j++)
			//tgt[i][j] = src[i][j];
	}
	return 0;
}