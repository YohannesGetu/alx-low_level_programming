#include <stdio.h>
/**
 * main - prints fibonacci
 *
 * Return: Always 0;
 */
int main(void)
{
	int i;
	float x, y, z;

	x = 1;
	y = 2;

	printf("%.0f, ", x);
	printf("%.0f", y);
	for (i = 0; i < 96; i++)
	{
		z = x + y;
		printf(", %.0f", z);
		x = y;
		y = z;
	}
	putchar('\n');
	return (0);
}
