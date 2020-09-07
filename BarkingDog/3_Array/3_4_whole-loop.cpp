#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v1 = {1, 2, 3, 4, 5, 6};

  // 1. range-based for loop (since c++11)
  for (int e : v1)  // int &e 를 이용하면 원본이 e에 들어간다
    cout << e << ' ';

  // 2. not bad
  for (int i = 0; i < v1.size(); i++)
    cout << v1[i] << ' ';

  // 3. ***WRONG***
  for (int i = 0; i <= v1.size() - 1; i++)  // vector의 size는 unsigned int를 반환하기 때문에 unsigned int overflow 위험
    cout << v1[i] << ' ';
}