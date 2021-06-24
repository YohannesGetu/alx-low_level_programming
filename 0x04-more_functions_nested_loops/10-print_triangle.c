#include "holberton.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int j = size;

		while (j > 0)
		{
			int i;
			int y;

			for (i = j; i > 1; i--)
			{
				_putchar(' ');
			}
			for (y = 0; y <= size - j; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j--;
		}
	}
	else
		_putchar('\n');
}
