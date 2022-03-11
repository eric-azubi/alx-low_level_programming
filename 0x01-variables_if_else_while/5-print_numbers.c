#include <stdio.h>

/**
 *main - Prints decimal digits
 *
 *Description: Prints decimal digits followed by a new line
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
