#include <bits/stdc++.h>
using namespace std;
int num[10];
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  if (n == 0) num[0]++;
  while (n) {
    if (n % 10 == 9)
      num[6]++;
    else
      num[n % 10]++;
    n /= 10;
  }
  num[6] = ceil((double)num[6] / 2);

  int max = 0;
  for (int i = 0; i < 10; i++)
    if (num[i] > max) max = num[i];

  cout << max;
}

/*
  방 번호(1475)

  O(N)

  6과 9의 개수를 합하고, 2로 나눈 후 올린 값이 곧 6과 9가 필요로하는 세트 수
  (6 = 1 Set, 66 = 1 Set, 6699 = 2 Set, 66999 = 3 Set)
  6과 9를 num[6]으로 몰아서 받고 위에서 말한 연산 후 num[6]에 저장한다
  그런 후 num[]의 0~9 index값 중 가장 큰 값이 곧 필요한 Set 수
*/