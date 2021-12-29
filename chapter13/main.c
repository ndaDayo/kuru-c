#include <stdio.h>

int main(void) {
	int array[10];

	array[9] = 1000;
	printf("1: %d", array[9]);
	array[9]++;
	printf("2: %d", array[9]);
}
