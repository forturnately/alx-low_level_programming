#include "stdio.h"

/**
 * main - program that prints _putchar.
 * Return: init
 */

int main(void)
{
	int a = 0;
	char print_word[8] = "_putchar";

	while (a < 8)
	{
		putchar(print_word[a]);
		a += 1;
	}
	putchar('\n');
	return (0);
}
