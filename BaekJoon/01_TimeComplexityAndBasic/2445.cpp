#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int row = 0; row < n; row++) {
    for (int col = 0; col <= row; col++) cout << '*';
    for (int col = 0; col < n - row - 1; col++) cout << ' ';
    for (int col = 0; col < n - row - 1; col++) cout << ' ';
    for (int col = 0; col <= row; col++) cout << '*';
    cout << '\n';
  }
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n - row - 1; col++) cout << '*';
    for (int col = 0; col <= row; col++) cout << ' ';
    for (int col = 0; col <= row; col++) cout << ' ';
    for (int col = 0; col < n - row - 1; col++) cout << '*';
    cout << '\n';
  }
}

/*
  별 찍기 - 8(2445)

  O(N^2)
  *        *
  **      **
  ***    ***
  ****  ****
  **********
  ****  ****
  ***    ***
  **      **
  *        *
*/