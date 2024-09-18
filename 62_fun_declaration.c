#include<stdio.h>

char fun();  //function declaration

int main()
{

    char c=fun();
    printf("Charcater is %c",c);


    return 0;
}

char fun()
        //function defination
    {
        return 'a';
    }
