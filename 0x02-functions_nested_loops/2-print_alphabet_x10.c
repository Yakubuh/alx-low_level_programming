#include "main.h"
#include "stdio.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			printf(i);
		}
		printf('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	
return 0;	
}
