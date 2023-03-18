#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9' ; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (j > i)
			{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
