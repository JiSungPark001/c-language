#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gradeTout(int grade[100][3]);
void gradeBout(int grade[100][3]);
int main()
{
	int grade[100][3];
	srand((unsigned int)time(NULL)); // ���� �ð� �����ͼ� �ʱ�ȭ �ϴ� �Լ�
	//1. �迭 grade�� ������ �Է�
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grade[i][j] = rand() % 51 + 50;//
		}
		printf("%d, %d, %d\n", grade[i][0], grade[i][1], grade[i][2]);
	}


	//2. grade�� �ִ� �����͸� text���� �Է� = grade.txt
	gradeTout(grade); //2.
	gradeBout(grade); //3.

}
void gradeTout(int grade[100][3])
{
	FILE* fp = fopen("grade.txt", "wt");
	if (!fp)//write���� if�� �����ϸ�
	{
		printf("Error to create File! \n");
		return;
	}
	for (int i = 0; i < 100; i++)
	{
		fprintf(fp, "%d : %d, %d, %d\n", i, grade[i][0], grade[i][1], grade[i][2]);
	}


	fclose(fp);
}


	//3. ���̳ʸ� ���� �Է�
void gradeBout(int grade[100][3])
{

	FILE* fp = fopen("grade.dat", "wb");
	if (!fp)//write���� if�� �����ϸ�
	{
		printf("Error to create Binary File! \n");
		return;
	}
	for (int i = 0; i < 100; i++)
	{
		//fprintf(fp, "%d : %d, %d, %d\n", i, grade[i][0], grade[i][1], grade[i][2]);
		fwrite(grade[i], sizeof(int), 3, fp);
			//fread
	}


	fclose(fp);
}



