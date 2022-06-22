#include "main.h"
/**
 * factorial - the function returns the factorial of a given number
 * @n: the given number
 *
 * Return: Int
 */

int factorial(int n)
{
	/*base case*/
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
