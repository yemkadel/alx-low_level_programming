#include "main.h"
/**
 * _strchr - function locates a character in a string and
 * returns a pointer to the first occurence
 * @s: the string
 * @c: the char to locate
 *
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
	int counter = 0;
	char *n;

	while (s[counter] != '\0' && s[counter] != c)
	{
		counter++;
	}

	if (s[counter] == c)
	{
		n = &s[counter];
	}
	else
	{
		n = '\0';
	}
	return (n);
}

