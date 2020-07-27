//������ ũ���� ����� get_data() �Լ��� ó���ϴ� ������ �ذ��ϱ� ���� class ���
//C program�� �迭 ó���� class�� ����� ���α׷����� ����
//static ����� �������� ����
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
		data = (int*)new int[a * b]; //new �����Ҵ� -> �ּҸ� �Ѱ��ش�
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
			//������ �迭. �������� ù��°�� ���
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
����� ������ �� �� �ϳ��� function���� ó���ϴ� ����� ���
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


