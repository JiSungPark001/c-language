#include<stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//배열을 초기화 - 월 별 날수로
	int index;

	for (index = 0; index < MONTHS; index++) //index가 12보다 작은동안 계속 1씩 더하며 반복
		printf("Month %d has %2d days. \n", index + 1, days[index]);

	return 0;
}