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
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
		}
		for (j = 48; j <= 52; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
