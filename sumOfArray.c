#include <stdio.h>
#include <conio.h>

int main()
{
   int i, arr[50], sum, num;
   printf("Enter no of elements:\n");
   scanf("%d", &num);
   printf("Enter the values:\n");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
   for (i = 0; i < num; i++)
      printf("a[%d]=%d\n", i, arr[i]);
   printf("Sum=%d\n", sum);
   getch();
}