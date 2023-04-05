#include "main.h"

/**
 * factorial - function that returns the factorial of numb
 * @n: the number
 *
 * Return: not void
 */

int factorial(int n)

{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
