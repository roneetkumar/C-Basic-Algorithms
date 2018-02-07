#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[30],i,n,elements,location;
 clrscr();
 printf("Enter No Of Elements\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
 printf("Enter Element That To Be Insert\n");
 scanf("%d",&elements);
 printf("Enter Location");
 scanf("%d",&location);
 for(i=n;i>=location;i--)
  {
   arr[i]=arr[i-1];
  }
 n++;
 arr[location-1]=elements;
 for(i=0;i<n;i++)
  {
   printf("%d\n",arr[i]);
  }
getch();
}






