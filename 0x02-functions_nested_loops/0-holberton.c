#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char x[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int y;

	for (y = 0; y < sizeof(x); y++)
	{
		_putchar(x[y]);
	}
	_putchar('\n');
	return (0);
}
