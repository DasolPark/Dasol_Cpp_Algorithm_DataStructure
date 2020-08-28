#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int n, u, sy = 0, sm = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u;
    sy += (((u / 30) + 1) * 10);
    sm += (((u / 60) + 1) * 15);
  }
  sy == sm ? cout << "Y M " << sy : (sy < sm ? cout << "Y " << sy : cout << "M " << sm);
  // 아래와 같은 식
  // if(sy == sm){
  //   cout << "Y M " << sy;
  // }else if(sy < sm){
  //   cout << "Y " << sy;
  // }else{
  //   cout << "M " << sm;
  // }
}

/*
  핸드폰 요금(1267)

  올림을 하기 위해 ceil을 이용해서 풀었보았는데, 
  기본 테스트 케이스는 통과하지만 Judge는 '틀렸습니다'
  다른 풀이를 보고 +1로 바꿨더니 정답
*/