#include <stdio.h>
#include <conio.h>
void main()
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
  middle = (first + last) / 2;
  last = n - 1;
  while (first <= middle)
  {
    if (arr[last] < search)
      first = last + 1;
    else if (arr[last] == search)
    {
      printf("%d Found At Location %d", search, last + 1);
      break;
    }
    else
    {
      middle = (first + last) / 2;
      last = last - 1;
    }
  }
  if (first > middle)
  {
    printf("Element is Not Present in Array");
  }
  getch();
}