#include <bits/stdc++.h>
using namespace std;
const int MX = 1000000000;
int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  int result = a * b * c;

  int checker[10] = {0};

  while (result != 0) {
    checker[result % 10]++;
    result /= 10;
  }
  for (int i = 0; i < 10; i++) {
    cout << checker[i] << ' ';
  }
}

/*
  숫자의 개수(2577)

  입력받은 숫자를 곱해 result에 저장한 후, result%10 해주면 1의 자리수만 남는다. 이 계산식을 배열의 인덱스에 넣어 해당 인덱스의 값을 증가시킨 후 result = result/10으로 이미 처리한 1의 자리수를 제거해준다. 이렇게 반복해주면 result는 0이 될 것이고 그때 반복문에서 빠져나오면 된다
*/