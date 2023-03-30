#include "main.h"

/**
 * string_toupper - function change all lowercase letters to uppercase
 * @str: string
 * Return: not void
 */
char *string_toupper(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
