// pe12-2b.c
// compile with pe12-2a.c
#include <stdio.h> // ���� ���͸��� ã��
#include "pe12-2a.h" //���� ���� �������� ��������� ���� ã�� ""
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
		//0�̰ų� 1�� �ƴϸ� line42 ���
	}
	printf("Done.\n");
	return 0;
}
//���ָ�, �ַ����� ���� ���ù޾Ƽ� ����ض�.

/*
Here is some sample output :


Enter 0 for metric mode, 1 for US mode : 0 - 0����
Enter distance traveled in kilometers : 600
Enter fuel consumed in liters : 78.8  - 78.8/6 ���
Fuel consumption is 13.13 liters per 100 km. - ��갪 ���

Enter 0 for metric mode, 1 for US mode(-1 to quit) : 1
Enter distance traveled in miles : 434 - ����
Enter fuel consumed in gallons : 12.7 - ����
Fuel consumption is 34.2 gallon per miles. - ����/���� ��갪.

Enter 0 for metric mode, 1 for US mode(-1 to quit) : 3
Invalid mode specified.Mode 1(US)used. 

Enter distance traveled in miles : 388
Enter fuel consumed in gallons : 15.3
Fuel consumption is 25.4 miles per gallon.

Enter 0 for metric mode, 1 for US mode(-1 to quit) : -1
Done.
*/