#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * @s: string
 * @accept: which consist only of bytes from
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
			if (!accept[j])
			{
				break;
			}
	}
	return (count);
}
