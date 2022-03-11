#include <stdio.h>

/**
 *main - Prints lowercase and uppercase letters using only putchar
 *
 *Description: a program that prints the alphabet in lowercase and uppercase
 *Return: 0
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z';)
{
putchar(c);
c = c + 1;
}
for (c = 'A'; c <= 'Z';)
{
putchar(c);
c = c + 1;
}

putchar('\n');

return (0);
}
