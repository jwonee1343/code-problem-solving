#include <stdio.h>

void
solve(void)
{
	int num;

    scanf("%d", &num);
    printf("%.f\n", (num & 1 ? 1 : -1) * (num * 0.5 + 0.05) );
}
