// Kth From Last Node
// Q. 단방향 Linked List의 끝에서 K번째 '노드'를 찾는 알고리즘을 구현하시오.

// Solution 2 (Recursion - return data)
// 길이를 N으로 볼 때, 끝까지 가므로 시간복잡도는 O(N)
// 최악의 경우 끝까지 갔다가 처음으로 돌아와야 하므로 O(2N) 따라서 O(N)
// Time complexity: O(N), Space complexity: O(N)

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

  Node *getFirst()
  {
    return this->header;
  }

  int kthFromLast(Node *n, int k)
  {
    if (n == NULL)
    {
      return 0;
    }

    int count = kthFromLast(n->next, k) + 1;
    if (count == k)
    {
      cout << k << "th from last node is " << n->data << endl;
    }
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
  sll->kthFromLast(sll->getFirst(), k);

  return 0;
}