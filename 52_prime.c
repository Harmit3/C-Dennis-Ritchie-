#include<stdio.h>

int main(){

  int number;
  printf("Enter the positive number only to check WHETHER IT IS PRIME NUMBER OR NOT\n");
  scanf("%d",&number);


  int x=number;
  int count=0;
  int sqr=ceil(sqrt(number));

  for(int i=2;i<=sqr;i++){
     if(x%i==0){
        count=1;
     }
  }

  if((count==0 && x!=1) || x==2 || x==3){
    printf("It is a prime number");
  }
  else{
     printf("It is not a prime number");
  }

return 0;


}
