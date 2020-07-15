// 1. 극좌표 모드 - 직교 좌표 모드를선택
//Polar Coordinate System(0), Cartesian Coordinate System(1)
//크기각도, xy 입력받음.
//x = mcos세타, y = msin세타
//m= 

// 2. 선택한 모드에 따른 수치 입력

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
			
			printf("크기를 입력하시오 : ");
			scanf("%lf", &m);
			printf("각도를 입력하시오 : ");
			scanf("%lf", &angle);

		}
		else if (num == 2)
		{
			
			printf("x값을 입력하시오 : ");
			scanf("%lf", &x);
			printf("y값을 입력하시오 : ");
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
	

