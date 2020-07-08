#include<stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE]; //
	short* pti;
	short index;
	double bills[SIZE]; //
	double* ptf;
	pti = dates; //dates 변수의 첫번째 주소를 pti에 저장

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

//포인터의 증감연산은 포인터변수가 가르키는 데이터의 크기만큼 증감한다.

//short형이 가르키는 포인터변수는 증가하는 것을 보면 2바이트씩 증가한다.
//double형이 가르키는 포인터변수는 8바이트씩 증가한다.