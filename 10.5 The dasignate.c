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

�������� ���
int arr[6] = {0,0,0,0,0,212};

Ư�� element�� �ʱ�ȭ �����ϱ� ���� �ʱ�ȭ����Ʈ�� []���
int arr[6] = {[5] = 212}; // arr[5]�� 212�� �ʱ�ȭ

*/