#include "main.h"
/**
 * _memset - this function fills
 * @s: src
 * @b: dest
 * @n: no f bytes to be filled
 *
 * Return: array pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
