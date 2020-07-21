//구조체 주소를 넘겨받아서 맴버변수를 출력.
#include<stdio.h>

struct name {
	char first[20];
	char last[20];
};
struct bem {
	int limbs;
	struct name title;
	char type[30];
};



int main(void)
{
	struct bem* pb;
	struct bem deb = { 6,
	 {"Berbnazel", "Gwolkapwolk"},
	 "Arcturan"
	};
	
	pb = &deb;

	print_bem(pb);
	printf("%d\n", deb.limbs);
	printf("%s\n", pb->type);
	printf("%s\n", pb->type + 2);

	return 0;
}


void printf_bem(struct bem* deb)
{
	printf("%s %s is a %d-limbed %s\n",
		deb->title.first, deb->title.last, deb->limbs, deb->type);
}