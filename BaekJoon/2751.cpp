// 수 정렬하기 2

// Quick Sort
#include <stdio.h>

int arr[1000001] = {};
int n;

void swap(int *arr, int start, int end)
{
  int tmp = arr[start];
  arr[start] = arr[end];
  arr[end] = tmp;
}

int partition(int arr[], int start, int end)
{
  int pivot = arr[(start + end) / 2];

  while (start <= end)
  {
    while (arr[start] < pivot) // Descending (>)
      start++;
    while (arr[end] > pivot) // Descending (<)
      end--;
    if (start <= end)
    {
      swap(arr, start, end);
      start++;
      end--;
    }
  }

  return start;
}

void quickSort(int *arr, int start, int end)
{
  int part2 = partition(arr, start, end);
  if (start < part2 - 1)
  {
    quickSort(arr, start, part2 - 1);
  }
  if (part2 < end)
  {
    quickSort(arr, part2, end);
  }
}

void print(int arr[])
{
  for (int i = 0; i < n; i++)
    printf("%d\n", arr[i]);
}

int main(void)
{

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  quickSort(arr, 0, n - 1);
  print(arr);

  return 0;
}