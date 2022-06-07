#include "main.h"
/**
 * print_last_digit - this is the func
 * @c: this the parameter
 *
 * Description: descri
 * Return: the return
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	int rem = c % 10;

	_putchar(rem + '0');
	return (rem);
}
