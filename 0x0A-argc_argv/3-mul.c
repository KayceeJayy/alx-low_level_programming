#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	(void) argv;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		result = ((atoi(argv[1])) * (atoi(argv[2])));
		printf("%d\n", result);
	}
	return (0);
}

