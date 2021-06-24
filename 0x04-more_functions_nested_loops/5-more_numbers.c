#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int count = 1;

	while (count <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		count++;
		_putchar('\n');
	}
}
