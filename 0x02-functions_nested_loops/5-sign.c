#include "holberton.h"

/**
 * print_sign - prints the sign of the number
 * @n:  is the int that will use for the argument of the function
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
