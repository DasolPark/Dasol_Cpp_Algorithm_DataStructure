#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, a, b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << a + b << '\n';
  }
}

/*
  빠른 A+B(15552)

  O(N)

  그냥 풀라는 대로 풀면 된다
*/