//2���� �迭�� ���� �Է¹޾Ƽ� ���

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	int** arr;
	//�� �Է�
	scanf("%d", &num);

	//�迭 ����
	arr = (int**)malloc(sizeof(int*) * num);
	for (int i = 0; i < num; i++)
		arr[i] = (int*)malloc(sizeof(int) * num);

	//������ ����
	int cnt = 1;
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			arr[i][j] = cnt++;
	// 1.cnt++ == (i*num*j+1)
	// 3.cnt++ = (j+1) * (i+1)
	//���
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}

	//�޸� ����
	for (int i = 0; i < num; i++)
		free(arr[i]);
	free(arr);
	//malloc �� ¦���� free
	//�Ҵ� ���� �޸𸮴� �׻� ������ �ʿ�

}