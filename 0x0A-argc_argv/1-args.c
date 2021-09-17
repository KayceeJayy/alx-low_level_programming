#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
