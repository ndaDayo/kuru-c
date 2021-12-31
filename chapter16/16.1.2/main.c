#include <stdio.h>

struct student {
	int year;
	int clas;
	int number;
};

int main(void) {
	struct student data;

	data.year = 10;
	printf("%d", data.year);
	return 0;
}
