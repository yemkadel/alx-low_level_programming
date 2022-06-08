#include "main.h"

/**
 * print_to_98 - this is the func
 * @n: thsi parameter marks the beginning of the number
 *
 * Description: this is the descr
 * Return: the method returns nothing
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
