#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[30],i,n,location;
 clrscr();
 printf("Enter No of Elements\t");
 scanf("%d",&n);
 printf("Enter Elements\n");
 for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
 printf("Enter The Location For Deletion\t");
 scanf("%d",&location);
 for(i=n;i>location;location++)
  {
   arr[location-1]=arr[location];
  }
  n--;
 for(i=0;i<n;i++)
  {
   printf("%d\n",arr[i]);
  }
getch();
}





