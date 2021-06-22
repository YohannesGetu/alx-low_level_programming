#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabate in lower case 10 time
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
