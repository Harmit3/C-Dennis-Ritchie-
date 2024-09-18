#include<stdio.h>


int swap(int *ptr1,int *ptr2) //call by refrence
{
    *ptr1=20;
    *ptr2=10;
}
int add(int a,int b) //call by values
{
    a=20;
    b=10;
}

int main()
{
    int a=10,b=20;
    int x=10,y=20;
    add(a,b);
    printf("a is %d and b is %d\n",a,b); //call by values
    swap(&x,&y);
    printf("x is %d and y is %d\n",x,y); //call by refrence
    return 0;
}
