#include "main.h"

/**
 * _identical - function check if two strings are identical.
 * @s1: string 1
 * @s2: string 2
 * @i: int
 * @j: int
 * Return: not void
 */
int _identical(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (_identical(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (_identical(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (_identical(s1, s2, i + 1, j) || _identical(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - function compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: 1 if are considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (_identical(s1, s2, 0, 0));
}
