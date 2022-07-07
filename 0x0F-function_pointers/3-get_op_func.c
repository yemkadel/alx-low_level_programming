#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the operand
 * @s: the array pointer for the operand
 * @a: the first integer
 * @b: the second integer
 *
 * Return: int
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
