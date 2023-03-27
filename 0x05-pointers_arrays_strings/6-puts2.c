#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int n = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		n++;
	}
	t = n - 1;
	for (a = 0 ; a <= t ; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

