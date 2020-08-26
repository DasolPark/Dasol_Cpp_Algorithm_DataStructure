#include <iostream>

using namespace std;

void func1() {
  for (char s = 0; s < 128; s++) cout << "hi";
}

int func2() {
  int r = 1;
  for (int i = 1; i <= 50; i++)
    r = r * i % 61;
  return r;
}

int func3() {
  int a = 10;
  int mod = 1000000007;  // 10억7
  for (int i = 0; i < 10; i++)
    a = 10 * a % mod;
  return a;
}

int main() {
  func1();
  cout << func2() << endl;
  cout << func3() << endl;

  return 0;
}

/*
  func1 
    Overflow) 127+1 == -128
    solution) char -> int
    Reason) char == 1byte -> -128 ~ 127
  func2
    OK
  func3 
    Overflow) 10^9 * 10 == overflow (10^9는 10억)
    solution 1) int a -> long long a
    solution 2) 10 -> 10ll or (long long)10 (강제 형변환)
    Reason) int == 4byte -> -2,147,483,648 ~ 2,147,483,647, long long === 8byte
*/