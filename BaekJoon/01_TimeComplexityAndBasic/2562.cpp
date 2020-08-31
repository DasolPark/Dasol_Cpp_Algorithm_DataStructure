#include <bits/stdc++.h>
#define N 9
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int indexOfMax = 0, a[N] = {};
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    if (a[indexOfMax] < a[i]) indexOfMax = i;
  }

  cout << a[indexOfMax] << '\n'
       << indexOfMax + 1;
}

/*
  최댓값(2562)

  O(N)
  순차 검색을 이용해 최댓값 찾기
  배열의 index를 0부터 시작하므로, 출력할 때 +1 해주기
*/