#include "main.h"
/**
 * print - the finc
 * @n: nth value
 *
 * Return: nil
 */

void print(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
