#include "main.h"

/**
* _abs - Compute the absolute value of an integer.
* @n: The number whose absolute value is to be computed.
*
* Return: Absolute value of n.
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
