#include <stdio.h>
#include <conio.h>
void main()
{
       int arr[30], i, n, search;
       printf("Enter No Of Elements\t");
       scanf("%d", &n);
       printf("Enter Elements\n");
       for (i = 0; i < n; i++)
       {
              scanf("%d", &arr[i]);
       }
       printf("Enter The Element To Search\t");
       scanf("%d", &search);
       for (i = 0; i < n; i++)
       {
              if (arr[i] == search)
              {
                     printf("Element Is at %d Position", i + 1);
                     break;
              }
       }
       if (i == n)
       {
              printf("Element is Not Present in Array");
       }
       getch();
}