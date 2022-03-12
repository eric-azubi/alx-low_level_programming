#include <stdio.h>

/**
 *main - Prints decimal digits
 *
 *Description: Prints decimal digits delimited with comma
 *and followed by a new line
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
