#include "stdio.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int n;
	int m = 0;

	while (m < 10)
	{
		n = 'a';

		while (n <= 'z')
		{
			putchar(n);
			n += 1;
		}
		putchar(10);
		m += 1;
	}
}
