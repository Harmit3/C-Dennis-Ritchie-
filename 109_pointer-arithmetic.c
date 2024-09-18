#include<stdio.h>


int main(){
  /*int arr[]={1,2,3,4,5};
  int *p=&arr[0];
  printf("%d\n",p);
  p=p+3;
  printf("%d",p);*/

  /*int i=10;
  int *ptr=&i;
  printf("%d",*(ptr+3));*/

  int a[]={1,2,3,4,5};
  int b[]={10,20,30,40,50};
  int *p=&a[0];
  int *q=&b[3];
  printf("%d\n",p);
  printf("%d\n",q);
  printf("%d",q-p);

  return 0;
}
