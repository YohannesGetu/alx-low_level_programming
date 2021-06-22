#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer argument
 *
 * Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n++;
		}
	else
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n--;
		}
}
