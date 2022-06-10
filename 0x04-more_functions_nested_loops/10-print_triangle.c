#include "main.h"
/**
 * print_triangle - func
 * @size: param
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (x = 1; x < size; x++)
			{
				if (i > x)
				{
					_putchar(' ');
				}
				else if ((i <= x) && (x == size))
				{
					_putchar('\n')
				else if (i <= x)
				{
					_putchar('#');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
