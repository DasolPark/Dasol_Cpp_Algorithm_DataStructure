#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  string init;
  cin >> init;

  list<char> L;
  for (auto c : init) L.push_back(c);
  auto cursor = L.end();

  int q;
  cin >> q;
  while (q--) {
    char op;
    cin >> op;

    if (op == 'P') {
      char add;
      cin >> add;
      L.insert(cursor, add);
    } else if (op == 'L') {
      if (cursor != L.begin()) cursor--;
    } else if (op == 'D') {
      if (cursor != L.end()) cursor++;
    } else {
      if (cursor != L.begin()) {
        cursor--;
        cursor = L.erase(cursor);
      }
    }
  }

  for (auto c : L) cout << c;
}

/*
  에디터(1406)

  O(N)
  list.begin()은 첫 노드를, list.end()는 마지막노드의 오른쪽 노드를 가리킨다(?)
  insert(interator, value)는 실행 후 iterator를 1만큼 증가시킴(즉, 오른쪽 노드로 이동)
  erase(iterator)는 지운 후 오른쪽 노드를 반환
*/