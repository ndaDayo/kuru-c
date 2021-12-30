#include <stdio.h>

void func(int *pvalue);

int main() {
	int value = 10;
	printf("&value = %p\n", &value);
	func(&value);
	printf("value = %d", value);
	return 0;
}

void func(int *pvalue) {
	printf("pvalue = %p\n", pvalue);
	*pvalue = 100;
	return;
}
