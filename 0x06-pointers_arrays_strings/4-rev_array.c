#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array using nth value
 * @a: array pointer
 * @n: lent
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int num, i;

	n -= 1;
	for (i = 0; i <= n; i++)
	{
		num = a[i];
		a[i] = a[n];
		a[n] = num;
		n--;
	}
}
