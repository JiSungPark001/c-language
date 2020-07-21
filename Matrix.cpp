#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

#define ROWS 1
#define COLS 2
#define COLX 3
#define N 2

class Matrix
{
	public:
		Matrix() {}
		int GetData();
		int	Display();
		//Matrix& Add(Matrix& b);
		Matrix& Multiply(Matrix&, Matrix&);
		
	private:
		int Term[N][N];
};

Matrix& Matrix::Multiply(Matrix&b, Matrix&c)
{
	Matrix t;
	for (int row = 0; row < N; row++)
		for (int col = 0; col < N; col++)
		{
			int sum = 0;
			for (int i = 0; i < N; i++)
				sum += Term[row][col] * b.Term[i][col];
			t.Term[row][col] = sum;
		}
	return t;
}

int Matrix::GetData()
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			Term[i][j] = rand() % 4;

	return 0;
}
/*
Matrix& Matrix::Add(Matrix& b)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			Term[i][j] += b.Term[i][j];
	return *this;
}

*/

int Matrix::Display() {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << Term[i][j] << "   ";
		cout << endl;
	}
	cout << endl;
	return 0;
}

/*
int main()
{
	srand(unsigned(time(NULL)));

	Matrix a;
	Matrix b;
	Matrix c;
	Matrix s;
	Matrix t;
	Matrix w;

	cout << "Enter fiset matrix : " << endl;
	a.GetData();
	a.Display();

	cout << "Enter S matrix : " << endl;
	s.GetData();
	s.Display();

	cout << "Enter T matrix : " << endl;
	t.GetData();
	t.Display();

	w = a.Add(s.Add(t));
	cout << "Print add matrix : " << endl;
	w.Display();

	system("pause");
	return 0;
}
*/

int main(void)
{
	Matrix a, b, c, d;
	srand((unsigned int)time(NULL));

	cout << "Enter fiset matrix : " << endl;
	a.GetData();
	a.Display();
	cout << "Enter S matrix : " << endl;
	b.GetData();
	b.Display();

	cout << "Print Multiply matrix : " << endl; //°ö¼À
	d = a.Multiply(b, c);
	d.Display();

	system("pause");
	return 0;

}