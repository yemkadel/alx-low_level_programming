#include "main.h"
/**
 * string_toupper - to upper case
 * @s: pointer
 *
 * Return: char array
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' &&  s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
