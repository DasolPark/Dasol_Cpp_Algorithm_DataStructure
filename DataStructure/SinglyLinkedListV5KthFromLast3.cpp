// Kth From Last Node
// Q. 단방향 Linked List의 끝에서 K번째 '노드'를 찾는 알고리즘을 구현하시오.

// Solution 3 (Recursion - pointer)
// Time complexity O(N)
// Space complexity O(1) 별도의 버퍼를 사용하지 않으므로

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
      if (p1 == NULL)
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
};

int main(void)
{
  SinglyLinkedList *sll = new SinglyLinkedList();

  sll->append(1);
  sll->append(2);
  sll->append(3);
  sll->append(4);
  sll->append(5);
  sll->retrieve();

  int k = 2;
  Node *kth = sll->kthFromLast(sll->getFirst(), k);
  cout << k << "th from last's data is " << kth->data << endl;

  return 0;
}