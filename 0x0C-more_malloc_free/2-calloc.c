#include "main.h"

/**
 * _allocate - allocate 0 to memory
 * @mem: pointer to the void memory
 * @z: value to allocate a memory with
 * @n: size of the memory
 * Return: adderess of new allocated memory
 */

char *_allocate(char *mem, char z, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		mem[i] = z;
		return (mem);
	}


/**
 * _calloc - allocate memory of a particular size to an array
 * @nmemb: no of elements of an array
 * @size: size in bytes of the data type
 * Return: address of newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = size * nmemb;
	mem = malloc(total);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}


	_allocate(mem, 0, total);

	return (mem);
}
