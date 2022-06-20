#include "main.h"
/**
 * _memcpy - this function copies memory
 * @dest: destination
 * @src: source
 * @n: no of bytes to be copied
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
