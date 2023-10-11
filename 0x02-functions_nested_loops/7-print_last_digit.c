#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @n: The number whose last digit is to be printed.
*
* Return: Value of the last digit.
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
