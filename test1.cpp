// �й� :
// �̸� :
// ����� ���� :
//reference�� ���� �Լ� return ��
#include <iostream>
#include <time.h>
//#include<windows.h>
using namespace std;
#define N 10
struct Matrix {
	int A[N][N];
};
void InputComplexNumber(struct Matrix&);
//&�� ���� ������ a�� �ʱ�ȭ�� ���� ���� ���¿� ���� �ִµ�
//�װ��� �����ϱ� ���ؼ� �ּҸ� �Ѱ��ֱ� �����̴�.
void DisplayComplexNumber(struct Matrix&);
struct Matrix& AddMatrix(struct Matrix&, struct Matrix&);
int i, j;

int main() {
	Matrix a, b, c, d;
	while (1)
	{
		int select;
		//testing plan: A) run 1. and 3, B) run 2 and 3
		cout << "\nSelect command 1: ��� �ʱ�ȭ, 2: Add, 3. Display, 4: Quit => ";
		cin >> select;
		switch (select) {
		case 1:
			InputComplexNumber(a);//���� �ϼ�
			//Sleep(1000);
			InputComplexNumber(b);
			//Sleep(1000);
			InputComplexNumber(c);
			//Sleep(1000);
			InputComplexNumber(d);
			//Sleep(1000);
			break;
		case 2:
			//AddMatrix(
			AddMatrix(AddMatrix(a, c), AddMatrix(b, d));
	//(a,c) = a-, (b,d) = b- �� �ǰ� addmatrix�� ���ο� ���� a-, b-�� �ȴ�.
		//addmatrix(a-(a+c),b-(b+d))���� �Ǿ
			//�ᱹ�� addmatrix(a--)(�� 4�� ���� ���� ���´�.)
//Matrix a b c d >>  a = (a+b) + (c+d);
//addMatrix(a,b) == a+b
			break;
		case 3:
			DisplayComplexNumber(a);
			printf("\n");
			DisplayComplexNumber(b);
			printf("\n");
			DisplayComplexNumber(c);
			printf("\n");
			DisplayComplexNumber(d);
			printf("\n");
			break;

		default:
			exit(0);
			break;
		}
	}
	system("pause");
	return 0;
}
// ���� b�� ����Ͽ� ��� ���Ҹ� 0���� �ʱ�ȭ�ϴ� �Լ��� �ۼ�.
// �Ѱܹ��� �迭 a��, �Ʒ��� ���õ� �ڵ�� ���� *b�� �����Ͽ� ����ؾ� ��.
void InputComplexNumber(struct Matrix& m)
//
{
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			m.A[i][j] = rand() % 8;
		//struct Matrix�� ����� m�� �������� �ҷ���
		// => m.A[i][j]
	}
	
	//�迭 ���� �ʱ�ȭ: 0<= m[][] < N*N
	 //srand()����Ͽ� random number ���� ������ �ʱ�ȭ
}
void DisplayComplexNumber(struct Matrix& m)
//m�� a�� ������ �����ϱ� ������ &�� ����ؾ��Ѵ�.
{
	for (i = 0; i < N; i++)//��
	{
		for (j = 0; j < N; j++)//��
		{
			printf("%2d  ", m.A[i][j]); //
		}
		printf("\n");
	}
	
	//cout << m.A[i][j] = rand();

}
struct Matrix& AddMatrix(struct Matrix& a, struct Matrix& b)
{
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a.A[i][j] = a.A[i][j] + b.A[i][j]; //���� �������� ���
		//b.A[i][j] = a.A[i][j] + b.A[i][j];
		}
		
	}
	printf("\n");
	//��� a�� return
	return a;
//return b;
}