#include "main.h"


/**
 * jack_bauer - Writes every minute of a 24-hour day in HH:MM format.
 */
	void jack_bauer(void)
	{
		int i, j;


		i = 0;


		while (i < 24)
		{
			j = 0;
			while (j < 60)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
				j++;
			}
			i++;
		}
	}
