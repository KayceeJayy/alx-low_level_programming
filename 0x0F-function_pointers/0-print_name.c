#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
