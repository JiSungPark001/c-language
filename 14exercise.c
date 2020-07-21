//3.month 구조체 - 월(문자열), 3글자(약어로), 몇일이 있는지, 
//4. 12개 배열
//5. 1년에 몇일이나 있는지

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
	//result = totaldays(monthnum); //totaldays 완성

	//intst your code - 5입력 = 1~5월까지 날짜수를 다 더한다.
	
	for (int i = 0; i < monthnum; i++)
	{
		result += arr[i].days;
	}

	printf("Total Days are %d\n", result);

	return 0;
	//구조체 12개 배열;
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