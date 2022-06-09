#include <stdio.h>
/**
 * _isupper - this is the main
 * @c: the param
 *
 * Return: void
 */
int _isupper(char c)
{
	int x = c;

	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
