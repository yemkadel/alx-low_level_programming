#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a pointer to an array
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	/*base case*/
	if (s[1] == '\0')
	{
		_putchar(s[0]);
		_putchar('\n');
		return;
	}
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	s[i] = '\0';
	_print_rev_recursion(s);
}
