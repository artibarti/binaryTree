#pragma once

#include <iostream>

class Node {

 private:
  int value_;
  Node* right_;
  Node* left_;

 public:

  ~Node() {
    delete right_;
    delete left_;
  }

  Node() {
    right_ = nullptr;
    left_ = nullptr;
    value_ = 42;
  }
  
  Node(int value) {
    value_ = value;
  }

  Node* getRight() {
    return right_;
  }

  Node* getLeft() {
    return left_;
  }

  void setRight(Node* right) {
    right_ = right;
  }

  void setLeft(Node* left) {
    left_ = left;
  }

  void print() {
    
    if (left_) {
      left_ -> print();
    }

    std::cout << " " << value_;

    if (right_) {
      right_ -> print();
    }
  }

};