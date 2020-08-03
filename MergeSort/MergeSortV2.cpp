// Java Code를 보고 C++로 변환했음

#include <stdio.h>

void merge(int *arr, int *tmp, int start, int mid, int end)
{
  for (int i = start; i <= end; i++)
  {
    tmp[i] = arr[i];
  }
  int part1 = start;
  int part2 = mid + 1;
  int index = start;

  while (part1 <= mid && part2 <= end)
  {
    if (tmp[part1] <= tmp[part2])
    {
      arr[index] = tmp[part1];
      part1++;
    }
    else
    {
      arr[index] = tmp[part2];
      part2++;
    }
    index++;
  }
  for (int i = 0; i <= mid - part1; i++)
  {
    arr[index + i] = tmp[part1 + i];
  }
}

void mergeSort(int *arr, int *tmp, int start, int end)
{
  if (start < end)
  {
    int mid = ((start + end) / 2);
    mergeSort(arr, tmp, start, mid);
    mergeSort(arr, tmp, mid + 1, end);
    merge(arr, tmp, start, mid, end);
  }
}

void print(int *arr, int num)
{
  for (int i = 0; i < num; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main(void)
{
  int arr[10] = {3, 9, 4, 7, 5, 0, 1, 6, 8, 2};
  int tmp[sizeof(arr) / sizeof(int)] = {}; // Java에서 arr.length로 대체 가능

  print(arr, sizeof(arr) / sizeof(int));
  mergeSort(arr, tmp, 0, (sizeof(arr) / sizeof(int)) - 1);
  print(arr, sizeof(arr) / sizeof(int));

  return 0;
}

// Result

// 9 1 5 3 4 8 2 6 7 0
// start: 0 mid: 4 end: 9
// start: 0 mid: 2 end: 4
// start: 0 mid: 1 end: 2
// start: 0 mid: 0 end: 1
// start: 3 mid: 3 end: 4
// start: 5 mid: 7 end: 9
// start: 5 mid: 6 end: 7
// start: 5 mid: 5 end: 6
// start: 8 mid: 8 end: 9
// 0 1 2 3 4 5 6 7 8 9

// 9 1 4 5 2 7 3 0 8 6
// Before: 9 1
// After: 1 9
// Before: 1 9 4
// After: 1 4 9
// Before: 5 2
// After: 2 5
// Before: 1 4 9 2 5
// After: 1 2 4 5 9
// Before: 7 3
// After: 3 7
// Before: 3 7 0
// After: 0 3 7
// Before: 8 6
// After: 6 8
// Before: 0 3 7 6 8
// After: 0 3 6 7 8
// Before: 1 2 4 5 9 0 3 6 7 8
// After: 0 1 2 3 4 5 6 7 8 9
// 0 1 2 3 4 5 6 7 8 9