#include <bits/stdc++.h>
using namespace std;

int arr[26];  // Global 선언을 하면 자동으로 0으로 초기화 된다.

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int arr2[5];              // 쓰레기값으로 초기화
  int arr3[5] = {};         // 0으로 초기화
  int arr4[5];              // 쓰레값이므로,
  fill(arr4, arr4 + 5, 0);  // fill을 이용해 0으로 초기화

  for (int i = 0; i < 26; i++) cout << arr[i] << ' ';
  cout << '\n';
  for (int i = 0; i < 5; i++) cout << arr2[i] << ' ';
  cout << '\n';
  for (int i = 0; i < 5; i++) cout << arr3[i] << ' ';
  cout << '\n';
  for (int i = 0; i < 5; i++) cout << arr4[i] << ' ';
}
