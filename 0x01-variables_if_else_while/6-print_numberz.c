#include <stdio.h>

/**
 *main - Prints decimal digits using only putchar
 *
 *Description: Prints decimal digits using only putchar
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
