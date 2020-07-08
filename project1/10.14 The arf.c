#include<stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 }; //n = 5, SIZE 값

	printf("The original dip array : \n");
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array() : \n");
	show_array(dip, SIZE);

	return 0;
}

void show_array(const double ar[], int n) //배열을 넘겨받음 - ar[]포인터를 상수로 바꾼다.
{//상수형 포인터에 대한
	int i;

	for (i = 0; i < n; i++)
		printf("%8.3f", ar[i]);
	putchar('\n');
}
//show array 안에서는 dip[]값을 바꾸는 것이 불가능하다.  -  const에 의해.
void mult_array(double ar[], int n, double mult) // ar dip[]의 배열의 값을 호출
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] *= mult;
}