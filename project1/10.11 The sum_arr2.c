#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int sump(int* start, int* end);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;
	answer = sump(marbles, marbles + SIZE);
	printf("marble의 전체 겟수는 %ld.\n", answer);
	system("pause");
	return 0;
}

int sump(int* start, int* end)
{
	int total = 0;
	while (start < end)
	{
		total += *start;
		printf("*start = %d\n", *start);
		start++;
	}
	return total;
}