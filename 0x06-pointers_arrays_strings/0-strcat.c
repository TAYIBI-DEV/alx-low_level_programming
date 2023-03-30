#include "main.h"

/**
 * _strcat - function that concatenates
 * @dest: string 1
 * @src: string 2
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *c;

	c = strcat(dest, src);
	return (c);
}
