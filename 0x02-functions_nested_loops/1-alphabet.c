#include "stdio.h"
#include "main.h"
#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c",i);
	}
	printf("\n");
}
int main (void)
{
	print_alphabet();
	return 0;
}
