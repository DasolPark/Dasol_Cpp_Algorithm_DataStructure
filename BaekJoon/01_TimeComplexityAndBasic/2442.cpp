#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n - row - 1; col++) cout << ' ';
    for (int col = 0; col < 2 * row + 1; col++) cout << '*';
    cout << '\n';
  }
}

/*
  별 찍기 - 5(2442)
  
  O(N^2)

  0 ~ n-row-1까지 ' ' 출력
  2*n+1(홀수) 단위로 '*' 출력
      *
     ***
    *****
   *******
  *********
*/