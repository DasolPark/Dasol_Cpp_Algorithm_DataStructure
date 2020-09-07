#include <iostream>
#include <vector>  // vector를 사용하기 위한 헤더

using namespace std;

void func1(vector<int> v) {
  v[20] = 20;
}

int main() {
  vector<int> v(100);

  v[20] = 10;
  v[60] = -4;

  cout << v[20] << "\n";
}

/*
  그냥 STL를 생으로 함수 인자에 넣으면 Call by value
  따라서, 값을 복사하는 시간이 추가로 생긴다.
*/