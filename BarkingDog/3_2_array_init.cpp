#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[21];
  int b[21][21];

  // 1. memset
  memset(a, 0, sizeof a);
  memset(b, 0, sizeof b);
  // 0, -1 외 다른 값을 넣으면 오동작
  // 2차원이상의 배열을 함수의 인자로 넘겨 그곳에서 memset을 하면 잘못 들어갈 수 있음
  // 비추천

  // 2. for (not bad)
  for (int i = 0; i < 21; i++)
    a[i] = 0;
  for (int i = 0; i < 21; i++)
    for (int j = 0; j < 21; j++)
      b[i][j] = 0;

  // 3. fill (recommend, in algorithm header)
  fill(a, a + 21, 0);
  for (int i = 0; i < 21; i++)
    fill(b[i], b[i] + 21, 0);
}
