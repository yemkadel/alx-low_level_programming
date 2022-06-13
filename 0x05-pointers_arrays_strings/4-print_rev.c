#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, strL = 0;

	while(*(s + strL))
	{
		strL++;
	}

	for (i = strL; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
