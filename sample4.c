//2차원 배열로 수를 입력받아서 출력

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	int** arr;
	//값 입력
	scanf("%d", &num);

	//배열 생성
	arr = (int**)malloc(sizeof(int*) * num);
	for (int i = 0; i < num; i++)
		arr[i] = (int*)malloc(sizeof(int) * num);

	//데이터 설정
	int cnt = 1;
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			arr[i][j] = cnt++;
	// 1.cnt++ == (i*num*j+1)
	// 3.cnt++ = (j+1) * (i+1)
	//출력
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}

	//메모리 해제
	for (int i = 0; i < num; i++)
		free(arr[i]);
	free(arr);
	//malloc 의 짝으로 free
	//할당 받은 메모리는 항상 해제가 필요

}