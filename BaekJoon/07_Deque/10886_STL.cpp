#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  deque<int> D;
  int n;
  cin >> n;
  while (n--) {
    string q;
    cin >> q;
    if (q == "push_front") {
      int val;
      cin >> val;
      D.push_front(val);
    } else if (q == "push_back") {
      int val;
      cin >> val;
      D.push_back(val);
    } else if (q == "pop_front") {
      if (D.empty())
        cout << -1 << '\n';
      else {
        cout << D.front() << '\n';
        D.pop_front();
      }
    } else if (q == "pop_back") {
      if (D.empty())
        cout << -1 << '\n';
      else {
        cout << D.back() << '\n';
        D.pop_back();
      }
    } else if (q == "size")
      cout << D.size() << '\n';
    else if (q == "empty")
      cout << D.empty() << '\n';
    else if (q == "front") {
      if (D.empty())
        cout << -1 << '\n';
      else
        cout << D.front() << '\n';
    } else {
      if (D.empty())
        cout << -1 << '\n';
      else
        cout << D.back() << '\n';
    }
  }
}

/*
  덱(10886)

  O(N)
*/