#include<stdio.h>

int main(){

int a[9]={34,56,54,32,67,89,90,32,21};

for(int i=0;i<9;i++){
  printf("%d ",a[i]);
}

printf("\nReverse oreder is\n");
for(int i=8;i>=0;i--){
  printf("%d ",a[i]);
}



return 0;}
