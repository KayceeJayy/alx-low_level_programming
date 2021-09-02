#include "main.h"

/**
 * more_numbers - prints multiple times a set of numbers
 */

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
