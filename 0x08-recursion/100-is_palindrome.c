#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: the string
 *
 * Return: Int
 */

int _strlen(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);
	return (i + _strlen(s + 1));
}
/**
 * check -  checks the char at different index
 * @s: string to be checked
 * @i: length
 * @l: lenght of the string to be checked
 *
 * Return: Int
 */
int check(char *s, int i, int l)
{
	char *n;

	n = s;

	if (s[i] == '\0')
	{
		return (1);
	}

	if (s[i] == n[l - 1])
	{
		return (0 + check(s, i + 1, l - 1));
	}

	return (0);
}

/**
 * is_palindrome - finds if a string is a palindrome
 * @s: a pointer to a string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check(s, 0, _strlen(s)));
}
