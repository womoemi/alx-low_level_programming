#include "main.h"

/**
 * times_table - prints the 9 time table, starting with 0
 *
 * Return: Null, void
 */
void times_table(void)
{
	int mm, nn, mul;

	for (mm = 0; mm <= 9; mm++)
	{
		for (nn = 0; nn <= 9; nn++)
		{
			mul = mm * nn;
