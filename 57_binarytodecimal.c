#include<stdio.h>
#include<math.h>

int main()
{

    int n;
    printf("Enter the number as a binary to convert into decimal\n");
    scanf("%d",&n);

    int count=0,sum1=1,sum2=0,result1=0,result2=0,totalresult;
    int q=n;

    while(q!=0)
    {
        q=q/10;
        count++;
    }
    q=n;
    for(int i=0; i<count; i++)
    {
        int rem=q%10;
        int binary=pow(2,i);
        if(rem==1)
        {
            sum1=sum1*binary;
            result1=result1+sum1;


        }
        if(rem==0)
        {
            result2=0;

        }
       q=q/10;
    }
    totalresult=result1+result2;

    printf("%d",totalresult);

    return 0;
}
