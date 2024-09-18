#include<stdio.h>


int main(){
  int a[]={5,16,7,89,45,32,23,10};
  int *p=&a[1],*q=&a[5];
 // int *p=&a[2];
 // printf("%d\n",*(--p));
  //printf("%d\n",*(p--));
  //printf("%d\n",*p);
  //printf("%d\n",*p);
  //printf("%d\n",*p-0);


  printf("%d\n",*(p+3));
  printf("%d\n",*(q-3));
  printf("%d\n",q-p);
  printf("%d\n",p<q);
  printf("%d\n",*p<*q);
  return 0;
}
