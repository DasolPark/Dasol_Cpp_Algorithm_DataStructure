#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  while (n--) {
    string init;
    cin >> init;

    list<char> l;
    auto cursor = l.begin();

    for (auto c : init) {
      if (c == '<') {
        if (cursor != l.begin()) cursor--;
      } else if (c == '>') {
        if (cursor != l.end()) cursor++;
      } else if (c == '-') {
        if (cursor != l.begin()) {
          cursor--;
          cursor = l.erase(cursor);
        }
      } else {
        l.insert(cursor, c);
      }
    }

    for (auto c : l) cout << c;
    cout << '\n';
  }
}

/*
  키로거(5397)

  O(N^2)
  한 줄에 입력받은 문자열을 반복문을 이용해 한 문자씩 확인하는 방법으로 해결
  iterator가 중요한 역할을 한다
*/