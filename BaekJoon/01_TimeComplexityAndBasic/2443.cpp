#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int row = n - 1; row >= 0; row--) {
    for (int col = 0; col < n - row - 1; col++) cout << ' ';
    for (int col = 0; col < 2 * row + 1; col++) cout << '*';
    cout << '\n';
  }
}

/*
  별 찍기 - 6(2443)

  O(N^2)
  
  n-1 ~ 0 으로 row 반복
  column은 정석 피라미드와 같은 구문

  *********
   *******
    *****
     ***
      *
*/