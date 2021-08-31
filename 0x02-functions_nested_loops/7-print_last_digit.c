#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @x: checks for the value of a number
 * Return: always 0 (success)
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}

/**
 * print_last_digit - prints the last digits of a number
 * @y: holds last digit to be printed
 * Return: last digit (success)
 */

int print_last_digit(int y)
{
	int last_digit;

	last_digit = _abs((y % 10));
	_putchar(last_digit + '0');
	return (last_digit);
}
