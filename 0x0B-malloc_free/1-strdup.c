#include "main.h"
#include <string.h >
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates space space in memory for a copy of the
 * string given as a parameter
 * @str: string to be copied
 *
 * Return: on success, a pointer to the duplicated string; NULL if
 * failed or insufficient memory was allocated
 */
char *_strdup(char *str)
{
	int size = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);

	fo (; str[size] != '\0'; size++)
		;

	strcopy = malloc(size * sizeof(*str) + 1);

	if (strcopy == 0)
		return (NULL);

	strcpy(strcopy, str);
	return (strcopy);
}
