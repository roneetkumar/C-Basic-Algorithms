#include <stdio.h>
#include <conio.h>
void main()
{
   int arr[30], a, i, j, n;
   //  clrscr();
   printf("Enter No Of Elements\t");
   scanf("%d", &n);
   printf("Enter Elements\n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   j = i - 1;
   i = 0;
   while (i < j)
   {
      a = arr[i];
      arr[i] = arr[j];
      arr[j] = a;
      i++;
      j--;
   }
   printf("Result After Reverse\n");
   for (i = 0; i < n; i++)
   {
      printf("%d\n", arr[i]);
   }
   getch();
}
