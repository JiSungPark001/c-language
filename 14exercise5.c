/*
a. struct�� ���� �̸��� ������ ���ڿ� ���� //
b. struct student ����(�̸�, 3���� �Ҽ�������, ���) //
c. ���ǵ� struct student �̸��κ� �ʱ�ȭ //
d. scanf�� �̸��� ������ �Է¹޴´�. //
e. �� struct�� ���� ������
f. �� struct ���� ���
g. �� Ŭ������ ��հ�
*/
//��������.
#include<stdio.h>
#include<stdlib.h>

#define CSIZE 4

struct name
{
	char first[10];
	char last[10];
};

struct student
{
	struct name handle;
	float grade[3];
	float avg;
};

void print_stds(struct student* std, int size);
void avg_student(struct student* std, int size);
void avg_class(struct student* std, int size);
void all_avg(struct student* std, int size);

int main(void)
{
	int i;
	struct student stds[CSIZE] =
	{
		{{"Body", "Jones"}, {0,0,0}, 0},
		{{"Hello", "World"}, {0,0,0}, 0},
		{{"Good", "Job"}, {0,0,0}, 0},
		{{"Abcd", "Efg"}, {0,0,0}, 0},
	};

	for (i = 0; i < CSIZE; i++)
	{
		printf("Input %s %s's scores : ", stds[i].handle.first, stds[i].handle.last);
	scanf("%f %f %f", &stds[i].grade[0], &stds[i].grade[1], &stds[i].grade[2]);
	//scanf("%f %f %f", &stds[i].grade[i], &stds[i].grade[i], &stds[i].grade[i]);
	}

	avg_student(stds, CSIZE);
	print_stds(stds, CSIZE);
	avg_class(stds, CSIZE);
	all_avg(stds, CSIZE);

	return 0;
}

void print_stds(struct student* std, int size) //���� �� �����ϰ�
{
	
	for (int i = 0; i < size; i++)
	{
		printf("\n%s %s's score is \n", std[i].handle.first, std[i].handle.last);
		printf("%.2f %.2f %.2f\n", std[i].grade[0], std[i].grade[1], std[i].grade[2]);
	}
}

void avg_student(struct student* std, int size) //���� �� �����ϰ�

{
	for(int i = 0; i < size; i++)
	{
		std[i].avg = (std[i].grade[0] + std[i].grade[1] + std[i].grade[2]) / 3;
	}
}
/*
{
	for (int i = 0; i < size; i++)
	{
		float sum = 0;
		float avg_score;
		for (int j = 0; j < 3; j++)
		{
			sum += std[i].grade[j];
			avg_score = sum / 4;
		}
		(std + 1)->avg = avg_score;
		printf("%.1f\n", avg_score);
	}
}
*/
void avg_class(struct student* std, int size) //���� �� �����ϰ�
//�ַ��
{
	float avg = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < size; j++)
			avg += std[j].grade[i];
		printf("\nThe average of %d class is %f\n", i, avg/(float)size);
	}
}

void all_avg(struct student* std, int size)
{
	float all_avg = 0;
	for (int i = 0; i < size; i++)
	{
		all_avg += std[i].avg;
	}
	all_avg = all_avg / 4;
	printf("\n All_avg is %f\n", all_avg);
}


/*
�׽�Ʈ��
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += std[i].avg;
	}
	float class_avg = sum / 4;
	printf("Class avg is %.1f\n", class_avg);
}
*/