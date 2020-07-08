#include<stdio.h>
int data[2] = { 100, 200 };
int moredata[2] = { 300, 400 };
int main(void)
{
	int* p1, * p2, * p3;

	p1 = p2 = data;
	p3 = moredata;
	//p1,p2 = 100, p3 = 300
	printf("   *p1 = %d,   *p2 = %d,   *p3 = %d\n",
		*p1, *p2, *p3);
	printf("*p1++ = %d, *++p2  =%d, (*p3)++ = %d\n",
		*p1++, *++p2, (*p3)++);
	printf("  *p1 = %d,   *p2 = %d,   *p3 = %d\n",
		*p1, *p2, *p3);
	printf("data: %d - %d", *data, *(data + 1), *data++);//식이 수정할 수 있는 l-value가 아니다0
	//*data++이 안되는 이유 : 데이터의 값을 바꿀수는 없다.
	//데이터라는 식별자의 값 자체를 바꾸려는 시도이기 때문에 안됨
	return 0;
}

//연산자 우선순위