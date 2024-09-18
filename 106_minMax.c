#include<stdio.h>

void minMax(int arr[],int length,int *min,int *max){
  *min=*max=arr[0];
  for(int i=1;i<length;i++){
     if(arr[i]<*min){
        *min=arr[i];
     }
     if(arr[i]>*max){
       *max=arr[i];
     }
  }



}
int main(){
  int a[]={23,4,21,86,987,45,32,10,123,986,50,3,2,5,1000,0,-5};
  int min,max;
  int length=sizeof(a)/sizeof(a[0]);
  minMax(a,length,&min,&max);
  printf("Minimum value in the array is %d and Maximum value is %d",min,max);
  return 0;
}
