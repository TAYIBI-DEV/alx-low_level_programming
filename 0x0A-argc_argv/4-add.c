#include "main.h"

/**
 * is_digit - Function check
 * @s: string
 * Return: The Return value/void
 */


int is_digit(char *s)
{
int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);

}




/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{

		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
