#include "main.h"
#include <unistd.h>

/**
* _putchar - writes a character to stdout
* @c: character to be printed
* Return 1 on success, -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_string - prints the string "_putchar" followed by a new line
* Return: void
*/
void print_string(void)
{
	char str[] = "putcahr\n";
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
