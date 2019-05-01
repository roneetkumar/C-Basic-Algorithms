#include <stdio.h>
#include <conio.h>
main()
{
  int arr[30], i, n, search, first, middle, last;
  // clrscr();
  printf("Enter No Of Elements\t");
  scanf("%d", &n);
  printf("Enter Elements\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter Element To Search\t");
  scanf("%d", &search);
  first = 0;
  middle = n - 1;
  last = (first + last) / 2;
  while (first <= last)
  {
    if (arr[middle] < search)
      first = middle + 1;
    else if (arr[middle] == search)
    {
      printf("%d Found At Location %d", search, middle + 1);
      break;
    }
    else
      last = middle - 1;
    middle = (first + last) / 2;
  }
  if (first > last)
  {
    printf("Element is Not Present in Array");
  }
  getch();
}