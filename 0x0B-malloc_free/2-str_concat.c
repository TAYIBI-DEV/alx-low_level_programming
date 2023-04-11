#include "main.h"

/**
 * str_concat - function that concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: not void
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
