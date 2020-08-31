#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && b == c && c == a) {
    cout << 10000 + (a * 1000);
  } else if (a == b || a == c) {
    cout << 1000 + (a * 100);
  } else if (b == c) {
    cout << 1000 + (b * 100);
  } else {
    a > b ? (a > c ? cout << a * 100 : cout << c * 100) : (b > c ? cout << b * 100 : cout << c * 100);
  }
}

/* 
  주사위(2480)

  O(1)
  3개의 눈이 같을 경우
  (a == b && a == c)

  2개의 눈이 같을 경우
  (a == b) || (a == c) || (b == c)

  같은 눈이 없을 경우 배열의 마지막 값을 이용하면 된다(sort 되어 있으므로)
*/