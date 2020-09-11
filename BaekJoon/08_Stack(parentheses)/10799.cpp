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

int size() {
  return pos;
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  string str;
  cin >> str;
  int cnt = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '(') {
      push(str[i]);
    } else if (str[i] == ')' && str[i - 1] == '(') {
      pop();
      cnt += size();
    } else {
      pop();
      cnt += 1;
    }
  }
  cout << cnt;
}

/*
  쇠 막대기(10799)

  O(N)

  잘 풀었는지 모르겠다.
*/