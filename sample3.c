//오름차순, 내림차순, 선택정렬 / 버블정렬


/*
//1. 내림차순
#include<stdio.h>
#define num 10
int main(void)
{
    int number[num] = { 6, 30, 17, 28, 3, 46, 10, 13, 34, 20 };
    int temp;
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (number[i] < number[j])
            {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("[%d]", number[i]);
    }
}

//2. 샘플 제공 - 선택정렬
#include<stdio.h>
#include<limits.h>
int main(void)
{
    int temp;
    int array[10] = { 6, 30, 17, 28, 3, 46, 10, 13, 34, 20 };
    for (int i = 0; i < 10; i++)
    {
        int minidx = 1;
        int min = INT_MAX;
        for (int j = i; j < 10; j++)
        {
            if (array[j] < min)
            {
                minidx = j;
                min = array[j];

            }
        }
        temp = array[i];
        array[i] = min;
        array[minidx] = temp;
    }
    return 0;
}
*/
//3. 샘플 제공 - 버블정렬
#include<stdio.h>
#include<limits.h>
int main(void)
{
    int temp;
    int array[10] = { 6, 30, 17, 28, 3, 46, 10, 13, 34, 20 };
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < (9 - i); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return 0;
}