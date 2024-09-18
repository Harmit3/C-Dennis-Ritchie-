#include<stdio.h>

int func(int num){
  //int count=0;
  int count=2;
  while(num){
    count++;
    num>>=2;
   // num>>=1;
  }
  return(count);
}

int main(){

  int a=func(435);
  printf("%d",a);
  return 0;
}
