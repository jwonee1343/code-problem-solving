#include <stdio.h>

void
solve(void)
{
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%c\n", x > y ? '>' : 
	               x < y ? '<' : '=');
}
