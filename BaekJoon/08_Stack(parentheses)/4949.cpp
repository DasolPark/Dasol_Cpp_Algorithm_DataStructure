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

int empty() {
  return pos == 0;
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);

  while (true) {
    string str;
    getline(cin, str);
    if (str == ".") break;
    pos = 0;
    bool isValid = true;
    for (auto c : str) {
      if (c == '(' || c == '[') {
        push(c);
      } else if (c == ')') {
        if (empty() || top() != '(') {
          isValid = false;
          break;
        }
        pop();
      } else if (c == ']') {
        if (empty() || top() != '[') {
          isValid = false;
          break;
        }
        pop();
      }
    }
    if (empty() && isValid)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}

/*
  균형잡힌 세상(4949)

  O(N^2)

  array stack를 사용하니까 메모리가 STL보다 더 쓰인다. 하지만 속도는 좋은듯
*/