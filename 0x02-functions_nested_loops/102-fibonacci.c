#include <stdio.h>
/**
* main - entry point
*
* Return: always 0 (success)
*/
int main(void)
{
	int  opt, i, j, k;

	i = 0;
	j = 1;
	for (opt = 0; opt < 50; opt++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (opt == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
