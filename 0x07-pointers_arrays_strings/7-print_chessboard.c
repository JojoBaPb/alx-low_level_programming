#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: 2d array
 */
void print_chessboard(char (*a)[8])
{
	int rank;
	int file;

	for (rank = 0; rank < 8; rank++)
	{
		for (file = 0; file < 8; file++)
		_putchar(a[rank][file]);
		_putchar('\n');
	}
}
