#include <bits/stdc++.h>
using namespace std;
int arr[21];
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  for (int i = 1; i <= 20; i++) arr[i] = i;
  for (int i = 0; i < 10; i++) {
    int a, b;
    cin >> a >> b;
    while (a < b) {
      int temp = arr[a];
      arr[a++] = arr[b];
      arr[b--] = temp;
    }
  }
  for (int i = 1; i <= 20; i++) cout << arr[i] << ' ';
}

/*
  카드 역배치(10804)

  O(N^2)
  범위를 받은 후 두 범위가 서로 만나기 전까지 각 범위를 증가 또는 감소시키며 배열의 값을 Swap
*/