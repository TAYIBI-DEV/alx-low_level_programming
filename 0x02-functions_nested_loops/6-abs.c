#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: the number to be computed
 * Return: Absolute value of number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absval;

		absval = c * -1;
		return (absval);
	}
	return (c);

}
