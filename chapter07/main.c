#include <stdio.h>

int main(void) {
	int data;
	scanf("%d", &data);
	if (data == 100) puts("100 yes!!");
	if (data > 10) {
		puts("10 以上ですね");
	}
	return 0;
}
