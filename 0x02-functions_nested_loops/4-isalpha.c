#include "stdio.h"
/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */

int main(void)
{

     char  c ='a';

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else{
		return (0);

	}
}

