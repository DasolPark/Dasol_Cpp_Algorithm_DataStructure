// Bubble Sort ( O(n^2) )

#include <stdio.h>

int main(void)
{
  int arr[10] = {10, 8, 5, 2, 9, 6, 7, 3, 1, 4};
  int i, j;
  int lesser;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        lesser = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = lesser;
      }
    }
  }

  for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);
}