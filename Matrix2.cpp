#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

#define A 2
#define B 3
#define X 3
#define Y 4

class Matrix
{
public:
	Matrix(int row, int col);
	int GetData();
	int Display();
	Matrix& Multiply(Matrix&, Matrix&);
	Matrix& Add(Matrix&);

private:
	//1차원 배열로 저장
	int* data;
	int rows, cols;

};

//matrix b(2, 3)
//c = a.add(b);
/*
Matrix& Matrix::Multiply(Matrix& a, Matrix& b)
{
	
}
*/


int main(void)
{

	Matrix a(2, 3);
	Matrix b(3, 4);
	//Matrix c, d;

	srand((unsigned int)time(NULL));

	cout << "Enter fiset matrix : " << endl;
	a.GetData();
	a.Display();
	cout << "Enter S matrix : " << endl;
	b.GetData();
	b.Display();

//	cout << "Print Multiply matrix : " << endl;
//	d = a.Multiply(b, c);
//	d.Display();

	system("pause");
	return 0;

}