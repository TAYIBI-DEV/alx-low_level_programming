#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
