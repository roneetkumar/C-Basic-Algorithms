#include<stdio.h>
#include<conio.h>
void main()
 {
  int arr[30],i,n,a,b;
  clrscr();
  printf("Enter No Of Elements\t");
  scanf("%d",&n);
  printf("Enter Integers\n");
   for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
    {
     a=arr[i];
     b=i-1;
   while(a>arr[b] && b>=0)
      {
       arr[b+1]=arr[b];
       b=b-1;
      }
       arr[b+1]=a;
    }
     printf("Sorted List Is\n");
      for(i=0;i<n;i++)
       {
	printf("%d\n",arr[i]);
       }
  getch();
 }