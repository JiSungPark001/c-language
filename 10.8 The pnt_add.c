#include<stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE]; //
	short* pti;
	short index;
	double bills[SIZE]; //
	double* ptf;
	pti = dates; //dates ������ ù��° �ּҸ� pti�� ����

	printf("Before pti++ : pti = %p\n", pti);
	pti++;
	printf("After pti++ : pti = %p\n", pti);
	printf("dates = %p, &dates[0] = %p\n", dates, &dates[0]);
	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		printf("pointers + %d : %10p %10p\n", index, pti + index, ptf + index);

	return 0;

}

//�������� ���������� �����ͺ����� ����Ű�� �������� ũ�⸸ŭ �����Ѵ�.

//short���� ����Ű�� �����ͺ����� �����ϴ� ���� ���� 2����Ʈ�� �����Ѵ�.
//double���� ����Ű�� �����ͺ����� 8����Ʈ�� �����Ѵ�.