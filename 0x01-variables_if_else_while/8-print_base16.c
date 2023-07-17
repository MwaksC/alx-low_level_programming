#include<stdio.h>
int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	puthcar('\n');
	return (0);
}			
