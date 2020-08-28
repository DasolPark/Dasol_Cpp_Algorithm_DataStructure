#include <bits/stdc++.h>
#define N 7
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int a, min = 101, sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (a % 2 != 0) {
      sum += a;
      if (a < min) min = a;
    }
  }

  if (sum != 0) {
    cout << sum << "\n";
    cout << min;
  } else
    cout << -1;
}

/*
  홀수(2576)

  O(N)
  홀수일 경우 sum에 더하고, 최소값인지 확인하여 min에 저장
  홀수가 없을 경우 sum == 0이므로, 0인지 확인 후 출력

  마지막 풀이에서는 배열을 굳이 사용하지 않고, 입력받고 바로 확인하는 로직으로 변경
*/

/* 2. array b를 없애고 int min을 이용한 풀이(속도면에서 더 나은듯 하지만 역시 배열을 이용) */
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

/* 1.배열을 이용한 풀이(공간면에서 굳이 배열을 이용할 필요가 없다) */
/*
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
*/