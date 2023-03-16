#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(%)\n", (unsigned long) sizeofof(a));
printf("Size of a int: %lu byte(%)\n", (unsigned long) sizeofof(b));
printf("Size of a long int: %lu byte(%)\n", (unsigned long) sizeofof(c));
printf("Size of a long long int: %lu byte(%)\n", (unsigned long) sizeofof(d));
printf("Size of a float: %lu byte(%)\n", (unsigned long) sizeofof(f));
return (0);
}
