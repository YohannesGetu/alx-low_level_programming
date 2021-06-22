#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int prod;

	while (i < 10)
	{
		while (j < 10)
		{
			prod = i * j;
			if (prod <= 9 && j != 0)
				_putchar(' ');
			if (prod > 9)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(prod + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
