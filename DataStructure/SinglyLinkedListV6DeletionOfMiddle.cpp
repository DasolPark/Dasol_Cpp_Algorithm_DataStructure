// Q. 단방향 Linked List에서 중간에 있는 노드를 삭제하시오.
// (단, 당신은 첫 번째 노드가 어디에 있는지 모르고, 오직 삭제할 노드만 가지고 있다)
// 사실 첫 번째 노드를 이해하지 못 하는 것은 불가능이며
// 다음 노드의 값을 이용한다는 Idea를 중점적으로 생각할 것

#include <iostream>

using namespace std;

int ref = 0;

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

  void removeDups()
  {
    Node *n = this->header;              // next
    while (n != NULL && n->next != NULL) // Important part of (n != NULL)
    {
      Node *r = n; // Runner
      while (r->next != NULL)
      {
        if (r->next->data == n->data)
        {
          r->next = r->next->next;
        }
        else
        {
          r = r->next;
        }
      }
      n = n->next; // NULL or Trash value
    }
  }

  Node *getFirst()
  {
    return this->header;
  }

  Node *kthFromLast(Node *first, int k)
  {
    Node *p1 = first; // Rear
    Node *p2 = first;

    for (int i = 0; i < k; i++)
    {
      if (p1 == NULL) // k번째 Node가 없을 경우 return NULL;
      {
        return NULL;
      }
      p1 = p1->next;
    }
    while (p1 != NULL) // Important
    {
      p1 = p1->next;
      p2 = p2->next;
    }
    return p2;
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

bool deleteNode(Node *target)
{
  if (target == NULL || target->next == NULL) // Node가 없거나 마지막 Node
  {
    return false;
  }

  Node *next = target->next;
  target->data = next->data;
  target->next = next->next;

  return true;
}

int main(void)
{
  SinglyLinkedList *sll = new SinglyLinkedList();

  sll->append(1);
  sll->append(2);
  sll->append(3);
  sll->append(4);
  sll->append(5);
  sll->retrieve();

  int num = 2;
  // cout << "Data of " << num << "th node is " << sll->getNode(num)->data << endl;
  deleteNode(sll->getNode(num));
  sll->retrieve();

  return 0;
}