#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(nullptr);
  int sum = 10;
  const type_info& t1 = typeid(5 / 3);                        // int
  const type_info& t2 = typeid(5 / 3.0);                      // double
  const type_info& t3 = typeid(5 / 3.0f);                     // float
  const type_info& t4 = typeid(ceil(5 / 3));                  // double
  const type_info& t5 = typeid(ceil(5 / 3.0));                // double
  const type_info& t6 = typeid(ceil(5 / 3.0) + 10);           // double
  const type_info& t7 = typeid(ceil(5 / 3.0) * 10);           // double
  const type_info& t8 = typeid(sum += (ceil(5 / 3.0) * 10));  // int

  cout << t1.name() << endl;
  cout << t2.name() << endl;
  cout << t3.name() << endl;
  cout << t4.name() << endl;
  cout << t5.name() << endl;
  cout << t6.name() << endl;
  cout << t7.name() << endl;
  cout << t8.name() << endl;

  cout << typeid(10).name() << endl;
  cout << typeid('A').name() << endl;
}