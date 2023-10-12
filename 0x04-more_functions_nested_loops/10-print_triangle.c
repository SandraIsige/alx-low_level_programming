#include "main.h"

/**
* print_triangle - prints a right-angled triangle using the # character.
* @size: the size of the triangle.
* Return: void
*/
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
		for (space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
