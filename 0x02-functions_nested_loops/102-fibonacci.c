#include <stdio.h>
/**
 * main - the main
 *
 * Return: return
 */

int main(void)
{
	long i, num, a = 1, b = 2, n = 50;

	printf("%li, %li", a, b);
	for (i = b; i < n; i++)
	{
		num = a + b;
		a = b;
		b = num;
		printf(", %li", num);
	}
	return(0);
}
