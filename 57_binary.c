#include<stdio.h>


int main(){

  int decimal=0,binary,base=1,rem,num;

  printf("Enter the binary number\n");
  scanf("%d",&binary);

  num=binary;

  while(binary!=0){
    rem=binary%10;
    decimal=decimal+rem*base;
    binary=binary/10;
    base=base*2;
  }
  printf("Decimal equivalant of the binary number is %d is: %d\n",num,decimal);


   return 0;
}
`
