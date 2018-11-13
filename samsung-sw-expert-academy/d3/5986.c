#include <stdio.h>

int is_prime(int num)
{
	int x;

	if (num < 2)
		return 0;
	
	if (num < 4)
		return 1;

	for (x = num / 2; x > 1; x--) {
		if (num % x == 0)
			return 0;
	}
	
	return 1;
}

int get_prime(int *arr, int max)
{
	int i;
	int n;

	if (max < 2)
		return 0;

	arr[0] = 2;
	if (max < 3)
		return 1;

	arr[1] = 3;
	if (max < 5)
		return 2;

	i = 2;
	for (n = 5; n <= max; n += 2) {
		if ( is_prime(n) )
			arr[i++] = n;
	}

	return i;
}

int main(void)
{
	int T, t;
	
	int prime[(999 / 3) + 2];
	int N;
	int x, y, z;
	int case_num;

	get_prime(prime, 999);

	scanf("%d", &T);
	for (t = 1; t <= T; t++) {
		scanf("%d", &N);

		case_num = 0;
		for (x = 0; prime[x] <= (N / 3); x++) {
			for (y = x; prime[y] <= (N / 2); y++) {
				for (z = y; prime[x] + prime[y] + prime[z] < N; z++)
					;
				
				if (N == prime[x] + prime[y] + prime[z])
					case_num++;
			}
		}

		printf("#%d %d\n", t, case_num);
	}

	return 0;
}
