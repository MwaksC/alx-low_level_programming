#include "main.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);

	if (!n)
	{
		free(n);
		exit(98);
	}

	return (n);

}
