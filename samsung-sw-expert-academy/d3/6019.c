#include <stdio.h>

void
solve(void)
{
	int A, B;
	int D;
	int F;

	scanf("%d %d %d %d", &D, &A, &B, &F);
	printf("%.10f\n", F * ( (float)D / (A + B) ) );
}
