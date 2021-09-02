#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;
	int j = 48;

	for (i = 0; i < 10; i++, j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
