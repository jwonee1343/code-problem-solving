#include <stdio.h>

#define COUNT 10
#define IS_ODD(num) (num & 1)

void solve(void)
{
	int loop = COUNT;
	int sum = 0;
	int num;

	for (; loop--; ) {
		scanf("%d", &num);
		if ( IS_ODD(num) )
			sum += num;		
	}
	printf("%d\n", sum);
}
