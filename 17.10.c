#include<stdio.h>
//gas �޾Ƽ� mpg ���, return ���� struct
//gas struct�� ���ڷ� �޾Ƽ� 
//gas struct�ּҸ� ���ڷ� �޾Ƽ� 

struct gas cal_mpg(struct gas trip);
int cal_pmpg(struct gas* trip);

struct gas {
	float distance; //�Ÿ�
	float gals; //����
	float mpg; //���� meter per gals
};

int main(void)
{
	struct gas trip;
	printf("please enter distance, gals : \n");
	scanf("%f %f", &trip.distance, &trip.gals);

	trip = cal_mpg(trip);

	printf("Distance : %f, Gals : %f, MPG : %f\n",
		trip.distance, trip.gals, trip.mpg);

	cal_pmpg(&trip);

	printf("Distance : %f, Gals : %f, MPG : %f\n",
		trip.distance, trip.gals, trip.mpg);

	return 0;
}

struct gas cal_mpg(struct gas trip)
{
	trip.mpg = trip.distance / trip.gals;
	return trip;
}


int cal_pmpg(struct gas* trip)
{
	trip->mpg = trip->distance / trip->gals;
	return trip;
}