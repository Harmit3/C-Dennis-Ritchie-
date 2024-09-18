#include<stdio.h>

int main(){
  char s[5]="Hello";
  char t[5];
  int i;
  for(i=0;s[i]!='\0';i++){
     t[i]=s[i];
  }
  //t[i]='\0';
  printf("%s",t);
  return 0;
}
