#include<stdio.h>
int fun(){
  int num=16;
  return num--;
}
int main(){
   for(fun();fun();fun())
   printf("%d\n",fun());
   return 0;
}
