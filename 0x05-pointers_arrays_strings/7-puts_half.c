#include "main.h"
/**
 * puts_half - prints every other char
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x, i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		i -= 1;
	}

	for (x = (i / 2); x < i; x++)
	{
		_putchar(*(str + x));
	}

	_putchar('\n');
}
