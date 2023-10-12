#include "main.h"

/**
* print_square - Prints a square of size n.
* @size: The size of the square.
*
* Return: void.
*/
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		int i, j;

		i = 0;

		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}	
	else
		_putchar('\n');
}
