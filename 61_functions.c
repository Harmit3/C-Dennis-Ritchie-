#include<stdio.h>



int Area(int l,int w){
   int area=l*w;
   printf("Area of reactangular is: ");
   return area;
}
int main(){

   int length,width;
   printf("Enter the length and width to counnt the area of rectangular\n");
   scanf("%d %d",&length,&width);
   int area=Area(length,width);
   printf("%d",area);

   return 0;
}
