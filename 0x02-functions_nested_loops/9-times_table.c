#include "main.h"
/**
 * times_table - the func
 *
 * Description: the dec
 * Return: return
 */

void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
