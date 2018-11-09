#include <stdio.h>

void
solve(void)
{
	int max;
    int num;

	int digit;
	int clap;
    
    scanf("%d", &max);
    for (num = 1; num <= max; num++)
	{
		clap = 0;
		for (digit = num; digit; digit /= 10)
		{
			switch (digit % 10)
			{
				case 3 : case 6: case 9:
					printf("-");	
					clap = 1;
			}
		}
		
		clap ? printf(" ") : printf("%d ", num);
    }

	printf("\n");
}
