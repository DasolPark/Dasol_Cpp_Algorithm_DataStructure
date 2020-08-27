/*
  '코딩테스트'에서 쓰길 권유하는 Coding Style 예제
  (최대한 타이핑을 아끼는 게 최고, 남이 알아볼 클린 코드를 작성할 필요 없다)
*/
#include <bits/stdc++.h>
using namespace std;
int n, x, a[10005];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> x;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++)
    if (a[i] < x) cout << a[i] << ' ';
}

/* 더 짧은 BarkingDog Coding Style*/
/*
#include <bits/stdc++.h>
using namespace std;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, x, t;
  cin >> n >> x;
  while(n--){
    cin >> t;
    if(t < x) cout << t << ' ';
  }
}
*/

/* '개발'방식으로 꼼꼼하게 짜는 코드 예제 */
/*
#include <iostream>

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  int n, x;

  cin >> n >> x;

  int *a = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] < x) cout << a[i] << ' ';
  }

  delete[] a;
}
*/

// 백준 10871