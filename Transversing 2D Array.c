#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[30][30],i,j,n;
 clrscr();
 printf("Enter No Of Elements\t");
 scanf("%d",&n);
 printf("Enter Elements\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      scanf("%d",&arr[i][j]);
     }
   }
 printf("Elements Are\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      printf("%d\t",arr[i][j]);
     }
     printf("\n");
   }
 getch();
}










