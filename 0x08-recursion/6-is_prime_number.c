#include "main.h"
int prime(int n, int div, int count)
{
	div++;

	if (count >= 2)
		return (0);
	else if (n == div)
		return (1);
	if (n % div == 0)
		count++;
	return (prime(n, div, count));
}
int is_prime_number(int n)
{
	int count = 1, div = 1;

	if (n == 1 || n == -1)
		return (0);

	return (prime(n, div, count));
}
