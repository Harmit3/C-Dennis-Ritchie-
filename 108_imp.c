#include<stdio.h>

/*void fun(const int *ptr){
  *ptr=20;
}
int main(){
   const int i=10;
   fun(&i);
   return 0;
 }*/
 int main(){
    int i=10;
    int *ptr=&i;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%p\n",ptr);


    int j=20;
    int *ptr1=&j;
      printf("%d\n",*ptr1);
    printf("%d\n",ptr1);
    printf("%p\n",ptr1);
   return 0;
 }

