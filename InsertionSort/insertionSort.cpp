#include <iostream>

using namespace std;

int main(void)
{
  int arr[6] = {0, 5, 2, 3, 4, 1};
  int i, j;
  int key;

  for (i = 2; i <= 5; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j > 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }

  for (i = 1; i <= 5; i++)
    cout << arr[i] << "\n";
}