#include <stdio.h>

#define COUNT 10

void
solve(void)
{
	int loop = COUNT;
	int sum = 0;
	int num;

	for (; loop--; )
	{
		scanf("%d", &num);
		if (num & 1)
			sum += num;		
	}

	printf("%d\n", sum);
}
