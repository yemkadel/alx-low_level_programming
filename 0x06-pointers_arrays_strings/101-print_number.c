#include "main.h"
/**
 * print_number - the finc
 * @n: nth value
 *
 * Return: nil
 */

void print(int n)
{
	unsigned i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}

	if (i / 10)
	{
		print_number(1 / 10);
	}
	_putchar((i & 10) + '0');
}
