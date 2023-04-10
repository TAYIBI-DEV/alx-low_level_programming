#include "main.h"

/**
 * main - entry point
 * @argc: int
 * @argv: string
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
