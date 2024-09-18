#include<stdio.h>


int main()
{

    for(int i=1; i<=10000000; i++)
    {

        int number=i;
        int count=0,cnt;

        while(number!=0)
        {
            number=number/10;
            count++;
        }
        cnt=count;
        number=i;
        int totalsum=0;


        for(int i=1; i<=cnt; i++)
        {
            while(number!=0)
            {
                int rem=number%10;
                int sum=1;
                for(int j=rem; j>=1; j--)
                {
                    sum=sum*j;
                }
                number=number/10;
                totalsum=totalsum+sum;
            }
        }

        if(i==totalsum){
            printf("%d\n",totalsum);
        }

    }

    return 0;
}

/* printf("Check wheather the number is strong or not!!");
 int n;
 scanf("%d",&n);

 int q=n;
 int count=0;
 int cnt;

 while(q!=0)
 {
     q=q/10;
     count++;
 }
 cnt=count;
 q=n;

 int totalsum=0;

 for(int i=1; i<=cnt; i++)
 {
     while(q!=0)
     {
         int rem=q%10;
         int sum=1;
         for(int j=rem; j>=1; j--)
         {
             sum=sum*j;
         }
         q=q/10;
         totalsum=totalsum+sum;
     }
 }


 if(n==totalsum)
 {
     printf("It is strong number..");
 }
 else
 {
     printf("It is not a strong number..sorry");
 }

 return 0;

}
*/
