#include "main.h"
/**
 * _strlen_recursion - gets the lenght of a string using recursion
 * @s: pointer to a string array
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	/*base case*/
	if (*s == '\0')
	{
		return (0);
	}

	return (count + _strlen_recursion(s + 1));
}
