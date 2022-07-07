#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - this is the main
 * @argc: the count of arguments passed
 * @argv: the arguments passed
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int res, (*f)(int a, int b);

	f = (*get_op_func(argv[argc - 2]));

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	res = f(atoi(argv[argc - 3]), atoi(argv[argc - 1]));
	printf("%d\n", res);
	return (0);
}
