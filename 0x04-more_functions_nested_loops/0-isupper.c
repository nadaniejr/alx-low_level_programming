#include "main.h"
/**
 * _isupper - checks if the letters are uppercase
 *  @c: input.
 *
 *  Return: 1 if c is uppercase
 *    0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		_putchar (1);
	}
	else
	{
		_putchar (0'\n');
	}
}
