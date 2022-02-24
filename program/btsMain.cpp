#include "bts.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

  int temp;
  int inputAmount;
  BST* tree = new BST();

  cout << "Please enter the amount of numbers in the tree: ";
  cin >> inputAmount;

  cout << "Begin entering, one number at a time please: ";
  for(int i; i < inputAmount; i++)
  {
    cin >> temp;
    tree->insert(temp);
  }

  //tree->insert(50);
 
  tree->display();

  delete tree;
  return 0;
}