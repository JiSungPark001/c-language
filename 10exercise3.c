#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int largest(int ar[], int n);
int largest_idx(int* start, int* end);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39 ,4 ,16, 19, 26, 31, 20 };
	int answer;
	answer = largest(marbles, SIZE); //배열의 이름, 크기
	printf("The largest number of marbles is %d. \n", answer);

	answer = largest_idx(marbles, marbles + SIZE); //배열의 시작주소, 마지막 주소
	printf("The largest number of marbles is %d. \n", marbles[answer]);
	//marbles[answer]를 하면 39가 나온다. 
	//answer를 하면 3이 나온다.
	system("pause");
	return 0;
}

int largest(int ar[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++) //배열의 순회는 일반적으로 for문 사용
	{
		if (ar[i] > max)
		{
			max = ar[i];
		}
	}
	return max;
}

int largest_idx(int* start, int* end)
{
	
	//int total = 0;
	int max = 0;
	int now_index = 0;
	int max_index = 0;

	while (start < end)
	{
		if (*start > max)
		{
			max = *start;
			max_index = now_index;
			
		}

		
		start++;
		now_index++;
	}
	return max_index;

}



//2. 1차원배열 복사