// Kth From Last Node
// Q. 단방향 Linked List의 끝에서 K번째 '노드'를 찾는 알고리즘을 구현하시오.

// Solution 1(Count)

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

  Node *getFirst()
  {
    return this->header;
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
      n->next = new Node(data);
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

  Node *kthFromLast(Node *first, int k)
  {
    Node *n = first;
    int total = 1;
    while (n->next != NULL)
    {
      total++;
      n = n->next;
    }

    n = first;
    for (int i = 1; i < total - k + 1; i++)
    {
      n = n->next;
    }

    return n;
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

  int k = 1;
  Node *kth = sll->kthFromLast(sll->getFirst(), k);
  cout << k << "th from last is " << kth->data << endl;

  return 0;
}