#include "stdio.h"

/**
 * print_alphabet - function to print abc
 * Return: 0
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
