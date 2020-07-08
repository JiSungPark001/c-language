#include<stdio.h>
#define SIZE 4
int main(void)
{
	int no_data[SIZE]; //int 배열 선언
	int i;

	printf("%2s%14s\n", "i", "no_data[i]"); //no_data배열이 초기화되지 않았다.
	for (i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, no_data[i]);

	return 0;
}