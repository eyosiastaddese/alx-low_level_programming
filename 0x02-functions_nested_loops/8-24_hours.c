#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minutes of the day
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr <= 23; hr++)
	for (min = 0; min <= 59; min++)
	{
		_putchar('0' + hr / 10);
		_putchar('0' + hr % 10);
		_putchar(':');
		_putchar('0' + min / 10);
		_putchar('0' + min % 10);
		_putchar('\n');
	}
}
