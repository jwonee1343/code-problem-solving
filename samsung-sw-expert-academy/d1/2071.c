#include <stdio.h>

void
solve(void)
{
	int loop = 10;
	int sum = 0;
	int num;

	for (; loop--; ) {
		scanf("%d", &num);
		sum += num;
	}

	printf("%.f\n", sum * 0.1);
}
