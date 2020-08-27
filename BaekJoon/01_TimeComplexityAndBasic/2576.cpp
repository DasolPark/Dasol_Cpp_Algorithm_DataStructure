#include <bits/stdc++.h>
#define N 7
using namespace std;
int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int a[N], b[N];
  int sum = 0;
  for (int i = 0; i < N; i++) cin >> a[i], b[i] = 101;
  for (int i = 0; i < N; i++)
    if (a[i] % 2 != 0) b[i] = a[i], sum += a[i];

  sort(b, b + N);

  if (sum != 0)
    cout << sum << '\n', cout << b[0];
  else
    cout << -1;
}

/*
  홀수(2576)

  O(N)
  홀수가 있을 경우
  a array에 입력값을 받을 때, b array에는 자연수 100보다 큰 101로 초기화
  b array에 홀수를 저장하고, sort()를 이용하면 최소값은 b[0]에 위치하게 된다
  홀수가 없을 경우
  sum에는 초기값 0이 들어가 있을 것이므로 확인 후 -1 출력
*/

/* array b를 없애고 int min을 이용한 풀이(속도면에서 더 나은듯) */
/*
#include <bits/stdc++.h>
#define N 7
using namespace std;
int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int a[N];
  int sum = 0, min = 101;
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = 0; i < N; i++) {
    if (a[i] % 2 != 0) {
      sum += a[i];
      if (a[i] < min) min = a[i];
    }
  }

  if (sum != 0)
    cout << sum << '\n', cout << min;
  else
    cout << -1;
}
*/