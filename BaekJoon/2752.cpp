// 세 수 정렬하기

#include <stdio.h>

int arr[3] = {};

void selectionSort(int *arr)
{
  int i, j;
  int indexOfMin;
  int lesser;

  for (i = 0; i < 2; i++)
  {
    indexOfMin = i;
    for (j = i + 1; j < 3; j++)
    {
      if (arr[indexOfMin] > arr[j])
      {
        indexOfMin = j;
      }
    }
    if (indexOfMin != i)
    {
      lesser = arr[indexOfMin];
      arr[indexOfMin] = arr[i];
      arr[i] = lesser;
    }
  }
}

void print(int arr[])
{
  for (int i = 0; i < 3; i++)
    printf("%d ", arr[i]);
}

int main(void)
{
  for (int i = 0; i < 3; i++)
    scanf("%d", &arr[i]);

  selectionSort(arr);
  print(arr);

  return 0;
}