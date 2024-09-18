/*#include<stdio.h>

int main(){
 int a[]={11,22,36,5,2};
 int *p;
 for(p=&a[4];p>=&a[0];p--){
   printf("%d  ",*p);
 }




  return 0;
}*/

#include<stdio.h>
#define N 10

int main(){

 int a[N],*p;
 printf("Enter %d elements for an array\n",N);
 for(p=a;p<=a+N-1;p++){
    scanf("%d",p);
 }

 printf("Reverse order is: \n");
 for(p=a+N-1;p>=a;p--){
    printf("%d ",*p);
 }


  return 0;

}
