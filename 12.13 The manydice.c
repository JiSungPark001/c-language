#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"diceroll.h"

int main(void)
{
	int dice, roll;
	int sides;
	int status; //문제에 빠져있음.

	srand((unsigned int)time(0)); //srand ?? = s(seed)값을 random(아무렇게나 바꾼다), 
	printf("Enter the number of sides per dice, 0 to stop.\n");
	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("How many dice? \n");
		if ((status = scanf("%d", &dice)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				printf("You should have entered an integer.");
				printf("Let's begin again. \n");
				while (getchar() != '\n')
					continue;
				printf("How many sides? Enter 0 to stop. \n");
					continue;
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice. \n",
			roll, dice, sides);
		printf("How many sides? Enter 0 to stop. \n");
	}
	printf("The rollem() function was called %d times. \n",
		roll_count);

	printf("HOOD FORTUNE TO YOU! \n");

	return 0;
}