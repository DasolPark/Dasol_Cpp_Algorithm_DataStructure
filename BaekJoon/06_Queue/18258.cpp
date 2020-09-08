#include <bits/stdc++.h>
using namespace std;
const int MX = 2000009;
int dat[MX];
int head, tail;

void push(int val) {
  dat[tail++] = val;
}

void pop() {
  head++;
}

int size() {
  return tail - head;
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
      int add;
      cin >> add;
      push(add);
    } else if (op == "pop") {
      if (head == tail)
        cout << -1 << '\n';
      else {
        cout << dat[head] << '\n';
        pop();
      }
    } else if (op == "size") {
      cout << size() << '\n';
    } else if (op == "empty") {
      cout << (head == tail) << '\n';
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
  큐 2 (18258)

  O(N)

  Array를 사용하면 확실히 속도가 STL보다 더 빠르다.
  하지만, 메모리를 더 사용한다.
*/