#pragma once

#include "node.h"

class BinaryTree {

 private:
  Node root;
  Node* actualNode;

 public:
  
  BinaryTree() {
    actualNode = &root;
  }

  BinaryTree& operator>> (int value) {
    addElement(value);
    return *this;
  }

  void addElement(int value) {

    if (value == 0) {
      if ( actualNode -> getLeft() ) {
        actualNode = actualNode -> getLeft();
      } else {
        actualNode -> setLeft(new Node(0));
      }

    } else if (value == 1) {
      if ( actualNode -> getRight() ) {
        actualNode = actualNode -> getRight();
      } else {
        actualNode -> setRight(new Node(1));
      }
    } else {
      throw std::invalid_argument("Argument should be 0 or 1");
    }
  }

  void print() {
    root.print();
  }
};