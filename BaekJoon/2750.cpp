// 수 정렬하기

// Selection Sort
#include <stdio.h>

int arr[1001] = {};
int n;

void selectionSort(int *arr)
{
  int i, j;
  int indexOfMin;
  int lesser;

  for (i = 0; i < n - 1; i++)
  {
    indexOfMin = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[indexOfMin] > arr[j]) // if you want descending, use <
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
  for (int i = 0; i < n; i++)
    printf("%d\n", arr[i]);
}

int main(void)
{
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  selectionSort(arr);
  print(arr);

  return 0;
}

// Bubble Sort
// #include <stdio.h>

// int arr[1001]={};
// int n;

// void bubbleSort(int *arr){
// 	int i,j;
// 	int lesser;

// 	for(i=0; i<n; i++){
// 		for(j=0; j<n-1-i; j++){
// 			if(arr[j] > arr[j+1]){ // descending(<)
// 				lesser = arr[j+1];
// 				arr[j+1] = arr[j];
// 				arr[j] = lesser;
// 			}
// 		}
// 	}
// }

// void print(int arr[]){
// 	for(int i=0; i<n; i++) printf("%d\n", arr[i]);
// }

// int main(void){

// 	scanf("%d", &n);
// 	for(int i=0; i<n; i++) scanf("%d", &arr[i]);

// 	bubbleSort(arr);
// 	print(arr);

// 	return 0;
// }

// Insertion Sort
// #include <stdio.h>

// int arr[1001]={};
// int n;

// void insertionSort(int *arr){
// 	int i,j;
// 	int key;

// 	for(i=1; i<n; i++){
// 		key = arr[i];
// 		j=i-1;
// 		while(j >= 0 && arr[j] > key){ // Descending( arr[j] < key )
// 			arr[j+1] = arr[j];
// 			j--;
// 		}
// 		arr[j+1] = key;
// 	}
// }

// void print(int arr[]){
// 	for(int i=0; i<n; i++) printf("%d\n", arr[i]);
// }

// int main(void){

// 	scanf("%d", &n);
// 	for(int i=0; i<n; i++) scanf("%d", &arr[i]);

// 	insertionSort(arr);
// 	print(arr);

// 	return 0;
// }