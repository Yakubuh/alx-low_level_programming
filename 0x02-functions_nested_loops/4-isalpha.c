#include "main.h"
#include "stdio.h"
/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */

void  _isalpha(void)
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
int main(vooid){

	char a = 'b' ;
	_isalpha(a);
	return 0;
}

