// Q. [심화] 어떤 숫자를 자릿수 별로 한 개씩 Linked List에 담았다.
// 1의 자리가 "가장 마지막 노드부터 시작할 때"
// 이런 식의 Linked List 두 개를 받아서 합산하고,
// 같은식으로 Linked List에 담아서 반환하라

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

  Node *getFirst()
  {
    return this->header;
  }
};

class Storage
{
public:
  int carry;
  Node *result;

  Storage()
  {
    this->carry = 0;
    this->result = NULL;
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

Node *insertBefore(Node *node, int data)
{
  Node *before = new Node(data);
  if (node != NULL)
  {
    before->next = node;
  }
  return before;
}

Node *LPadList(Node *l, int length)
{
  Node *head = l;
  for (int i = 0; i < length; i++)
  {
    head = insertBefore(head, 0);
  }
  return head;
}

Storage *addLists(Node *l1, Node *l2)
{
  if (l1 == NULL && l2 == NULL)
  {
    Storage *storage = new Storage();
    return storage;
  }
  Storage *storage = addLists(l1->next, l2->next);
  int value = storage->carry + l1->data + l2->data;
  int data = value % 10;
  storage->result = insertBefore(storage->result, data);
  storage->carry = value / 10;
  return storage;
}

Node *sumLists(Node *l1, Node *l2)
{
  int len1 = getListLength(l1); // 길이
  int len2 = getListLength(l2);

  if (len1 < len2) // 0 채우기
  {
    l1 = LPadList(l1, len2 - len1);
  }
  else
  {
    l2 = LPadList(l2, len1 - len2);
  }

  Storage *storage = addLists(l1, l2); // 더하기
  if (storage->carry != 0)
  {
    storage->result = insertBefore(storage->result, storage->carry);
  }
  return storage->result;
}

int main(void)
{
  SinglyLinkedList *l1 = new SinglyLinkedList();
  l1->append(9);
  l1->append(1);
  l1->retrieve();

  SinglyLinkedList *l2 = new SinglyLinkedList();
  l2->append(1);
  l2->append(1);
  l2->retrieve();

  Node *n = sumLists(l1->getFirst(), l2->getFirst());
  while (n->next != NULL)
  {
    cout << n->data << " -> ";
    n = n->next;
  }
  cout << n->data << endl;

  return 0;
}