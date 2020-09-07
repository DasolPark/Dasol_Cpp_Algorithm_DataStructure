#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos;

void push(int val) {
  dat[pos++] = val;
}

void pop() {
  pos--;
}

int top() {
  return dat[pos - 1];
}

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    string op;
    cin >> op;
    if (op == "push") {
      int add;
      cin >> add;
      push(add);
    } else if (op == "pop") {
      if (pos == 0)
        cout << -1 << '\n';
      else {
        cout << top() << '\n';
        pop();
      }
    } else if (op == "size") {
      cout << pos << '\n';
    } else if (op == "empty") {
      cout << (int)(pos == 0) << '\n';
    } else if (op == "top") {
      if (pos == 0)
        cout << -1 << '\n';
      else
        cout << top() << '\n';
    }
  }
}

/*
  스택(10828)

  배열로 스택구조를 만들어 사용

  (int)(pos == 0)의 true는 1 false는 0
*/