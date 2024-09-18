#include<stdio.h>


int main(){

  for(int number=1;number<200000;number++){

     int rem,i,summ=0;
     for(i=1;i<number;i++){
        rem=number%i;
        if(rem==0){
          summ=summ+i;
        }
     }

     if(number==summ){
        printf("%d\n",number);
     }

  }


  return 0;
}
