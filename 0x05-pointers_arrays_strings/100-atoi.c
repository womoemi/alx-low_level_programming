#include "main.h"

/**
 * _atoi - converts a string to an integer
<<<<<<< HEAD
 * @s: the string to be converted
=======
 * @str: pointer to the string to be converted
>>>>>>> 11fb78a4d1c5eca84dd4402db8c60163db76c758
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *str)
{
	int sign = 1;
	unsigned int num = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && &s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
