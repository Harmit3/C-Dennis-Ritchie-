#include<stdio.h>

void fun2(int n){

  if(n==0){
    return;
  }
  else{
    printf("%d ",n);
  }
  return fun2(n-1);
}
int main(){
  fun2(3);
  return 0;
}

