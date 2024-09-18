#include<stdio.h>

int input(char str[],int n){
  int ch,i=0;
  while((ch=getchar())!='\n'){
     if(i<n){
       str[i++]=ch;
     }

     str[i]='\0';
  }
  return i;
}

int main(){
 char s[100];
 int n=input(s,99);
 printf("%d %s",n,s);
 return 0;
}
