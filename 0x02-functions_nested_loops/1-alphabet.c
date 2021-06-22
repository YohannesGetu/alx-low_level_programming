#include "holberton.h"

/**
 * print_alphabet - Prints alphabate in lower case
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
