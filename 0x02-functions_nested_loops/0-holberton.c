#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int y;

	for (y = 0; y < sizeof(x); y++)
	{
		_putchar(x[y]);
	}
	_putchar('\n');
	return (0);
}
