#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of day
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;
	int ldm;
	int ldh;

	while (hour <= 23)
	{
		while (minute <= 59)
		{
			ldm = minute % 10;
			ldh = hour % 10;
			_putchar(hour / 10 + '0');
			_putchar(ldh + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(ldm + '0');
			minute++;
			_putchar('\n');
		}
		hour++;
		minute = 0;
	}
}
