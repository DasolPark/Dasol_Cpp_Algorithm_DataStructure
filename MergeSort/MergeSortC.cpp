#include <stdio.h>

const int NUM = 8;
int sorted[8] = {};

void merge(int a[], int n, int mid, int m)
{
  int i = n;
  int j = mid + 1;
  int k = n;

  while (i <= mid && j <= m)
  {
    if (a[i] <= a[j])
    {
      sorted[k] = a[i];
      i++;
    }
    else
    {
      sorted[k] = a[j];
      j++;
    }
    k++;
  }
  if (i > mid)
  {
    for (int t = j; j <= m; j++)
    {
      sorted[k] = a[t];
      k++;
    }
  }
  else
  {
    for (int t = i; i <= mid; i++)
    {
      sorted[k] = a[t];
      k++;
    }
  }

  for (int t = n; t <= m; t++)
    a[t] = sorted[t];
}

void mergeSort(int a[], int n, int m)
{
  if (n < m)
  {
    int mid = (n + m) / 2;
    mergeSort(a, n, mid);
    mergeSort(a, mid + 1, m);
    merge(a, n, mid, m);
  }
}

int main(void)
{
  int arr[NUM] = {7, 6, 5, 8, 3, 5, 9, 1};
  mergeSort(arr, 0, NUM - 1);
  for (int i = 0; i < NUM; i++)
    printf("%d ", arr[i]);
}
