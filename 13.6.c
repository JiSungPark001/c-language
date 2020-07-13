/*
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
int main()
{
	double numbers[ARSIZE]; //number 1000개 - 8천byte = 8k
	double value;
	const char* file = "numbers.dat"; //파일이름을 변경할 일이 없기 때문에 const
	int i;
	long pos;
	FILE* iofile; //파일포인터 선언
	// create a set of double values
	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);
	// attempt to open file
	if ((iofile = fopen(file, "wb")) == NULL) //binary모드로 write 하겠다.
	{
		fprintf(stderr, "Could not open %s for output.\n", file);
		exit(EXIT_FAILURE);
	}
	// write array in binary format to file
	fwrite(numbers, sizeof(double), ARSIZE, iofile); //8바이트 1000개
	fclose(iofile);
	if ((iofile = fopen(file, "rb")) == NULL)//binary모드로 read 하겠다.
	{
		fprintf(stderr,
			"Could not open %s for random access.\n", file);
		exit(EXIT_FAILURE);
	}
	// read selected items from file
	printf("Enter an index in the range 0-%d.\n", ARSIZE - 1);
	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long)i * sizeof(double); // calculate offset
		fseek(iofile, pos, SEEK_SET); 
		// go there - 해당하는 위치로 이동(파일포인터, 위치, 적용값(파일의 제일 처음set에서 pos만큼 이동해서 대기
		fread(&value, sizeof(double), 1, iofile); 
			printf("The value there is %f.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	// finish up
	fclose(iofile);
	puts("Bye!");
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
int main()
{
	int numbers[ARSIZE]; //int 로 변경
	int value; //int 로 변경
	const char* file = "numbers.1"; //파일이름을 변경할 일이 없기 때문에 const
	int i;
	long pos;
	FILE* iofile; //파일포인터 선언
	// create a set of double values
	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 100 * i + 1 / (i + 1);
	// attempt to open file
	if ((iofile = fopen(file, "wb")) == NULL) //binary모드로 write 하겠다.
	{
		fprintf(stderr, "Could not open %s for output.\n", file);
		exit(EXIT_FAILURE);
	}
	// write array in binary format to file
	fwrite(numbers, sizeof(int), ARSIZE, iofile); //8바이트 1000개 //int 로 변경
	fclose(iofile);
	if ((iofile = fopen(file, "rb")) == NULL)//binary모드로 read 하겠다.
	{
		fprintf(stderr,
			"Could not open %s for random access.\n", file);
		exit(EXIT_FAILURE);
	}
	// read selected items from file
	printf("Enter an index in the range 0-%d.\n", ARSIZE - 1);
	while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long)i * sizeof(int); // calculate offset //int 로 변경
		fseek(iofile, pos, SEEK_SET);
		// go there - 해당하는 위치로 이동(파일포인터, 위치, 적용값(파일의 제일 처음set에서 pos만큼 이동해서 대기
		fread(&value, sizeof(int), 1, iofile); //int 로 변경
		printf("The value there is %d.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	// finish up
	fclose(iofile);
	puts("Bye!");
	return 0;
}