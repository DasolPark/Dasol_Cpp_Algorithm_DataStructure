// Get Intersection Node
// Q. 주어진 두 개의 단방향 Linked List에서 교차되는 노드를 찾으시오.
// (단, 교차점은 값이 아닌 주소로 찾아야함)
// 5 → 7 → 9 → 10 → 7 → 6
//      6 → 8 ↗

#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data, Node *next = NULL)
  {
    this->data = data;
    this->next = next;
  }

  Node *addNext(Node *node)
  {
    Node *n = this;
    while (n->next != NULL)
    {
      n = n->next;
    }
    n->next = node;

    return this->next;
  }

  Node *addNext(int data)
  {
    Node *n = this;
    while (n->next != NULL)
    {
      n = n->next;
    }
    n->next = new Node(data);

    return this->next;
  }

  Node *get(int length)
  {
    for (int i = 0; i < length; i++)
    {
      *this = *this->next;
    }

    return this;
  }
};

int getListLength(Node *l)
{
  int total = 0;
  while (l != NULL)
  {
    total++;
    l = l->next;
  }
  return total;
}

Node *getIntersection(Node *l1, Node *l2)
{
  int len1 = getListLength(l1);
  int len2 = getListLength(l2);

  if (len1 > len2)
  {
    l1 = l1->get(len1 - len2);
  }
  else
  {
    l2 = l2->get(len2 - len1);
  }

  while (l1 != NULL && l2 != NULL)
  {
    if (l1 == l2)
    {
      return l1; // or l2
    }
    l1 = l1->next;
    l2 = l2->next;
  }
  return NULL;
}

int main(void)
{
  Node *n1 = new Node(5);
  Node *n2 = n1->addNext(7);
  Node *n3 = n2->addNext(9);
  Node *n4 = n3->addNext(10);
  Node *n5 = n4->addNext(7);
  Node *n6 = n5->addNext(6);

  Node *m1 = new Node(6);
  Node *m2 = m1->addNext(8);
  Node *m3 = m2->addNext(n4);

  Node *n = getIntersection(n1, m1);

  if (n != NULL)
  {
    cout << "Intersection: " << n->data << endl;
  }
  else
  {
    cout << "Not found" << endl;
  }

  return 0;
}