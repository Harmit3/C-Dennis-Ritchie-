#include<stdio.h>

int fact(int n){

  if(n==1){
    return 1;
  }
  else{
    return n*fact(n-1);
  }


}
int main(){

   printf("%d",fact(10));
    return 0;
}
