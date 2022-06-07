#include "main.h"
/**
 * print_sign - this is a sign func
 *@n: this is the number to be checked
 *
 * Description: this is the desc
 * Return: returns and integer
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n  == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
