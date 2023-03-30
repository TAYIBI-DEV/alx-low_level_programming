#include "main.h"

/**
 * leet - function 1337
 * @str: string
 * Return: not void
 */

char *leet(char *str)
{
	int i, j, len, len1;

	char *let = "aAeEoOtTlL";
	char *letn = "4433007711";

	len = strlen(let);
	len1 = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (str[j] == let[i])
			{
				str[j] = letn[i];
			}
		}
	}
	return (str);
}
