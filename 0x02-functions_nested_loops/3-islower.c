#include "stdio.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The input character to check
 * Return: int.
 */



int _islower(int c)

{	
	while(c <=122 && c >=97)
	{
		return ("It's lowercase");
	}
	return ("It's Uppercase");
}
