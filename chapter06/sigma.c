#include <stdio.h>

int main(void) {
	int min, max, sum;

	printf("最小値と最大値を入力してね: ");
	scanf("%d , %d", &min, &max);

	sum = (min + max) * (max - min + 1) / 2;

	printf("%d~%dの 合計は%dっす \n", min, max, sum);
	return 0;
}
