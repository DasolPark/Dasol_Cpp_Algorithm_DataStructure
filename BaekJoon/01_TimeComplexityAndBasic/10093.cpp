#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  ll a, b;

  cin >> a >> b;
  if (a > b) swap(a, b);
  cout << (a == b ? 0 : b - a - 1) << "\n";
  for (ll i = a + 1; i < b; i++) cout << i << " ";
}

/*
  숫자(10093)

  O(N)
  생각해야할 조건
  1. A, B 입력이 오름차순으로 들어온다는 것은 보장 못함
  2. A, B 입력으로 같은 값이 들어올 수 있음(0 출력)
  3. 범위가 1 <= A, B <= 10^15이므로 int로 해결할 수 없음(long long으로 해결)
*/

/* 1. library 도움 없이 */
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  ll a, b;
  cin >> a >> b;
  if (a < b) {
    cout << b - a - 1 << "\n";
    for (ll i = a + 1; i < b; i++) cout << i << " ";
  } else if (a > b) {
    cout << a - b - 1 << "\n";
    for (ll i = b + 1; i < a; i++) cout << i << " ";
  } else {
    cout << 0;
  }
}
*/