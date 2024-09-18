#include<stdio.h>


int main(){

  int n;
  printf("Enter the number till where you want to get fibonacci");
  scanf("%d",&n);
    int a=0,b=1,result,i;

  for(i=0;i<=n;i++){
    printf("%d ",a);
    result=a+b;
    a=b;
    b=result;

  }
  return 0;
}
