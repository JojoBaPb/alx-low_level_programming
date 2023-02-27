#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number
 * Return: number that has been converted OR 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, holder;
	int n;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
		;
	n--;
	for (holder = 1, uint = 0; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			holder *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			uint += holder;
			holder *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
