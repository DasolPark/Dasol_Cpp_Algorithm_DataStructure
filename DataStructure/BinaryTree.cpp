// Tree Structure
//    1
//  2  3
//4  5
// Inorder (Left, Root, Right): 4 2 5 1 3
// Preorder (Root, Left, Right): 1 2 4 5 3
// Postorder (Left, Right, Root): 4 5 2 3 1

#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
};

class Tree
{
public:
  Node *root;

  void setRoot(Node *node)
  {
    this->root = node;
  };

  Node getRoot()
  {
    return *root; // == *this->root;
  };

  Node makeNode(Node *left, int data, Node *right)
  {
    Node *node = new Node();

    node->data = data;
    node->left = left;
    node->right = right;

    return *node;
  };

  void inorder(Node *node)
  {
    if (node != NULL)
    {
      inorder(node->left);
      cout << node->data << endl;
      inorder(node->right);
    }
  };

  void preorder(Node *node)
  {
    if (node != NULL)
    {
      cout << node->data << endl;
      preorder(node->left);
      preorder(node->right);
    }
  };

  void postorder(Node *node)
  {
    if (node != NULL)
    {
      postorder(node->left);
      postorder(node->right);
      cout << node->data << endl;
    }
  };
};

int main(void)
{
  Tree *t = new Tree();

  Node *n4 = &t->makeNode(NULL, 4, NULL);
  Node *n5 = &t->makeNode(NULL, 5, NULL);
  Node *n2 = &t->makeNode(n4, 2, n5);
  Node *n3 = &t->makeNode(NULL, 3, NULL);
  Node *n1 = &t->makeNode(n2, 1, n3);

  t->setRoot(n1);

  cout << "Inorder" << endl;
  t->inorder(&t->getRoot());

  cout << "Preorder" << endl;
  t->preorder(&t->getRoot());

  cout << "Postorder" << endl;
  t->postorder(&t->getRoot());
};

// Tree Structure
//    1
//  2  3
//4  5
// Inorder (Left, Root, Right): 4 2 5 1 3
// Preorder (Root, Left, Right): 1 2 4 5 3
// Postorder (Left, Right, Root): 4 5 2 3 1
