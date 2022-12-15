#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Extra: _putchar 3x only
 */
void more_numbers(void)
{
	int i, a;

	i = 0;

	while (i < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
		i++;
	}
}




