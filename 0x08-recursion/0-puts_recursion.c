
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		
		return (s);
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
