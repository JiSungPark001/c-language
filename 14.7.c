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
double sum(struct funds *moolah);//*�߰�

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
	//�������̱⶧���� �ּҸ� ��� ���� sum(stan)�� & �߰�
	printf("Main() :: stan.bankfund = %f\n", stan.bankfund);//
	return 0;
}
//struct funds sum
double sum(struct funds *moolah)//������ �߰�
{
	moolah->bankfund += 1000.00;
	// 1000�� ���������� �����Լ��� �ִ� ������ �ݿ��� ���� �ʴ´�.
	// ����ü �����ͷ� �Ѱ��ָ� �ݿ��� �����ϴ�.
	//  . => ->�� ����
	return(moolah->bankfund + moolah->savefund);
}