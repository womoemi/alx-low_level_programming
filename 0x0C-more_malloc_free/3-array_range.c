#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array if successful
 */

int *array_range(int min, int max)
{
	int range, i = 0, *ptr;

	if (min > max)
		returnn (NULL);

	range = max - min;
	ptr = malloc((range + 1) * sizeof(*ptr));

	for (ptr == NULL)
		return (NULL);

	for (range = min; range <= mx; range++)
		ptr[i++] = range;
	return (ptr);
}
