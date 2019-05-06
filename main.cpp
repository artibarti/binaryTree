
#include <iostream>
#include "binary_tree.h"

int main() {

  std::cout << "Start" << std::endl;

  BinaryTree tree;

  tree.addElement(1);
  tree.addElement(0);
  tree.addElement(1);

  tree >> 1 >> 0 >> 1;


  tree.print();
  std::cout << std::endl;
}