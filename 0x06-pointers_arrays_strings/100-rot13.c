#include "main.h"

/**
 * leet - Converts to leet format
 * @s: string to be formatted
 *
 * Return: formatted string
 */
char *leet(char *s)
{
	char optins[] = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (s[i] == optins[j] || s[i] == options[j] + 32)
				s[i] = options[j + 1];
		}
	}
	return (s);
}
