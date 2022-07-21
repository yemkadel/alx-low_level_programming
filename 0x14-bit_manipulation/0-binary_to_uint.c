#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int
 * Return: Int
 */

int _pow_recursion(int x, int y)
{
	/*base case*/
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - converts binary to base 2
 * @b: char pointer to binary string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (j = 0; i > 0; i--, j++)
	{
		if (b[j] == '1' || b[j] == '0')
		{
			sum += (b[j] == '1' ? 1 : 0) * (_pow_recursion(2, i - 1));
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
