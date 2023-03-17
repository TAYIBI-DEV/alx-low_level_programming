#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int j = 0;

	j = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (j > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	else if (j < 5)
		printf("Last digit of %d is %d and is less than 5\n", n, j);
	else if (j < 6)
		printf("Last digit of %d is %d and is less than 6\n", n, j);
	else if (j > 6)
		printf("Last digit of %d is %d and is greater than 6\n", n, j);
	else
		printf("Last digit of %d is %d and is 0\n", n, j);
	return (0);

}
