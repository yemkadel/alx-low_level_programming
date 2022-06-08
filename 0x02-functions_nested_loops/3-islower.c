#include "main.h"
/**
 * _islower - this is the  function that checks if the char is lowercase
 * @c: this is the parameter
 *
 * Return: it returns and interger value
 */

int _islower(int c)
{
	if ((c >= 90) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
