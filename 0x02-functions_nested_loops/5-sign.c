#include<stdio.h>


int number(int num)
{



if (num == 0){

printf("%d", 0);
return 0;

}
else if (num >0){

printf("%d", 1);

return 1;

}

else{

printf("-");
return (-1);
}

}

int main()
{
int num = 5;
number(num);

return 0;
}

