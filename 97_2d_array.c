#include<stdio.h>

int main(){

 int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},
 {2,8,6,23,1},{15,7,3,2,9},
 {6,14,2,6,0}
 };

 int sum=0;

 printf("Rows total: ");
 for(int i=0;i<5;i++){
   sum=0;
   for(int j=0;j<5;j++){
     sum=sum+arr[i][j];
   }
   printf("%d ",sum);
 }


printf("\nColumns total: ");
 for(int j=0;j<5;j++){
   sum=0;
   for(int i=0;i<5;i++){
     sum=sum+arr[i][j];
   }
   printf("%d ",sum);
 }

  return 0;
}
