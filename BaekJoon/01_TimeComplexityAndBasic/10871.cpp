#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, x, t;
  cin >> n >> x;
  while (n--) {  // ex) 10 to 1
    cin >> t;
    if (t < x) cout << t << ' ';
  }
}

/*
  X보다 작은 수(10871)

  O(N)
  n 증감을 이용해 0(false)전까지 반복한다
*/