// 1. ����ǥ ��� - ���� ��ǥ ��带����
//Polar Coordinate System(0), Cartesian Coordinate System(1)
//ũ�Ⱒ��, xy �Է¹���.
//x = mcos��Ÿ, y = msin��Ÿ
//m= 

// 2. ������ ��忡 ���� ��ġ �Է�

#include<stdio.h>
#include<math.h>


int main(void)
{
	double num;
	double m, angle;
	double x, y;
	double r, theta;

	while(1)
	{
		printf("PCS : 1, CCS : 2, quit : 0  --> select : ");
		if (scanf("%lf", &num) == 0)
			break;

		if (num == 1)
		{
			
			printf("ũ�⸦ �Է��Ͻÿ� : ");
			scanf("%lf", &m);
			printf("������ �Է��Ͻÿ� : ");
			scanf("%lf", &angle);

		}
		else if (num == 2)
		{
			
			printf("x���� �Է��Ͻÿ� : ");
			scanf("%lf", &x);
			printf("y���� �Է��Ͻÿ� : ");
			scanf("%lf", &y);

		}
		else
		{
			break;
		}
	}
	return 0;
}


void PCS(double m, double angle)
{


}

void CCS(double x, double y)
{
	double r = sqrt((x * x) + (y * y));
	


}
	

