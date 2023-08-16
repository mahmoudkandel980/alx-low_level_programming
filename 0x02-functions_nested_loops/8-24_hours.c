#include "main.h"
/**
* jack_bauer - function
*/

void jack_bauer(void)
{
	int minute;
	int hour;

	for (hour = 0; hour <= 23; ++hour)
	{
		for (minute = 0; minute <= 59; ++minute)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
