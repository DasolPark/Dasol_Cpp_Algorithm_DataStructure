// Singly Linked List(Simple Version)

#include <stdio.h>

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  void append(int data)
  {
    Node *end = new Node(data);
    Node *n = this;
    while (n->next != NULL)
    {
      n = n->next;
    }
    n->next = end;
  }

  void deletion(int data)
  {
    Node *n = this;
    while (n->next != NULL)
    {
      if (n->next->data == data)
      {
        n->next = n->next->next;
      }
      else
      {
        n = n->next;
      }
    }
  }

  void retrieve()
  {
    Node *n = this;
    while (n->next != NULL)
    {
      printf("%d -> ", n->data);
      n = n->next;
    }
    printf("%d\n", n->data);
  }
};

int main(void)
{
  Node *head = new Node(1);
  head->append(2);
  head->append(3);
  head->append(4);
  head->retrieve();
  head->deletion(2);
  head->deletion(3);
  head->retrieve();

  return 0;
}