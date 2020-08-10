// Kth From Last Node
// Q. 단방향 Linked List의 끝에서 K번째 '노드'를 찾는 알고리즘을 구현하시오.

// Solution 2 (Recursion - return node)
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

  Node *kthFromLast(Node *n, int k)
  {
    if (n == NULL)
    {
      return NULL;
    }

    Node *found = kthFromLast(n->next, k); // 계속 NULL or 찾은 Node return
    ref++;
    if (ref == k)
    {
      return n; // 찾은 Node로 계속 return 됨
    }
    return found; // Node를 찾기 전까지 NULL로 계속 return 됨
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

// With Reference class

// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//   int data;
//   Node *next;

//   Node(int data, Node *next = NULL)
//   {
//     this->data = data;
//     this->next = next;
//   }
// };

// class Reference
// {
// public:
//   int count;
//   Reference()
//   {
//     this->count = 0;
//   }
// };

// class SinglyLinkedList
// {
// public:
//   Node *header;

//   SinglyLinkedList()
//   {
//     this->header = NULL;
//   }

//   void append(int data)
//   {
//     if (this->header == NULL)
//     {
//       this->header = new Node(data, this->header);
//     }
//     else
//     {
//       Node *n = this->header;
//       while (n->next != NULL)
//       {
//         n = n->next;
//       }
//       n->next = new Node(data, NULL);
//     }
//   }

//   void retrieve()
//   {
//     Node *n = this->header;
//     while (n->next != NULL)
//     {
//       cout << n->data << " -> ";
//       n = n->next;
//     }
//     cout << n->data << endl;
//   }

//   void removeDups()
//   {
//     Node *n = this->header;              // next
//     while (n != NULL && n->next != NULL) // Important part of (n != NULL)
//     {
//       Node *r = n; // Runner
//       while (r->next != NULL)
//       {
//         if (r->next->data == n->data)
//         {
//           r->next = r->next->next;
//         }
//         else
//         {
//           r = r->next;
//         }
//       }
//       n = n->next; // NULL or Trash value
//     }
//   }

//   Node *getFirst()
//   {
//     return this->header;
//   }

//   Node *kthFromLast(Node *n, int k, Reference *ref)
//   {
//     if (n == NULL)
//     {
//       return NULL;
//     }

//     Node *found = kthFromLast(n->next, k, ref); // 계속 NULL or 찾은 Node return
//     ref->count++;
//     if (ref->count == k)
//     {
//       return n; // 찾은 Node로 계속 return 됨
//     }
//     return found; // Node를 찾기 전까지 NULL로 계속 return 됨
//   }
// };

// int main(void)
// {
//   SinglyLinkedList *sll = new SinglyLinkedList();

//   sll->append(1);
//   sll->append(2);
//   sll->append(3);
//   sll->append(4);
//   sll->append(5);
//   sll->retrieve();

//   int k = 2;
//   Reference *ref = new Reference();
//   Node *kth = sll->kthFromLast(sll->getFirst(), k, ref);
//   cout << k << "th from last's data is " << kth->data << endl;

//   return 0;
// }