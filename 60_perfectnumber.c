#include <stdio.h>

int main()
{
    int rem,i,sum=0;
    for(int j=1; j<1000; j++)
    {
        //int number;
        //printf("Enter the number to check wheather it is perfect number or not!\n");
        //scanf("%d",&number);
       // number=j;

        for(i=1; i>=j; i++)
        {
            rem=j%i;
            if(rem==0)
            {
                sum=sum+i;
            }
        }
        if(sum==j){
            printf("%d  ",sum);
        }

        /*if(sum==number){
           printf("%d is a perfect number",sum);
        }
        else{
           printf("%d is not a perfect number",number);
        }
        */

    }

    return 0;
}
