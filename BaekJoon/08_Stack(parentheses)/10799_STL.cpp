#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  string str;
  cin >> str;
  int cnt = 0;
  stack<char> S;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '(') {
      S.push(str[i]);
    } else if (str[i] == ')' && str[i - 1] == '(') {
      S.pop();
      cnt += S.size();
    } else {
      S.pop();
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