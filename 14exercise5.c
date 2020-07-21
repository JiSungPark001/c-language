/*
a. struct에 성과 이름을 보유할 문자열 선언 //
b. struct student 정의(이름, 3개의 소수점점수, 평균) //
c. 정의된 struct student 이름부분 초기화 //
d. scanf로 이름과 점수를 입력받는다. //
e. 각 struct에 대한 평균출력
f. 각 struct 정보 출력
g. 각 클래스의 평균값
*/
//사진참고.
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

void print_stds(struct student* std, int size) //조금 더 간단하게
{
	
	for (int i = 0; i < size; i++)
	{
		printf("\n%s %s's score is \n", std[i].handle.first, std[i].handle.last);
		printf("%.2f %.2f %.2f\n", std[i].grade[0], std[i].grade[1], std[i].grade[2]);
	}
}

void avg_student(struct student* std, int size) //조금 더 간단하게

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
void avg_class(struct student* std, int size) //조금 더 간단하게
//솔루션
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
테스트중
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