#include<stdio.h>


int main()
{

  /*  int integer;
    printf("Enter the integer only\n");
    scanf("%d",&integer);

        while(integer!=0)
        {
            if(integer<0){
                break;
            }
            printf("Enter the integer only\n");
            scanf("%d",&integer);
        }*/

    int num=2;
    for(int i=1;i<=20;i++){
        if(num==i){
          num=num+2;
          continue;
        }
        printf("%d\n",i);
    }

    return 0;
}
