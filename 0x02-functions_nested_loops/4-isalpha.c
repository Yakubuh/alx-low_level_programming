#include "main.h"

/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */

void _isalpha(char c )
{



	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else{
		return (0);

	}
}

int main (){

char a = 'b';

_isalpha(a);

return 0;
}

