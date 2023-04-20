#include "3-calc.h"

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: argument vector
 *
 *Return: always 0 success.
 */

int main(int argc, char **argv)
{
	int (*op_fc)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_fc = get_op_func(argv[2]);
	if (!op_fc)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_fc(a, b));
	return (0);
}
