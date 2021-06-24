#include "holberton.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
