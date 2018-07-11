#include "holberton.h"

/**
* print_chessboard - prints chessboard
* @a: array to print
*
* Description: prints chessboard grid (8 x 8, 2d array)
*/

void print_chessboard(char (*a)[8])
{

int vert, horz;

for (vert = 0; vert < 8; vert++)
{
	for (horz = 0; horz < 8; horz++)
	{
		_putchar(a[vert][horz]);
	}
	_putchar(10);
}
}
