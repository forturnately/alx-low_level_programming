#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 * Return: 0
 */

int print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
