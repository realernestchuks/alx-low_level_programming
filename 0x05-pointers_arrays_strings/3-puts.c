#include " main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 * Written by Ernest Chuks
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
