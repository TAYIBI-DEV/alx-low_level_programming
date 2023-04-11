#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: char
 * Return: not void
 */

char *create_array(unsigned int size, char c)
{
	char *P;
	unsigned int i;

	P = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		P[i] = c;
	}
		return (P);
}
