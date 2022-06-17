#include "main.h"
/**
 * leet - this is the func
 * @s: the char
 *
 * Return: char array
 */

char *leet(char *s)
{
	int i, x;

	char leet[] = "aAeEoOTlL", lNum[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (leet[x] == s[i])
			{
				s[i] - leet[x]
			}
		}
	}
	return (s);
}
