#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @c: lowercase & uppercase c
 * Return: 1 or 0.
 */
int _isalpha(int c)
{

	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
