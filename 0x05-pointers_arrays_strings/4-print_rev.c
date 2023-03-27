#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int n = 0;
	int a;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for (a = n; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
