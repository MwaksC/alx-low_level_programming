#include "main.h"
int prime_check(int f, int p)
{
if (p < 2 || p % f == 0)
return (0);
else if (f > p / 2)
return (1);
else
return (prime_check(f + 1, p));
}
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime_check(2, n));
}
