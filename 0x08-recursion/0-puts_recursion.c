#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The input string
 *
 * Description: This function prints each character of the string recursively
 *              until it reaches the null character '\0', and then prints a
 *              newline character '\n'.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
