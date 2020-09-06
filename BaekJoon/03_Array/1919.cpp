#include <bits/stdc++.h>
using namespace std;
int alp[26];
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  string a, b;
  int count = 0;
  cin >> a >> b;
  for (auto c : a) alp[c - 'a']++;
  for (auto c : b) alp[c - 'a']--;
  for (auto n : alp) count += abs(n);

  cout << count;
}

/*
  애너그램 만들기(1919)

  첫 번째 줄 string의 알파벳을 먼저 파악하고, 두 번째 줄 string에 만약 같은 알파벳이 있다면 빼준다. 같은 알파벳이 없을 경우 -값이 발생하므로, count에 저장할 때는 abs(절대값)을 이용하여 저장해주면 된다
*/