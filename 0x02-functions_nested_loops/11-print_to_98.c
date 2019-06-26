#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: natural number.
 * Return: Nothing.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
		printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
		printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
}
