#include "main.h"
/**
 * swap_int - this function swaps the values of to integer variables
 * @a: this is the first int
 * @b: this is the second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
