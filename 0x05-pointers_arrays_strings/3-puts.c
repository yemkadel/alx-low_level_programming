#include "main.h"
/**
 * _puts - this function prints a string
 * @str: this is the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
