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

	double_2Darr(junk); // 연산을 담당, 적용하는 부분. 출력 x

	printf("After\n");
	print_2Darr(junk);

	return 0;
}
//2차원배열은 for문 사용, 양식 참고
int print_2Darr(double arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%2.1lf   ", arr[i][j]); //double형은 lf
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
			arr[i][j] *= 2; //2배 적용
		}
		printf("\n");
	}
	return 0;
}