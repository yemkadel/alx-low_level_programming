#include "main.h"
/**
 * jack_bauer - displays time
 * @x: param
 *
 * Description: this is the desc
 * Return: this is the return
 */
void format(int x);

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			format(i);
			_putchar(':');
			format(j);
			_putchar('\n');
		}
	}
}

/**
 * format - this function formats
 * @x: what is used
 *
 * Description: desrip
 * Return: void
 */
void format(int x)
{
	if (x > 10)
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	else
	{
		_putchar('0');
		_putchar((x % 10) + '0');
	}
}
