#include "main.h"
/**
 * print_diagonal - func
 * @n: param
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 1; x <= i; x++)
			{
				if (i == 1)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else if (x == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
