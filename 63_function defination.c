#include<stdio.h>

int add(int,int); //function prototype/declaration

int main()
{
    int var1=20,var2=40,sum;
    sum=add(var1,var2);        //argument passed
    printf("Sum is %d",sum);
    return 0;
}

int add(int a,int b)  //function define  //parameter passed
{

    return (a+b);
}
