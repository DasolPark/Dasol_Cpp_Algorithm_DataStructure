#include <bits/stdc++.h>
using namespace std;

int main(void) {
  stack<int> S;
  S.push(10);                // 10
  S.push(20);                // 10 20
  S.push(30);                // 10 20 30
  cout << S.size() << '\n';  // 3
  if (S.empty())
    cout << "S is empty\n";
  else
    cout << "S is not empty\n";
  S.pop();                  // 10 20
  cout << S.top() << '\n';  // 20
  S.pop();
  cout << S.top() << '\n';                // 10
  S.pop();                                // empty
  if (S.empty()) cout << "S is empty\n";  // S is empty
  cout << S.top() << '\n';                // Runtime Error
}

/*
  Stack이 비어 있을 때, pop() or top() 명령어를 실행하면 Runtime Error
*/