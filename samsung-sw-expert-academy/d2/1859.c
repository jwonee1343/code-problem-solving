#include <stdio.h>
#include <malloc.h>

void
solve(void)
{
	int days;

	int *price;
	int top;

	int total;
	int profit;

	scanf("%d", &days);
	price = (int *)malloc(days * sizeof(int) );

	for (top = 0; top < days; top++)
		scanf("%d", &price[top]);

	total = 0;
	profit = 0;
	for (; top--; )
	{
		if(profit < price[top])
			profit = price[top];

		total += profit - price[top];
	}

	printf("%d\n", total); 
	free(price);
}
