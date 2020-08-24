#include <iostream>

using namespace std;

class MyClass
{
public:
  void printThis()
  {
    cout << "MyClass's this: " << this << endl;
  }
};

class MyClassTwo
{
public:
  MyClassTwo()
  {
  }

  void printThis()
  {
    cout << "MyClassTwo's this: " << this << endl;
  }
};

int main()
{
  MyClass a, b;
  MyClassTwo *c = new MyClassTwo();
  MyClassTwo *d = new MyClassTwo();

  cout << "Node a's addr: %d" << &a << endl;
  cout << "Node b's addr: " << &b << endl;
  cout << "Node c's addr: " << &c << endl;
  cout << "Node d's addr: " << &d << endl;
  cout << endl;

  a.printThis();
  b.printThis();
  c->printThis();
  d->printThis();
}