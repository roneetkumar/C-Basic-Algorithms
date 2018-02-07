#include<stdio.h>
#include<conio.h> 
void main() 
{
   int arr1[30],arr2[30],i,n;
   printf("\nEnter no of elements:");
   scanf("%d",&n);
   printf("Enter the values:\n");
   for (i=0;i<n;i++) 
   {
      scanf("%d",&arr1[i]);
   }
   for (i=0;i<n;i++) {
      arr2[i] = arr1[i];
   }
   printf("The copied array is :");
   for (i = 0; i < num; i++)
      printf("arr2[%d] = %d\n", i, arr2[i]);
getch();
}