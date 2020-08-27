#include <iostream>

using namespace std;

struct pt {
  int x, y;
};

void func(pt a) {
  a.x = 10;
}

int main() {
  pt tmp = {0, 0};
  func(tmp);
  cout << tmp.x;
}

/*
  struct 또한 값을 복사하여 사용하기 때문에 참조할 수 없다.
*/