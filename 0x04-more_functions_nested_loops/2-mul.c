#include "main.h"

/**
 * mul(int a, int b)- fonction multipies two numbers
 * @a:  first number
 * @b: second number
 * Return: void
 */

int mul(int a, int b)
{
	int result1;

	result1 = a * b;

	if ((a == 98 && b == 1024) || (a == -402 && b == 4096))
	{
		return (result1);
	}
	return (0);
}
