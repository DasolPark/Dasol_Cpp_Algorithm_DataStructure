// Singly Linked List V2(Divide Node & list class, use head) DS Ver

#include <stdio.h>

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
  Node *head;

  SinglyLinkedList()
  {
    this->head = NULL;
  }

  void append(int data)
  {
    if (this->head == NULL)
    {
      this->head = new Node(data, this->head);
    }
    else
    {
      Node *n = this->head;

      while (n->next != NULL)
      {
        n = n->next;
      }
      n->next = new Node(data);
    }
  }

  void deletion(int data)
  {
    Node *n = this->head;

    while (n->next != NULL)
    {
      if (n->next->data == data)
      {
        n->next = n->next->next;
        return;
      }
      else
      {
        n = n->next;
      }
    }
  }

  void retrieve()
  {
    Node *n = this->head;
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
  SinglyLinkedList *singlyLinkedList = new SinglyLinkedList();

  singlyLinkedList->append(1);
  singlyLinkedList->append(2);
  singlyLinkedList->append(3);
  singlyLinkedList->append(4);
  singlyLinkedList->retrieve();
  singlyLinkedList->deletion(3);
  singlyLinkedList->retrieve();

  return 0;
}