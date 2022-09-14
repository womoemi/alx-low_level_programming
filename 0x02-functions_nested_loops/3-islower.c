#include "main.h"

/**
 * _islower - Check for lowercase ASCII characters
 * @c: This is an ASII character
 *
 * Return: 0 if not lowercase, 1 if lowercase
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
