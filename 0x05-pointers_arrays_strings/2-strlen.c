#include "holberton.h"

/**
 * _strlen - calculate the length of a string
 * @s: pointer of char
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
