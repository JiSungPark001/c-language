#include <stdio.h>
#define SIZE 4
int main(void)
{
	int value1 = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;
	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;
	// 정상적으로 할당받지 않은 부분이기때문에 이후에 문제가 생길 수 있음
	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("address of arr[-1]: %p\n", &arr[-1]);
	printf("address of arr[4]: %p\n", &arr[4]);
	printf("address of value1: %p\n", &value1);
	printf("address of value2: %p\n", &value2);
	return 0;
}