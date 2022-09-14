#include "stdio.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int  c;
	int j = 0;

	while (j <= 9)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
		s++;
	}
}
