#include<stdio.h>
//gas 받아서 mpg 계산, return 으로 struct
//gas struct를 인자로 받아서 
//gas struct주소를 인자로 받아서 

struct gas cal_mpg(struct gas trip);
int cal_pmpg(struct gas* trip);

struct gas {
	float distance; //거리
	float gals; //갤런
	float mpg; //연비 meter per gals
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