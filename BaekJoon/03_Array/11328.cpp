#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    int arr[26] = {};
    bool isPossible = true;
    string a, b;
    cin >> a >> b;
    for (auto c : a) arr[c - 'a']++;
    for (auto c : b) arr[c - 'a']--;
    for (auto num : arr)
      if (num != 0) isPossible = false;
    cout << (isPossible ? "Possible" : "Impossible") << '\n';
  }
}

/*
  Strfry(11328)

  O(N^2)
  각 문자의 알파벳 구성을 파악하고, 다르다면 Impossible
*/