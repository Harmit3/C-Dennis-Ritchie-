#include<stdio.h>


int main()
{


    for(int i=0; i<3; i++)
    {

        int num;
        printf("Enter the number to check wheather it is paindrome or not");
        scanf("%d",&num);
        int result=0;
        int q=num;

        while(q!=0)
        {
            int reminder=q%10;
            result=result*10+reminder;
            q=q/10;
        }

        if(result==num)
        {
            printf("It's a palindrom.");
        }
        else
        {
            printf("It's not palindrom.");
        }

        printf("\n");
    }

    return 0;
}
