#include <bits/stdc++.h>
using namespace std;

int freq[26];
int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  string s;
  cin >> s;

  for (auto e : s) freq[e - 'a']++;
  for (auto n : freq) cout << n << ' ';
}

/*
  알파벳 개수(10808)

  O(N)
  a~z == 97~122 라는 아스키코드를 이용해 알파벳을 셀 수 있다
  freq[26]를 전역에 선언하여 0을 초기화 후 매번 알파벳마다 -'a'를 해줘서 0~26까지 해당 알파벳의 count를 증가시켜줄 수 있다.
*/