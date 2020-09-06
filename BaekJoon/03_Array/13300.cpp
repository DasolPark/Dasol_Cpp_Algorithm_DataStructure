#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, k, room[6][2] = {}, cnt = 0;
  cin >> n >> k;
  while (n--) {
    int s, g;  // sex, grade
    cin >> s >> g;
    room[g - 1][s]++;  // for [0~5][0~1]
  }
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 2; j++) {
      cnt += ceil((double)room[i][j] / k);
    }
  }
  cout << cnt;
}

/*
  방 배정(13300)

  일단 모든 정보를 입력받은 후 각 학년/성별을 기준 k로 나눠준 후 올림해주면 필요한 방의 개수를 알아낼 수 있다
  room[][]을 k로 나눌 때 형변환이 될 수 있도록 (double)로 꼭 강제 캐스팅 해줘야 한다
*/