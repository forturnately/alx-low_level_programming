#include <stdio.h>
#include <main.h>
/**
 * a function that prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: nothing.
 */

void print_ten_letters(void)
{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';

		while (l <= 'z')
		{
			putchar(l);
			l += 1;
		}
		putchar(10);
		n += 1;
	}
}
