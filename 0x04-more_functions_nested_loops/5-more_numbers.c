#include "main.h"
/**
 * more_numbers - print 0 - 14
 * Return :0
 */
void more_numbers(void)
{
	int i = 0, j = 0, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;

			if (j > 9)
			{
				_putchar('1');
				n = j % 10;
			}
			_putchar((n + '0'));
		}
		_putchar('\n');
	}
}
