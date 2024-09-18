#include<stdio.h>


int main()
{

    int var1,var2;
    printf("Enter the two positive variable to get a sum of that:");
    scanf("%d %d",&var1,&var2);

    int carry,sum;

    while(var2!=0){

        sum=var1^var2;
        carry=(var1&var2)<<1;
        var1=sum;
        var2=carry;
    }

    printf("Sum is %d",sum);


    /*if(var2>0)
    {
        while(var2!=0)
        {
            var1++;
            var2--;
        }

        printf("Sum is %d",var1);

    }

    else if(var2<0)
    {
        while(var2!=0)
        {
            var1--;
            var2++;
        }

        printf("Sum is %d",var1);

    }*/


    return 0;
}
