// Q. 정렬이 되지 않은 Linked List에서, 중복값을 삭제하라
// (단, 별도의 버퍼는 사용하지 않는다)

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
};

int main(void)
{
  SinglyLinkedList *sll = new SinglyLinkedList();

  sll->append(1);
  sll->append(2);
  sll->append(3);
  sll->append(2);
  sll->append(3);
  sll->append(4);
  sll->append(5);
  sll->append(5);
  sll->append(4);

  sll->retrieve();
  sll->removeDups();
  sll->retrieve();

  return 0;
}