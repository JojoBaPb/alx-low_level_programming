#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int i = 0, a;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (a = 0; a < size; a++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
