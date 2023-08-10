#include "main.h"
int sqrt_rec(int max, int u)
{
	int pair;

	pair = max;
	if (max % 2 == 0)
		max = max * 2;

	if (u * u == max && u <= pair)
		return (u);
	else if (u > max)
		return (-1);
	return (sqrt_rec(pair, u + 1));
}
int _sqrt_recursion(int n)
{
	int max, u = 1;

	max = n;
	if (n == 1)
		return (1);

	if (n % 2 == 0)
		max = n / 2;

	return (sqrt_rec(max, u));
}
