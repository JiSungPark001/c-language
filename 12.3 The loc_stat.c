#include <stdio.h>
void trystat(void);
int main(void)
{
	int count; //�������� : stack�� ����.
	for (count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}
	return 0;
}
void trystat(void)
{
	int fade = 1; //�������� : stack�� ����.
	static int stay = 1; //static = �ѹ� ����� ���Ŀ��� �缱�� �����ʰ� ���� ��ȭ
	//ex) fade = 1, stay = 1;  �ݺ��ؼ� �ٽ� ���ƿ������� fade = 1, stay = 2; �̷������� �귯��
	printf("fade = %d and stay = %d\n", fade++, stay++);
}