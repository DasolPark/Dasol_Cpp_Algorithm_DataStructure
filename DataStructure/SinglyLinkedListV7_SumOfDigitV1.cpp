// Q. 어떤 숫자를 자릿수 별로 한 개씩 Linked List에 담았다.
// 그런데 1의 자리가 헤더에 오도록 거꾸로 담았다.
// 이런 식의 Linked List 두 개를 받아서 합산하고,
// 같은식으로 Linked List에 담아서 반환하라
//   9 1 4
// + 6 4 3
// --------
//   5 6 7

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
};

class SinglyLinkedList
{
public:
  Node *header;

  SinglyLinkedList()
  {
    this->header = NULL;
  }

  void append(int data)
  {
    if (this->header == NULL)
    {
      this->header = new Node(data, this->header);
    }
    else
    {
      Node *n = this->header;
      while (n->next != NULL)
      {
        n = n->next;
      }
      n->next = new Node(data, NULL);
    }
  }

  void retrieve()
  {
    Node *n = this->header;
    while (n->next != NULL)
    {
      cout << n->data << " -> ";
      n = n->next;
    }
    cout << n->data << endl;
  }

  Node *getNode(int num)
  {
    Node *n = this->header;

    if (num == 1)
    {
      return n;
    }

    for (int i = 1; i < num; i++)
    {
      n = n->next;
    }
    return n;
  }
};

Node *sumLists(Node *l1, Node *l2, int carry)
{
  if (l1 == NULL && l2 == NULL && carry == 0)
  {
    return NULL;
  }

  int value = carry;

  if (l1 != NULL)
  {
    value += l1->data;
  }
  if (l2 != NULL)
  {
    value += l2->data;
  }
  Node *result = new Node(value % 10);

  if (l1 != NULL || l2 != NULL)
  {
    Node *next = sumLists(l1->next, l2->next, value >= 10 ? 1 : 0);
    result->next = next;
  }
  return result;
}

int main(void)
{
  SinglyLinkedList *l1 = new SinglyLinkedList();
  l1->append(9);
  l1->append(1);
  l1->append(4);
  l1->retrieve();

  SinglyLinkedList *l2 = new SinglyLinkedList();
  l2->append(6);
  l2->append(4);
  l2->append(3);
  l2->retrieve();

  Node *n = sumLists(l1->getNode(1), l2->getNode(1), 0);
  while (n->next != NULL)
  {
    cout << n->data << " -> ";
    n = n->next;
  }
  cout << n->data << endl;

  return 0;
}

// 재귀를 진행할 때마다 결과 Node를 만들어주고
// 재귀가 끝나고 돌아올 때마다 결과 Node를 이어준다.