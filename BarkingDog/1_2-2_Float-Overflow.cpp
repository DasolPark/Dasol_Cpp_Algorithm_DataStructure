#include <iostream>

using namespace std;

// 실수의 저장/연산 과정에서 반드시 오차가 발생한다.
void func1() {
  if (0.1 + 0.1 + 0.1 == 0.3)
    cout << "0.1 + 0.1 + 0.1 == 0.3" << endl;
  else
    cout << "0.1 + 0.1 + 0.1 != 0.3" << endl;
}

// long long 범위의 정수를 담으면 안 된다.
void func2() {
  double a = 1000000000000000001;
  double b = 1000000000000000000;
  if (a == b)
    cout << "a == b" << endl;
  else
    cout << "a != b" << endl;
}

// 실수를 비교할 때는 등호를 사용하면 안 된다.
void func3() {
  double a = 0.1 + 0.1 + 0.1;
  double b = 0.3;
  if (a == b) cout << "Same 1\n";
  if (abs(a - b) < 1e-12) cout << "Same 2\n";  // 1e-12 == 10^-12
}

int main() {
  func1();
  func2();
  func3();

  return 0;
}