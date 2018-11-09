#include <stdio.h>

extern void solve(void);

int
main(void)
{
	int T, t;

	setbuf(stdout, NULL);

	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{	
		printf("#%d ", t);
		solve();
	}

	return 0;
}
