#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char x;


	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
