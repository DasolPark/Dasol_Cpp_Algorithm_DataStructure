#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  stack<int> S;
  int k;
  cin >> k;
  while (k--) {
    int add;
    cin >> add;
    if (add == 0) {
      S.pop();
    } else {
      S.push(add);
    }
  }

  int sum = 0;
  while (!S.empty()) {
    sum += S.top();
    S.pop();
  }
  cout << sum;
}

/*
  제로(10773)

  O(N)
  empty() return empty ? 1 : 0;
*/