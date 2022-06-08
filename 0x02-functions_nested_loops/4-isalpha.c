#include "main.h"
/**
 * _isalpha - this is the func
 * @c: this is the param
 *
 * Return: it returns an int
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
