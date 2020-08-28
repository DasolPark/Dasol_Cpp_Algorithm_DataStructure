#include <bits/stdc++.h>
using namespace std;

int freq[26];
int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  string s;
  cin >> s;

  for (auto e : s)
    freq[e - 'a']++;
  for (int i = 0; i < 26; i++) cout << freq[i] << ' ';
}

/*
  알파벳 개수(10808)

  O(N)
  a~z == 97~122 라는 아스키코드를 이용해 알파벳을 셀 수 있다
  freq[26]를 전역에 선언하여 0을 초기화 후 매번 알파벳마다 -'a'를 해줘서 0~26까지 해당 알파벳의 count를 증가시켜줄 수 있다.
*/

/* 2. 아직 O(N^2)이지만, 따로 알파벳 배열을 저장하지 않고 아스키코드를 이용해 for loop 사용*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  string s;
  cin >> s;

  for (char a = 'a'; a <= 'z'; a++) {
    int cnt = 0;
    for (auto c : s)
      if (a == c) cnt++;
    cout << cnt << ' ';
  }
}
*/

/* 1. 쓸 데 없이 많은 변수를 이용했다 O(N^2) */
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int r[26] = {};
  string s;

  fill(r, r + 26, 0);

  getline(cin, s);

  for (int i = 0; i < s.length(); i++)
    for (int j = 0; j < 26; j++)
      if (s[i] == a[j]) r[j]++;

  for (int i = 0; i < 26; i++) cout << r[i] << ' ';
}
*/