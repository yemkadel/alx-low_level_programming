#include "main.h"
/**
 * jack_bauer - displays time
 *
 * Description: this is the desc
 * Return: this is the return
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
