#include "main.h"
/**
 * array_range - creates an array of ints
 * @min: The minimum number of the array
 * @max: The maximum number of the array
 * Return: address of the new allocated memory for array
 */

int *array_range(int min, int max)
{
	int i, n;
	int *array;

	i = 0;

	if (min > max)
		return (NULL);
	n = max - min;
	n = n + 1;

	array = malloc(sizeof(int) * n);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (; min != max + 1; min++)
	{
		array[i] = min;
		i++;
	}

	return (array);
}
