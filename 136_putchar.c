#include<stdio.h>

int main(){
  int ch;
  for(ch='a';ch<='z';ch++){
    printf("%d ",ch);
    printf("%c ",ch);
    putchar(ch);
    printf("\n");
  }
  return 0;
}
