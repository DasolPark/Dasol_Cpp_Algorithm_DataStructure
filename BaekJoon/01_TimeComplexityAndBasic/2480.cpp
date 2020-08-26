#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a[3] = {};
  int count[3] = {0};

  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);

  if (a[0] == a[1] && a[0] == a[2])
    cout << 10000 + (a[0] * 1000) << endl;
  else if ((a[0] == a[1]) || (a[0] == a[2]))
    cout << 1000 + (a[0] * 100) << endl;
  else if (a[1] == a[2])
    cout << 1000 + (a[1] * 100) << endl;
  else
    cout << a[2] * 100 << endl;

  return 0;
}

/*
  3개의 눈이 같을 경우
  (a == b && a == c)

  2개의 눈이 같을 경우
  (a == b) || (a == c) || (b == c)

  같은 눈이 없을 경우 배열의 마지막 값을 이용하면 된다(sort 되어 있으므로)
*/