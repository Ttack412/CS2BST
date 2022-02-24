#include<string>
using namespace std;

struct node 
{
  int data;
  node* left;
  node* right;
};

class BST 
{
  node* root;
  node* find(node*, int);
  node* findMin(node*);
  node* findMax(node*);
  node* remove(node*, int);
  void insert(node*, int);
  void destroyTree(node*);
  void inOrder(node*);
  void preOrder(node*);
  void postOrder(node*);
  void levelOrder(node*);
  bool isLeafNode(node*);

public:
  BST();
  ~BST();
  void insert(int);
  void destroyTree();
  void display();
  node* remove(int);
  node* find(int);
  node* getRoot();
  void maxdepth();
};