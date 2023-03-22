#include "main.h"

#include <stdio.h>

/**
*print_to_98 - adds two integers
*@n: first number
*Return: returns the sum of a and b
*/



void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
		}
	}

	}
	else
	{
		for (; n <= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
