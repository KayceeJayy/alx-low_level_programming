#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @j: integer
 * @x: string
 * @y: string
 * @z: string
 * Return: always 0
 */

int main(void)
{
	int j;
	char x[] = "Fizz";
	char y[] = "Buzz";
	char z[] = "FizzBuzz";

	for (j = 1; j <= 100; j++)
	{
		if (j == 100)
		{
			printf("%s", y);
		}
		else if (j % 3 == 0 && j % 5 == 0)
		{
			printf("%s ", z);
		}
		else if (j % 3 == 0)
		{
			printf("%s ", x);
		}
		else if (j % 5 == 0)
		{
			printf("%s ", y);
		}
		else
			printf("%d ", j);
	}
	printf("\n");
	return (0);
}
	
