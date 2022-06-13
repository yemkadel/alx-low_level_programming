#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, strL = 0;

	while (*(s + strL))
	{
		strL++;
	}
	for (i = strL; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
