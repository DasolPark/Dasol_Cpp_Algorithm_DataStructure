#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  stack<int> S;
  int n;
  cin >> n;
  while (n--) {
    string op;
    cin >> op;
    if (op == "push") {
      int add;
      cin >> add;
      S.push(add);
    } else if (op == "pop") {
      if (S.empty())
        cout << -1 << '\n';
      else {
        cout << S.top() << '\n';
        S.pop();
      }
    } else if (op == "size") {
      cout << S.size() << '\n';
    } else if (op == "empty") {
      cout << S.empty() << '\n';
    } else {
      if (S.empty())
        cout << -1 << '\n';
      else
        cout << S.top() << '\n';
    }
  }
}

/*
  스택(10828)

  STL Stack 이용하기
  스택이 비어있을 때, pop() or top()을 사용하면 안 된다. Runtime Error
  push() return 없음
  pop() return 없음
  empty() true 1 false 0
  top() 있으면 값 없으면 공백(?)
  size() return size
*/