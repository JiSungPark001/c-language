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
	printf("data: %d - %d", *data, *(data + 1), *data++);//���� ������ �� �ִ� l-value�� �ƴϴ�0
	//*data++�� �ȵǴ� ���� : �������� ���� �ٲܼ��� ����.
	//�����Ͷ�� �ĺ����� �� ��ü�� �ٲٷ��� �õ��̱� ������ �ȵ�
	return 0;
}

//������ �켱����