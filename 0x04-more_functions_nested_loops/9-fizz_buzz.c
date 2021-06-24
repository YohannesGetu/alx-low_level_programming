#include <stdio.h>

/**
 * main - prints from 1 to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 15 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0 && num != 100)
			printf("Buzz ");
		else if (num % 5 == 0 && num == 100)
			printf("Buzz");
		else
			printf("%d ", num);
		num++;
	}
	printf("\n");
	return (0);
}
