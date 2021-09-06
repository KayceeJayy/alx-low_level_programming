#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out an array
 * @a: integer a
 * @n: integer n
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *a);
			a++;
		}
		else
		{
			printf("%d, ", *a);
			a++;
		}
	}
	printf("\n");
}
