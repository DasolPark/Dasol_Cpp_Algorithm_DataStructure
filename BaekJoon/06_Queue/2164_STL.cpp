#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  queue<int> Q;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) Q.push(i);
  while (Q.size() != 1) {
    Q.pop();
    Q.push(Q.front());
    Q.pop();
  }
  cout << Q.front() << '\n';
}

/*
  카드2(2164)

  O(N)

  역시 STL Queue가 속도면에서 느리고 메모리를 덜 쓴다.
*/