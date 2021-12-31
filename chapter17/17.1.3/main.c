#include <stdio.h>

int main(void) {
	FILE *file;

	file = fopen("test.txt", "w");

	fprintf(file, "ndadayo");

	fclose(file);
	return 0;
}
