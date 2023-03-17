#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
	printf("%c", i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	printf("%c", j);
	}
	printf("\n");
	return (0);
}
