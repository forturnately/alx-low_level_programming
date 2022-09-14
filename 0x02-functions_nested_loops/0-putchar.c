#include <unistd.h>
#include "main.h"

/**
 * main - program that prints _putchar.
 * Return: Always 0 (Success)
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
