#include "main.h"
/**
 * _pow_recursion - the function returns the value of x raised to the power of y
 * @x: the number to raised to power
 * @y: the power the number is to be raised to
 *
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
