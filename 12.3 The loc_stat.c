#include <stdio.h>
void trystat(void);
int main(void)
{
	int count; //지역번수 : stack에 들어간다.
	for (count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}
	return 0;
}
void trystat(void)
{
	int fade = 1; //지역번수 : stack에 들어간다.
	static int stay = 1; //static = 한번 실행된 이후에는 재선언 하지않고 값만 변화
	//ex) fade = 1, stay = 1;  반복해서 다시 돌아왔을때는 fade = 1, stay = 2; 이런식으로 흘러감
	printf("fade = %d and stay = %d\n", fade++, stay++);
}