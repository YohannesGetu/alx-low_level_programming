#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size os a char: %d byte(s)\n", sizeof(char));
	printf("Size os a int: %d byte(s)\n", sizeof(int));
	printf("Size os a long int: %d byte(s)\n", sizeof(long int));
	printf("Size os a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size os a float: %d byte(s)\n", sizeof(float));
	return (0);
}
