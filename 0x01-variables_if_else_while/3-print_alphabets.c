#include <stdio.h>
/**
 * main - this is main
 *
 * Description: this is the description
 * Return: the main return 0
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	do {
		putchar(x);
		x++;
	} while (x <= 'z');
	do {
		putchar(y);
		y++;
	} while (y <= 'Z');
	putchar('\n');
	return (0);
}
