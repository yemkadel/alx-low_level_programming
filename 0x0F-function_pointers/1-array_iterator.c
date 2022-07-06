#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array
 * @size: the size of the array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
