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
	int i = 0, counter = 0;
	char *n;
	n = s;

	while (s[counter] != '\0')
	{
		if (s[counter] == c || (i > 0 && s[counter]))
		{
			n[i] = s[counter];
			i++;
		}
		counter++;
	}
	return (n);
}

