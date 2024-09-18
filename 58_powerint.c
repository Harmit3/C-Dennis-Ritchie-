#include<stdio.h>


int main(){

  int base,exponent;
  printf("Enter the base");
  scanf("%d",&base);
  printf("Enterthe exponent");
  scanf("%d",&exponent);

  int power=1,expo=exponent;
  double power1=1.0;

  if(exponent>0){
     while(exponent!=0){
        power=base*power;
        exponent--;
     }
     printf("%d power %d is %d\n",base,expo,power);

  }
  else if(exponent<0){
     while(exponent!=0){
        power1=power1*(1.0/base);
        exponent++;
     }
     printf("%d power %d is %.10f\n",base,expo,power1);

  }
  else{
    printf("%d\n",power);
  }

   return 0;
}
