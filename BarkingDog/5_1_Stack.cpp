#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
  dat[pos++] = x;
}

void pop() {
  pos--;  // 다음 push에서 알아서 변경되니 굳이 값은 건들지 않는다
}

int top() {
  return dat[pos - 1];
}

void test() {
  push(5);
  push(4);
  push(3);
  cout << top() << '\n';  // 3
  pop();
  pop();
  cout << top() << '\n';  // 5
  push(10);
  push(12);
  cout << top() << '\n';  // 12
  pop();
  cout << top() << '\n';  // 10
}

int main() {
  test();
}