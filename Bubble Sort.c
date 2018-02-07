#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[30],i,n,a,b;
 clrscr();
 printf("Enter No Of Elements\t");
 scanf("%d",&n);
 printf("Enter %d Integers\n",n);
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
  for(i=0;i<(n-1);i++)
   {
    for(b=0;b<n-i-1;b++)
    {
     if(arr[b]>arr[b+1])
     {
      a=arr[b];
      arr[b]=arr[b+1];
      arr[b+1]=a;
     }
    }
   }
  printf("Sorted List In Asending Order\n");
    for(i=0;i<n;i++)
     {
      printf("%d\n",arr[i]);
     }
getch();
}