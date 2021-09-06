#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string argument
 * Return: null
 */

void rev_string(char *s)
{
	int l;
	int temp;
	int i;

	l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
