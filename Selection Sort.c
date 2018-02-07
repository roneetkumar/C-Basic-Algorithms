#include<stdio.h>
#include<conio.h>
 void main()
 {
 int arr[30],i,n,j,k;
 clrscr();
 printf("Enter No Of Elements\t");
 scanf("%d",&n);
 printf("Enter Integers\n");
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
  for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
     {
      if(arr[i]>arr[j])
       {
	k=arr[i];
	arr[i]=arr[j];
	arr[j]=k;
       }
     }
   }
   printf("Sorted LIst Is\n");
    for(i=0;i<n;i++)
     {
      printf("%d\n",arr[i]);
     }
  getch();
 }