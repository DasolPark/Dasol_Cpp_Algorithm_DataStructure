#include <iostream>

using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 1, b = 2;

  swap(a, b);

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  return 0;
}

/*
  C++에는 참조자(Reference)가 있다.
*/