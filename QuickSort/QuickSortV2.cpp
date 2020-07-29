#include <stdio.h>

void swap(int *arr, int start, int end)
{
  int tmp = arr[start];
  arr[start] = arr[end];
  arr[end] = tmp;
}

int partition(int *arr, int start, int end)
{
  int pivot = arr[(start + end) / 2];
  while (start <= end)
  {
    while (arr[start] < pivot) // pivot값보다 큰 값 찾기
      start++;
    while (arr[end] > pivot) // pivot값보다 작은 값 찾기
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
  int part2 = partition(arr, start, end); // part2의 첫 번째 index return
  if (start < part2 - 1)                  // 정렬할 값이 1개 이상이라면 실행
  {
    quickSort(arr, start, part2 - 1);
  }
  if (part2 < end)
  {
    quickSort(arr, part2, end);
  }
}

void print(int *arr)
{
  for (int i = 0; i < 10; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main(void)
{
  int arr[10] = {3, 9, 4, 7, 5, 0, 1, 6, 8, 2};

  print(arr);
  quickSort(arr, 0, 9);
  print(arr);
}