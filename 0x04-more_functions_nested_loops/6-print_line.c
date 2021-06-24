#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: intiger agrument
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
