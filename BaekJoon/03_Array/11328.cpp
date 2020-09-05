#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    int a[26] = {}, b[26] = {};
    string aIn, bIn;
    bool isPossible = true;
    cin >> aIn >> bIn;
    for (auto alp : aIn) a[alp - 'a']++;
    for (auto alp : bIn) b[alp - 'a']++;
    for (int i = 0; i < 26; i++) {
      if (a[i] != b[i]) {
        isPossible = false;
        break;
      }
    }
    cout << (isPossible ? "Possible" : "Impossible") << '\n';
  }
}

/*
  Strfry(11328)

  O(N^2)
  각 문자의 알파벳 구성을 파악하고, 다르다면 Impossible
*/