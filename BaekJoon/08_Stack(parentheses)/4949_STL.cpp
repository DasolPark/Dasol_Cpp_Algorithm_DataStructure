#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);

  while (true) {
    string str;
    getline(cin, str);
    if (str == ".") break;
    stack<char> S;
    bool isValid = true;
    for (auto c : str) {
      if (c == '(' || c == '[') {
        S.push(c);
      } else if (c == ')') {
        if (S.empty() || S.top() != '(') {
          isValid = false;
          break;
        }
        S.pop();
      } else if (c == ']') {
        if (S.empty() || S.top() != '[') {
          isValid = false;
          break;
        }
        S.pop();
      }
    }
    if (S.empty() && isValid)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}

/*
  균형잡힌 세상(4949)

  O(N^2)

  위의 최종 코드로 인해 시간 0ms로 단축 & 코드 길이 단축
*/