#include "main.h"
int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = _strlen_recursion((s + 1));
		n++;
		return (n);
	}
	else
	{
		return (0);
	}
}
