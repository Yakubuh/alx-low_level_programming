#include "stdio.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf(i);
	}
	printf('\n');
}
int main (void)
{
	alphabet();
}
