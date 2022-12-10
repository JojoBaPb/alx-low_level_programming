#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns an alphabet in reverse
 *
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
	int ch = 'z';	
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
