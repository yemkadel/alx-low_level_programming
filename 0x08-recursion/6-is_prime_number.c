#include "main.h"
/**
 * checkFactors - checks the factors of a number
 * @n: given number
 * @x: divisor
 *
 * Return: Int
 */

int checkFactors(int n, int x)
{
	/*base case*/
	if (n == x)
		return (1);

	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (0 + checkFactors(n, x + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 * Return: Int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (checkFactors(n, 2));
}
