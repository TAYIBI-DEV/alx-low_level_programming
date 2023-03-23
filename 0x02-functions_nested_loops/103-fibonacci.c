#include <stdio.h>
/**
* main - entry point
*
* Return: void return 0
*/
int main(void)
{
	unsigned long opt, i, j, k, sum;

	i = sum = 0;
	j = 1;
	for (opt = 0; opt < 50; opt++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
