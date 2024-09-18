#include<stdio.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int main()
{
    int n;
    printf("Print the rows that you want\n");
    scanf("%d",&n);
    int originalN=n+1;
    n=2*n;
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n; col++)
        {
            int everyindex=originalN-MIN(MIN(row,col),MIN(n-row,n-col));
            printf("%d ",everyindex);
        }
        printf("\n");
    }


    return 0;

}

/* for(int row=0;row<n;row++){
     for(int col=0;col<n;col++){
         int everyindex=MIN(MIN(row,col),MIN(n-row,n-col));
         printf("%d ",everyindex);
     }
     printf("\n");
 }



 return 0;
}

  for(int row=0;row<2*n;row++){
        int total_col=row>n?2*n-row:row;
    for(int col=0;col<total_col;col++){
        printf("*");
    }
    printf("\n");
  }

 for(int row=0;row<2*n;row++)
 {
     int total_col=row>n?2*n-row:row;
     int spaces=n-total_col;
     for(int star=0;star<spaces;star++){
         printf(" ");
     }
     for(int col=0;col<total_col; col++)
     {
         printf("*");
     }

     printf("\n");

 }

 for(int row=1; row<2*n; row++)
 {
     int totalcolumn=row>n?2*n-row:row;
     int totalspace=n-totalcolumn;
     for(int space=1;space<=totalspace; space++)
     {
         printf("  ");
     }
     for(int col=totalcolumn; col>=1; col--)
     {
         printf("%d",col);

     }
     for(int i=2;i<=totalcolumn; i++){

           printf("%d",i);

     }

     printf("\n");
 }

 return 0;
}
*/
