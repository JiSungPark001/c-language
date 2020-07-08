#include "diceroll.h"
#include<stdio.h>
#include<stdlib.h>

int roll_count = 0; // 전역변수 사용
static int rollem(int sides) //static 사용 - 12.11 안에서만 호출할 수 있는 함수
{
	int roll;

	roll = rand() % sides + 1; //sides의 나머지 연산 % , +1을 통해 => 1~6까지 랜덤한 숫자를 가져온다.
	++roll_count;

	return roll;

}


int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("Need at least 2 sides. \n");
		return -2;
	}

	if (dice < 1)
	{
		printf("Need at least 1 dice.\n");
		return -1;
	}

	for (d = 0; d < dice; d++)
		total += rollem(sides);

	return total;
}