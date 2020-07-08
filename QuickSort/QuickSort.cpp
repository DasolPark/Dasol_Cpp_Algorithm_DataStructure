#include <stdio.h>

const int NUM = 10;
int arr[NUM] = {5, 8, 2, 4, 9, 10, 1, 3, 6, 7};

void quickSort(int arr[], int start, int end)
{
  if (start >= end)
  { // 원소가 1개인 경우 return
    return;
  }

  int pivot = start; // pivot은 첫 번째 원소
  int i = start + 1;
  int j = end;
  int temp = 0;

  while (i <= j)
  { // 엇갈릴 때까지 반복
    while (arr[i] <= arr[pivot] && i <= end)
    { // pivot보다 큰 값을 만날 때까지 반복
      i++;
    }
    while (arr[j] >= arr[pivot] && j > start)
    { // pivot보다 작은 값을 만날 때까지 반복
      j--;
    }
    if (i > j)
    { // 엇갈린 상태라면 키 값과 교체
      temp = arr[j];
      arr[j] = arr[pivot];
      arr[pivot] = temp;
    }
    else
    { // 아니라면 i와 j를 교체
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }

    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
  }
}

int main(void)
{
  quickSort(arr, 0, NUM - 1);

  for (int i = 0; i < NUM; i++)
    printf("%d ", arr[i]);
}