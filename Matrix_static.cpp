//상이한 크기의 행렬을 get_data() 함수로 처리하는 문제를 해결하기 위한 class 사용
//C program의 배열 처리를 class를 사용한 프로그램으로 수정
//static 사용한 버젼으로 수정
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 3
#define CCOLS 5
class Matrix {
private:
	int rows, cols;
	static int* data;
	static int free;
	int start, finish;
	int terms;
public:
	int get_data();
	int show_data();
	int sort_data();
	int addMatrix(Matrix&);
	int MultiplyMatrix(Matrix&, Matrix&);
};
/*
행렬이 여러개 일 때 하나의 function으로 처리하는 방법을 고안
*/
/*
int get_data(int(*p)[ACOLS], int n)
{

 for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
   p[i][j] = rand() % (N * N);
 return 1;
}
void show_data(int(*p)[ACOLS], int n)
{
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
   printf("%d ", p[i][j]);
  printf("\n");
 }
}
void multiply(int matrixA[][ACOLS], int ar, int matrixB[][BCOLS], int br, int matrixC[][CCOLS], int cr) {

}
*/
int Matrix::free = 0;
int* Matrix::data = new int[100];

int main(void)
{
	Matrix matrixA(AROWS, ACOLS);
	Matrix matrixA1(AROWS, ACOLS);
	Matrix matrixB(BROWS, BCOLS);
	Matrix matrixC(CROWS, CCOLS);

	srand(time(NULL));
	matrixA.get_data();
	/*
	show_data(matrixA, AROWS);
	get_data(matrixB, AROWS);
	show_data(matrixB, AROWS);

	multiply(matrixA, AROWS, matrixB, BROWS, matrixC, CROWS);
	show_data(matrixC, AROWS);
	*/
	system("pause");
	return 0;
}