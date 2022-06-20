#include "main.h"
/**
 * _strspn - returns number of bytes
 * @s: the string
 * @accept: the matches
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			if (s[i] != accept[j] && accept[j + 1] == '\0')
			{
				return (counter);
			}

		}
	}
	return (counter);
}
