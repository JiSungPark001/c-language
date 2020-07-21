#include<stdio.h>
#define FUNDLEN 50

struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
//struct funds sum
double sum(struct funds *moolah);//*추가

int main(void)
{
	struct funds stan =
	{
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	//stan = sum(stan);
	printf("Stan has a total of $%.2f. \n", sum(&stan)); //
	//포인터이기때문에 주소를 얻기 위해 sum(stan)에 & 추가
	printf("Main() :: stan.bankfund = %f\n", stan.bankfund);//
	return 0;
}
//struct funds sum
double sum(struct funds *moolah)//포인터 추가
{
	moolah->bankfund += 1000.00;
	// 1000을 더했음에도 메인함수에 있는 값에는 반영이 되지 않는다.
	// 구조체 포인터로 넘겨주면 반영이 가능하다.
	//  . => ->로 변경
	return(moolah->bankfund + moolah->savefund);
}