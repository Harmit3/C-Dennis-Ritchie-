#include<stdio.h>

int fun2(int n){
    if(n==1){
        return 0;
    }
    else{
        return 1+fun2(n/2);
    }
}

int main(){
  printf("%d ",fun2(8));
  return 0;
}

/*void fun2(int n){
  if(n==0){
    return;
  }
  fun2(n-1);
  printf("%d ",n);
}

int main(){
  fun2(3);
  return 0;
}*/
