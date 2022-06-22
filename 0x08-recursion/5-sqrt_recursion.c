#include "main.h"
/**
 * checker - checker
 * @n: given number
 * @x: divisor
 *
 * Return: int
 */

int checker(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
		{
			return (x);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + checker(n, x + 1));
}
/**
 * _sqrt_recursion - returns the square root on a number
 * @n: the number
 *
 * Return: Int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (checker(n, 2));
}
