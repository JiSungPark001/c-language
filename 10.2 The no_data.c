#include<stdio.h>
#define SIZE 4
int main(void)
{
	int no_data[SIZE]; //int �迭 ����
	int i;

	printf("%2s%14s\n", "i", "no_data[i]"); //no_data�迭�� �ʱ�ȭ���� �ʾҴ�.
	for (i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, no_data[i]);

	return 0;
}