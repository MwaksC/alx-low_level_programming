#include "main.h"
int my_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (my_sqrt_recursion(a, b + 1));
}
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
