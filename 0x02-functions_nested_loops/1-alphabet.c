#include "stdio.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */

int main (void)
{
	
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c",i);
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
