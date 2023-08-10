#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *array_range(int min, int max)
{
	int *p;
	int i, j, num;

	num = max - min;

	if (num >= 0)
	{
		p = malloc(sizeof(int) * (num + 1));

		if (!p)
			return (NULL);
		for (i = 0, j = min; j <= max; i++, j++)
		{
			p[i] = j;
		}
	}
	else
		return (NULL);
	return (p);
}
