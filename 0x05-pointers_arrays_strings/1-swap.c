#include <stdio.h>
#include "main.h"

/**
 * swap_int - code to swap the values of int a and b
 * @a: int value for the argument of the function
 * @b: int value for the argument of the function
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = a;
	*a = *b;
	*b = n;
}
