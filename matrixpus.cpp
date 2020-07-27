//상이한 크기의 행렬을 get_data() 함수로 처리하는 문제를 해결하기 위한 class 사용
//C program의 배열 처리를 class를 사용한 프로그램으로 수정
//static 사용한 버젼으로 수정
#include <iostream>
#include "time.h"
using namespace std;
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 3
#define CCOLS 5
class Matrix {
private:
	int rows, cols;
	int* data;

public:
	Matrix(int a, int b)
	{
		rows = a;
		cols = b;
		data = (int*)new int[a * b]; //new 공간할당 -> 주소를 넘겨준다
		//type casting = int pointer;

	} //
	int get_data();
	int show_data();
//	int sort_data();
	int addMatrix(Matrix&);
//	int MultiplyMatrix(Matrix&, Matrix&);
	
};
int Matrix::get_data() //
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			data[i * cols + j] = rand() % 8; // line 49
	return 1;
}

int Matrix::show_data()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << data[i * cols + j]<<"  "; 
			//[i * cols + j]
			//포인터 배열. 데이터의 첫번째를 출력
		}
		cout << endl;
	}
	return 1;
}


int Matrix::addMatrix(Matrix& m)
{
	for (int i = 0; i < rows * cols; i++)
		data[i] += m.data[i];

return 1;
}


/*
행렬이 여러개 일 때 하나의 function으로 처리하는 방법을 고안
*/

int main(void)
{
	Matrix matrixA(AROWS, ACOLS);
	Matrix matrixA1(AROWS, ACOLS);
	Matrix matrixB(BROWS, BCOLS);
	Matrix matrixC(CROWS, CCOLS);

	srand(unsigned int (time(NULL)));
	cout << "first matrix" << endl;
	matrixA.get_data();
	matrixA.show_data();
	cout << "second matrix" << endl;
	matrixA1.get_data();
	matrixA1.show_data();
	matrixA.addMatrix(matrixA1);
	cout << "total matrix" << endl;
	matrixA.show_data();
	/*
	multiply(matrixA, AROWS, matrixB, BROWS, matrixC, CROWS);
	show_data(matrixC, AROWS);
	*/
	system("pause");
	return 0;
}


