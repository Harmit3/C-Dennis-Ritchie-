#include<stdio.h>


int main()
{
    for(int j=1; j<=10000000; j++)
    {
        int q=j;
        int count=0;
        while(q!=0)
        {
            q=q/10;
            count++;
        }
        int cnt=count;
        q=j;
        int sum=0;
        int mul=1;
        while(q!=0)
        {
            int last_digit=q%10;
            while(cnt!=0)
            {
                mul=mul*last_digit;
                cnt--;
            }
            sum=sum+mul;
            cnt=count;
            q=q/10;
            mul=1;
        }

        if(sum==j)
        {
            printf("%d\n",j);
        }
    }
    return 0;
}
