#include <stdio.h>
/**
  * main - Entry point
  * Return: always 0 (success)
  */
int main(void)
{
	int opt;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	opt = 0;
	i = 0;
	j = 1;
	for (opt = 1; opt <= 91; opt++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (opt <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (opt != 98)
			printf(", ");
		opt++;
	}
	putchar('\n');
	return (0);
}
