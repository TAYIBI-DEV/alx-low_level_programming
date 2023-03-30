#include "main.h"

/**
 * cap_string - function that capitalizes all words
 * @str: string
 * Return: not void
 */

char *cap_string(char *str)
{
	int len, i;
	int sep = 1;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (sep && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		sep = isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}';
	}
	return (str);
}
