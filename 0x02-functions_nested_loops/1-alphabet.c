#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet()
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar('%c', i);
	}
	putchar('\n');
}
int main (void)
{
	print_alphabet();
	return (0);
	
}
