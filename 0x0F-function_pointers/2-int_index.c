#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - prints the first index
 * @array: array pointer
 * @size: the size of the array
 * @cmp: the pointer to function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && size == NULL && cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
