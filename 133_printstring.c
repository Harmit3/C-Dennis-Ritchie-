#include<stdio.h>

int main(){
  char *ptr="Hello World!";
  printf("%.5s\n",ptr);
  printf("%6.5s\n",ptr);

  puts(ptr);  //create a new line itself
  puts(ptr);
  printf("%s",ptr);
  return 0;
}
