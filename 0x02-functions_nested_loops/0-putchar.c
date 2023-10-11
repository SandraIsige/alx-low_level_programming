#include "main.h"
#include <stdio.h>

/**
* print_string - prints the string "_putchar" followed by a new line
* Return: void
*/
void print_string(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
* main - main function
* Return: 0 on success
*/
int main(void)
{
	print_string();
	return (0);
}
