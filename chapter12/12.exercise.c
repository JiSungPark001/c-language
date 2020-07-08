// pe12-2b.c
// compile with pe12-2a.c
#include <stdio.h> // 포함 디렉터리만 찾음
#include "pe12-2a.h" //현재 나의 폴더에서 헤더파일을 먼저 찾음 ""
int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);

	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &mode);
		//0이거나 1이 아니면 line42 출력
	}
	printf("Done.\n");
	return 0;
}
//가솔린, 겔런으로 할지 선택받아서 계산해라.

/*
Here is some sample output :


Enter 0 for metric mode, 1 for US mode : 0 - 0선택
Enter distance traveled in kilometers : 600
Enter fuel consumed in liters : 78.8  - 78.8/6 계산
Fuel consumption is 13.13 liters per 100 km. - 계산값 출력

Enter 0 for metric mode, 1 for US mode(-1 to quit) : 1
Enter distance traveled in miles : 434 - 마일
Enter fuel consumed in gallons : 12.7 - 갤런
Fuel consumption is 34.2 gallon per miles. - 마일/갤런 계산값.

Enter 0 for metric mode, 1 for US mode(-1 to quit) : 3
Invalid mode specified.Mode 1(US)used. 

Enter distance traveled in miles : 388
Enter fuel consumed in gallons : 15.3
Fuel consumption is 25.4 miles per gallon.

Enter 0 for metric mode, 1 for US mode(-1 to quit) : -1
Done.
*/