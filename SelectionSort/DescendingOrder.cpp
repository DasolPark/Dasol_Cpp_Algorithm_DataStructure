#include <iostream>

using namespace std;

int main(void)
{
  int arr[6] = {0, 1, 3, 2, 4, 5};
  int i, j;
  int indexOfMax;
  int max;

  for (i = 1; i <= 4; i++)
  {
    indexOfMax = i;
    for (j = i + 1; j <= 5; j++)
    {
      if (arr[j] > arr[indexOfMax])
        indexOfMax = j;
    }
    max = arr[indexOfMax];
    arr[indexOfMax] = arr[i];
    arr[i] = max;
  }

  for (i = 1; i <= 5; i++)
    cout << arr[i] << " ";

  return 0;
}