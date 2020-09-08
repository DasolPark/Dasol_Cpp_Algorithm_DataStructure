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
  큐 2(10845)

  O(N)

  그냥 '큐' 문제와 다르게 명령어 개수가 더 크다.
  Array로 구현한 큐보다 속도면에서 떨어진다. 하지만, 메모리를 덜 사용한다.
*/