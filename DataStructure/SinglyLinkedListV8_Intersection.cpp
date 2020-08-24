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

  /* Intersection example*/
  Node *m1 = new Node(6);
  Node *m2 = m1->addNext(8);
  Node *m3 = m2->addNext(n4);

  /* No intersection example*/
  // Node *m1 = new Node(1);
  // Node *m2 = m1->addNext(2);
  // Node *m3 = m2->addNext(3);
  // Node *m4 = m3->addNext(4);
  // Node *m5 = m4->addNext(5);
  // Node *m6 = m5->addNext(6);

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

/*
  교차점이 있는 Linked List인지 확인하라고 묻는다면, 그냥 처음부터 끝까지 탐색하여
  각 List의 마지막 주소를 반환하고 같은지 다른지 비교하면 된다.
  하지만, 해당 노드를 반환해야하므로 길이를 맞춰준 후 처음부터 끝까지 탐색한다.
  주소가 같은 노드를 찾는다면 return 해당노드, 그렇지 않다면 return NULL
*/