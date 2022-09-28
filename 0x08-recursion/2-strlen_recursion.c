#include "holberton.h"
/**
 * _strlen_recursion - length of string
 * @s: string to count
 * Return: length of string
 */

int _strlen_recursion(char *s){

 return strlen(s);


 }

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
