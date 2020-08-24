// Selection Sort( O(n^2) )

#include <iostream>

using namespace std;

int main(void)
{
  int arr[6] = {0, 5, 3, 2, 4, 1};
  int i, j;
  int indexOfMin;
  int lesser;

  for (i = 1; i <= 4; i++)
  {
    indexOfMin = i;
    for (j = i + 1; j <= 5; j++)
    {
      if (arr[j] < arr[indexOfMin])
      {
        indexOfMin = j;
      }
    }
    lesser = arr[indexOfMin];
    arr[indexOfMin] = arr[i];
    arr[i] = lesser;
  }

  for (i = 1; i <= 5; i++)
  {
    cout << arr[i] << "\n";
  }

  return 0;
}