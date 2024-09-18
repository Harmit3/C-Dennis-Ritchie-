#include<stdio.h>
int *fun(){
  int i=10;
  return &i;
}
int main(){
 int *ptr=fun();
 printf("%d",*ptr);
 return 0;
}
/*
int *findMid(int a[],int n){
   return &a[n/2];
}
int main(){
  int a[]={11,21,36781,41,51};
  int n=sizeof(a)/sizeof(a[0]);
  int *mid = findMid(a,n);
  printf("%d",*mid);
  return 0;
}*/



