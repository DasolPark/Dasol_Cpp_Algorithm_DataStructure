#include <iostream>

using namespace std;

class SinglyLinkedList
{
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

public:
  Node *header;

  SinglyLinkedList()
  {
    this->header = NULL;
  }

  void append(int data)
  {
    Node *n = this->header;
    if (this->header == NULL)
    {
      this->header = new Node(data, this->header);
    }
    else
    {
      while (n->next != NULL)
      {
        n = n->next;
      }
      n->next = new Node(data);
    }
  }

  void deletion(int data)
  {
    Node *n = this->header;
    while (n->next != NULL)
    {
      if (n->next->data == data)
      {
        n->next = n->next->next;
        return;
      }
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
};

int main(void)
{
  SinglyLinkedList *sll = new SinglyLinkedList();

  sll->append(1);
  sll->append(2);
  sll->append(3);
  sll->append(4);
  sll->retrieve();
  sll->deletion(2);
  sll->deletion(3);
  sll->retrieve();

  return 0;
}