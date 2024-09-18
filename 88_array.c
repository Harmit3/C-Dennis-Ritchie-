#include<stdio.h>
#define N 10
int main(){

 int arr[N];
 printf("Enter the elements to enter in the array\n");
 for(int i=0;i<N;i++){
     scanf("%d",&arr[i]);
 }

 printf("So you entered the elemenets in the array are as following\n");
 for(int i=0;i<N;i++){
   printf("%d  ",arr[i]);
 }


   return 0;
}
