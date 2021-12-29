#include <stdio.h>

int sum(int max);

int main(void) {
	sum(100);
	return 0;
}

int sum(int max) {
	printf("%d\n", (1 + max) * max / 2);

	return 0;
}
