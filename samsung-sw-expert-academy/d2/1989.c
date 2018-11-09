#include <stdio.h>
#include <string.h>

void
solve(void)
{
	char word[10 + 1];
	int f, r;

	scanf("%s", word);
	for (f = 0, r = strlen(word) - 1; f < r; f++, r--)
	{
		if (word[f] != word[r])
			break;
	}

	printf("%d\n", f >= r);
}
