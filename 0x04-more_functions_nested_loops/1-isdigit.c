#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: the variable checked
 * Return: void
 */

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || !(c >= 'a' && c <= 'z'))
		return (0);
	else
		return (1);
}

