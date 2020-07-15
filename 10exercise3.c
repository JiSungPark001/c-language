#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int largest(int ar[], int n);
int largest_idx(int* start, int* end);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39 ,4 ,16, 19, 26, 31, 20 };
	int answer;
	answer = largest(marbles, SIZE); //�迭�� �̸�, ũ��
	printf("The largest number of marbles is %d. \n", answer);

	answer = largest_idx(marbles, marbles + SIZE); //�迭�� �����ּ�, ������ �ּ�
	printf("The largest number of marbles is %d. \n", marbles[answer]);
	//marbles[answer]�� �ϸ� 39�� ���´�. 
	//answer�� �ϸ� 3�� ���´�.
	system("pause");
	return 0;
}

int largest(int ar[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++) //�迭�� ��ȸ�� �Ϲ������� for�� ���
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



//2. 1�����迭 ����