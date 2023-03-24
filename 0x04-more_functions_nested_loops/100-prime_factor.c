#include<stdio.h>
#include<math.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long int n;
	long int prime;
	long int i;

	n = 612852475143;
	prime = -1;

	while (n % 2 == 0)
	{
		prime = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			prime = i;
			n = n / i;
		}
	}
	if (n > 2)
		prime = n;
	printf("%ld\n", prime);
	return (0);
}
