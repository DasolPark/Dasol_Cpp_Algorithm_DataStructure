#include <iostream>

using namespace std;

int main()
{
  int num[] = {1, 2, 3};           // 4byte
  char str[] = {'a', 'b', 'c'};    // 1byte
  long long longNum[] = {4, 5, 6}; // 8byte

  for (int i = 0; i < 3; i++)
  {
    printf("%d %p\n", num + i, num + i);
  }
  cout << endl;

  for (int i = 0; i < 3; i++)
  {
    printf("%d %p\n", str + i, str + i);
  }
  cout << endl;

  for (int i = 0; i < 3; i++)
  {
    printf("%d %p\n", longNum + i, longNum + i);
  }
  cout << endl;
}