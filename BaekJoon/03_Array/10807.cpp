#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, v, count = 0;
  cin >> n;
  int a[n] = {};
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> v;
  for (int i = 0; i < n; i++)
    if (a[i] == v) count++;
  cout << count;
}

/*
  개수 세기(10807)

  O(N)
  입력받은 배열을 처음부터 끝까지 반복하면서 v와 같다면 count++
*/