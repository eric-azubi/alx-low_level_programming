#include <stdio.h>

/**
 *main - Prints lowercase letters in reverse order using only putchar
 *
 *Description: Prints lowercase letters in reverse order using only putchar
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
