// Merge Sort ( O(n log n) )
// sorted array를 만들어 메모리를 추가적으로 사용해야하는 단점

#include <stdio.h>

const int NUM = 8;
int sorted[NUM] = {};

void merge(int arr[], int first, int mid, int last)
{
  int i = first;
  int j = mid + 1;
  int k = first;

  while (i <= mid && j <= last)
  {
    if (arr[i] <= arr[j]) // Descending( > )
    {
      sorted[k] = arr[i];
      i++;
    }
    else
    {
      sorted[k] = arr[j];
      j++;
    }
    k++;
  }
  if (i > mid)
  {
    for (int t = j; t <= last; t++)
    {
      sorted[k] = arr[t];
      k++;
    }
  }
  else
  {
    for (int t = i; t <= mid; t++)
    {
      sorted[k] = arr[t];
      k++;
    }
  }

  for (int t = first; t <= last; t++)
    arr[t] = sorted[t];
}

void mergeSort(int arr[], int first, int last)
{
  if (first < last)
  {
    int mid = (first + last) / 2;
    mergeSort(arr, first, mid);
    mergeSort(arr, mid + 1, last);
    merge(arr, first, mid, last);
  }
}

int main(void)
{
  //int arr[NUM] = {7,6,5,8,3,5,9,1};
  int arr[NUM] = {8, 7, 6, 5, 4, 3, 2, 1};

  mergeSort(arr, 0, NUM - 1);

  for (int i = 0; i < NUM; i++)
    printf("%d ", arr[i]);
  printf("\n");
}