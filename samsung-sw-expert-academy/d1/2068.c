#include <stdio.h>

int solve(void)
{
	int loop = 10;
	int max = 0;
	int num;

	for (; loop--; ) {
		scanf("%d", &num);
		if (max < num)
			max = num;
	}
	printf("%d\n", max);
}
