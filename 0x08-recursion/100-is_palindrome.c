#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string
 * Return: not void
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string
 * @i: int
 * @j: int
 * Return: not void
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - fuction check if s is palindrome
 * @s: string.
 *
 * Return: not void
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
