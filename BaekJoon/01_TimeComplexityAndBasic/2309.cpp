#include <bits/stdc++.h>
#define N 9
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int a[N] = {}, sum = 0;
  for (int i = 0; i < N; i++) cin >> a[i], sum += a[i];
  sort(a, a + N);

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (sum - a[i] - a[j] == 100) {
        for (int k = 0; k < 9; k++)
          if (k != i && k != j) cout << a[k] << '\n';
        return 0;
      }
    }
  }
}

/*
  일곱 난쟁이(2309)

  O(N^3)
  
  값을 입력 받은 후 바로 정렬하고 시작하는게 좋다 sort()
  9명 전체 합을 구한 후 나머지 2명을 빼, 그 값이 100인지 확인하면 된다
  모든 경우의 수를 고려하려 반복하면 된다(브루트 포스)
  단, 해당 결과를 찾았다면 return 해주도록 하자
*/