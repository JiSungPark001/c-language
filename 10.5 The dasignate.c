#include<stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31, 28,[4] = 31, 30, 31,[1] = 29 };
	int i;

	for (i = 0; i < MONTHS; i++)
		printf("%2d %d\n", i + 1, days[i]);

	return 0;
}


/*

전통적인 방법
int arr[6] = {0,0,0,0,0,212};

특정 element를 초기화 지정하기 위해 초기화리스트에 []사용
int arr[6] = {[5] = 212}; // arr[5]를 212로 초기화

*/