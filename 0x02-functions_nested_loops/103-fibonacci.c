#include <stdio.h>

/**
 * main- prints all fibanaccie nums
 *       starting with the second 1
 *
 * Return: alwayse 0
 *
 * does- not excede 4000000
 */

int main(void)
{
	long int a, b, c, d;

	a = 0;
	b = 1;
	c = 0;
	d = 0;
	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		if (c > 4000000)
			break;
		if ((c % 2) == 0)
			d += c;
	}
	printf("%ld\n", d);
	return (0);
}
