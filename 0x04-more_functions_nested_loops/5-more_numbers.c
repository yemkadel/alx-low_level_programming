#include "main.h"
/**
 * more_numbers - func
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		int x;

		for (j = 0; j <= 14; j++)
		{
			x = j;

			if (j > 9)
			{
				x = 1;
			}
			_putchar(x + '0');
			if (x == 1)
			{
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
