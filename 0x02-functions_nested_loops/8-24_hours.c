#include "main.h"
/**
 * jack_bauer - print every minute of an hour ofthe 24 hr clock
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{

			if (i >= 0 && i < 10)
			{
				_putchar(0 + '0');
			}
			_putchar(i + '0');
			_putchar(':');
			if (j >= 0 && j < 10)
			{
				_putchar(0 + '0');
			}
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}
