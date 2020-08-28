#include <bits/stdc++.h>
#define N 5
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int a[N] = {}, sum = 0;
  for (int i = 0; i < N; i++) cin >> a[i], sum += a[i];
  sort(a, a + N);
  cout << sum / N << "\n";
  cout << a[2];
}

/*
  대표값2(2587)

  O(n log n)?
  입력받음과 동시에 sum에 저장하고, a배열을 sort()
  평균은 sum/N, 중앙값은 a[2]를 출력
*/

/* 2. selection sort를 이용한 풀이 */
/*
#include <bits/stdc++.h>
#define N 5
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int a[N] = {}, sum = 0, m = 0;
  for (int i = 0; i < N; i++) cin >> a[i], sum += a[i];
  for (int i = 0; i < N; i++) {
    int indexOfMin = i;
    for (int j = i + 1; j < N; j++) {
      if (a[indexOfMin] > a[j]) {
        indexOfMin = j;
      }
    }
    if (indexOfMin != i) {
      int lesser = a[indexOfMin];
      a[indexOfMin] = a[i];
      a[i] = lesser;
    }
  }
  cout << sum / N << "\n";
  cout << a[2];
}
*/