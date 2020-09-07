#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  queue<int> Q;
  int n;
  cin >> n;
  while (n--) {
    string op;
    cin >> op;
    if (op == "push") {
      int add;
      cin >> add;
      Q.push(add);
    } else if (op == "pop") {
      if (Q.empty())
        cout << -1 << '\n';
      else {
        cout << Q.front() << '\n';
        Q.pop();
      }
    } else if (op == "size") {
      cout << Q.size() << '\n';
    } else if (op == "empty") {
      cout << Q.empty() << '\n';
    } else if (op == "front") {
      if (Q.empty())
        cout << -1 << '\n';
      else
        cout << Q.front() << '\n';
    } else {
      if (Q.empty())
        cout << -1 << '\n';
      else
        cout << Q.back() << '\n';
    }
  }
}

/*
  큐(10845)

  O(N)

  STL을 사용하면 메모리는 적게 쓰지만, 시간이 더 걸린다.
*/