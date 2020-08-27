#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  for (int i = 0; i < 3; i++) {
    int s = 0, a;
    for (int j = 0; j < 4; j++) cin >> a, s += a;
    switch (s) {
      case 0:
        cout << "D\n";
        break;  // 윷
      case 1:
        cout << "C\n";
        break;  // 걸
      case 2:
        cout << "B\n";
        break;  // 개
      case 3:
        cout << "A\n";
        break;  // 도
      case 4:
        cout << "E\n";  // 모
    }
  }
}

/* 
  윷놀이(2490)

  O(N^2)?
  한 줄에 4번 입력되는 수를 모두 합한 결과로 판단
  '0 == 윷'부터 '4 == 모'까지
*/