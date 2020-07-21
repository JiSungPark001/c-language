// 학번 :
// 이름 :
// 깃허브 계정 :
//reference에 의한 함수 return 값
#include <iostream>
#include <time.h>
//#include<windows.h>
using namespace std;
#define N 10
struct Matrix {
	int A[N][N];
};
void InputComplexNumber(struct Matrix&);
//&를 쓰는 이유는 a에 초기화가 되지 않은 상태에 값이 있는데
//그것을 방지하기 위해서 주소를 넘겨주기 위함이다.
void DisplayComplexNumber(struct Matrix&);
struct Matrix& AddMatrix(struct Matrix&, struct Matrix&);
int i, j;

int main() {
	Matrix a, b, c, d;
	while (1)
	{
		int select;
		//testing plan: A) run 1. and 3, B) run 2 and 3
		cout << "\nSelect command 1: 행렬 초기화, 2: Add, 3. Display, 4: Quit => ";
		cin >> select;
		switch (select) {
		case 1:
			InputComplexNumber(a);//먼저 완성
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
	//(a,c) = a-, (b,d) = b- 가 되고 addmatrix의 새로운 인자 a-, b-가 된다.
		//addmatrix(a-(a+c),b-(b+d))식이 되어서
			//결국은 addmatrix(a--)(총 4번 더한 값이 나온다.)
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
// 변수 b를 사용하여 모든 원소를 0으로 초기화하는 함수를 작성.
// 넘겨받은 배열 a는, 아래에 제시된 코드와 같이 *b에 연결하여 사용해야 함.
void InputComplexNumber(struct Matrix& m)
//
{
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			m.A[i][j] = rand() % 8;
		//struct Matrix에 선언된 m의 변수들을 불러옴
		// => m.A[i][j]
	}
	
	//배열 값의 초기화: 0<= m[][] < N*N
	 //srand()사용하여 random number 정수 값으로 초기화
}
void DisplayComplexNumber(struct Matrix& m)
//m은 a의 공간을 공유하기 때문에 &를 사용해야한다.
{
	for (i = 0; i < N; i++)//열
	{
		for (j = 0; j < N; j++)//행
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
			a.A[i][j] = a.A[i][j] + b.A[i][j]; //더한 랜덤값을 계산
		//b.A[i][j] = a.A[i][j] + b.A[i][j];
		}
		
	}
	printf("\n");
	//행렬 a를 return
	return a;
//return b;
}