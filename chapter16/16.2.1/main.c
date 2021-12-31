#include <stdio.h>

typedef struct {
	int year;
	int clas;
	char name[64];

} student;

int main(void) {
	student data;

	data.year = 3;

	printf("%d", data.year);
}
