//3.month ����ü - ��(���ڿ�), 3����(����), ������ �ִ���, 
//4. 12�� �迭
//5. 1�⿡ �����̳� �ִ���

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//	{Jan, Feb, Mar, Api, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
//14-2 ---------------------
struct month
{
	char name[10]; //name of month
	char abb[4]; // three letter months
	int days; // days in the month
	int num; // month number
};
//14-3 ---------------------

int main(void)
{
	struct month arr[12] =
	{
		{"January", "JAN", 31, 1},
		{"Feburary", "FEB", 28, 2},
		{"Marth", "MAR", 31, 3},
		{"Apill", "API", 30, 4},
		{"May", "MAY", 31, 5},
		{"June", "JUN", 30, 6},
		{"July", "JUL", 31, 7},
		{"August", "AUG", 31, 8},
		{"September", "SEP", 30, 9},
		{"October", "OCT", 31, 10},
		{"Nobember", "NOB", 30, 11},
		{"December", "DEC", 31, 12},
	};

	int monthnum;
	int result = 0; //
	
	printf("please enter month number : \n");
	scanf("%d", &monthnum);
	//result = totaldays(monthnum); //totaldays �ϼ�

	//intst your code - 5�Է� = 1~5������ ��¥���� �� ���Ѵ�.
	
	for (int i = 0; i < monthnum; i++)
	{
		result += arr[i].days;
	}

	printf("Total Days are %d\n", result);

	return 0;
	//����ü 12�� �迭;
}
//14-5 ---------------------


/*
int totaldays(int monthnum)
{
	for (int i = 0; i < monthnum; i++)
	{
		result += arr[i].days;
	}
	return 0;
}
*/