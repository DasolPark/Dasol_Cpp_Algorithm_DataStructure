#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

int push_front(int val) {
  dat[--head] = val;  // 포인트
}

int push_back(int val) {
  dat[tail++] = val;
}

void pop_front() {
  head++;
}

void pop_back() {
  tail--;
}

int front() {
  return dat[head];
}

int back() {
  return dat[tail - 1];
}

void test() {
}

int main(void) {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  test();
}