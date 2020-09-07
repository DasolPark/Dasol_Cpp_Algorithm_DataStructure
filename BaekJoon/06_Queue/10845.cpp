#include <bits/stdc++.h>
using namespace std;

int const MX = 1000005;
int dat[MX];
int head, tail;

void push(int val) {
  dat[tail++] = val;
}

void pop() {
  head++;
}

int front() {
  return dat[head];
}

int back() {
  return dat[tail - 1];
}

int main(void) {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int n;
  cin >> n;
  while (n--) {
    string op;
    cin >> op;
    if (op == "push") {
      int X;
      cin >> X;
      push(X);
    } else if (op == "pop") {
      if (head == tail)
        cout << -1 << '\n';
      else {
        cout << front() << '\n';
        pop();
      }
    } else if (op == "size") {
      cout << tail - head << '\n';
    } else if (op == "empty") {
      cout << (head == tail) << '\n';  // 사용법 주목
    } else if (op == "front") {
      if (head == tail)
        cout << -1 << '\n';
      else
        cout << front() << '\n';
    } else {
      if (head == tail)
        cout << -1 << '\n';
      else
        cout << back() << '\n';
    }
  }
}

/*
  큐(10845)

  O(N)

  true or false로 출력하는 방법!

  Array로 Queue를 만들어서 적용하면 메모리는 더 쓰지만 시간은 STL보다 단축된다.
*/