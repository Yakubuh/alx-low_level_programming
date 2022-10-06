#include <stdio.h>
#include <stdlib.h>


int multplication(){
int num1;
int num2;
int mul;

mul = num1*num2;

printf("%d \n", mul);

if (mul != num1*num2 )
{
printf("Error \n");

return (98);

}


}

int main()
{

 multplication(10,20);

    return 0;
}

