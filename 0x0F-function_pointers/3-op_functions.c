#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function adds two params
 * @a: first int to add
 * @b: second int to add
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function subtracts
 * @a: int param
 * @b: int param
 *
 * Return: Int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplies
 * @a: int param
 * @b: int param
 *
 * Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function divides
 * @a: int param
 * @b: int param
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function finds modules
 * @a: int param
 * @b: int param
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
