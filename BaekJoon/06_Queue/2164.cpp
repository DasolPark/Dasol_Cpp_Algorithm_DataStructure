#include <bits/stdc++.h>
using namespace std;
const int MX = 1000005;
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

int main(void) {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) push(i);
  while ((tail - head) != 1) {
    pop();
    push(front());
    pop();
  }
  cout << front();
}

/*
  카드2(2164)

  O(N)

  역시 STL보다 속도는 더 빠르지만 메모리는 더 쓴다.
*/