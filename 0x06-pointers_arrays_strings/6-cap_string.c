#include "main.h"
/**
 * cap_string - cap the strings
 * @s: the string
 *
 * Return: char array
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\n' && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = '>';
		}
	}
	return (s);
}
