#include <stdio.h>
int main(void)
{
	char l_alpha;
	char u_alpha;
	for (l_alpha = 'a'; l_alpha <= 'z' ; l_alpha++)
		putchar (l_alpha);
	for (u_alpha = 'A'; u_alpha <= 'z' ; u_alpha++)
		putchar (u_alpha);
	putchar('\n);
	return(0);
}	
