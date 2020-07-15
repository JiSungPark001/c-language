#include<stdio.h>
#define SIZE 5

int copy_arr(double tgt[], double src[], int n);

int main(void)
{
	int i, j;
	double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target[SIZE];

	copy_arr(target, source, SIZE);


	printf("Target Array : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1lf", target[i]);
	}
	printf("\n");
	return 0;
}

int copy_arr(double tgt[], double src[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tgt[i] = src[i];
	}
}

//7번 - 2차원배열 복사