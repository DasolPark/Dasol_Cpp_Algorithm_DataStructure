#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, k;
  cin >> n >> k;

  list<int> l;
  for (int i = 1; i <= n; i++) l.push_back(i);

  auto it = l.begin();
  cout << '<';
  while (n--) {
    int re = k - 1;
    while (re--) {
      if (it == l.end()) {
        it = l.begin();
        it++;
      } else {
        it++;
      }
    }
    if (it == l.end())
      it = l.begin();
    cout << *it;
    it = l.erase(it);
    if (n != 0) cout << ", ";
  }
  cout << '>';
}

/*
  요세푸스 문제

  O(N^2)
  Circular Linked List로 생각하고 풀면 쉽다.(단, list end()는 빈 노드 유의)
  it(iterator)를 k-1씩 증가시키면서 end()를 만나면 begin으로 재할당해주고 +1해준다.
  그런 후에도 마지막에 end()를 가리키고 있을 수 있으므로 다시 end()를 확인하고 맞다면 begin()으로 it에 할당해준다. 이렇게 최종 확인을 끝낸 후 값을 출력하고 해당 값을 erase()해주면 된다. it = list.erase(it)를 명심하자.
*/