#include <bits/stdc++.h>
using namespace std;

void diamond(int n) {
  int mid = (2 * n - 1) / 2;

  for (int row = 0; row < n; row++) {
    string level;
    for (int col = 0; col < 2 * n - 1; col++) {
      if (mid - row <= col && mid + row >= col) {
        level += '*';
      } else if (col < mid - row) {
        level += ' ';
      }
    }
    cout << level << '\n';
  }
}

void revDiamond(int n) {
  n--;
  int mid = (2 * n - 1) / 2;

  for (int row = n - 1; row >= 0; row--) {
    string level;
    level += ' ';
    for (int col = 0; col <= 2 * n - 1; col++) {
      if (mid - row <= col && mid + row >= col) {
        level += '*';
      } else if (col < mid - row) {
        level += ' ';
      }
    }
    cout << level << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  diamond(n);
  revDiamond(n);
}

/*
  별 찍기 - 7(2444)
      *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *
*/