#include<stdio.h>

int main(){
 int n;
 printf("Enter the number for floyd's triangular rows\n");
 scanf("%d",&n);

 int count=1;

 for(int rows=1;rows<=n;rows++){
   for(int col=1;col<=rows;col++){
         printf("%d ",count);
         count++;
   }
   printf("\n");
 }

   return 0;
}
