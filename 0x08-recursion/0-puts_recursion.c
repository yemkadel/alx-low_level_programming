#include "main.h"
/**
 * _puts_recursion - prints a char array as string using recursion
 * @s: char pointer
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	/*base case*/
	if (s[i]  == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	_puts_recursion(&s[i + 1]);
}
