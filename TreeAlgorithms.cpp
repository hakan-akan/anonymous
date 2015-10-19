// TreeAlgorithms.cpp : main project file.
#include "stdafx.h"

using namespace System;

class BSTNode 
{
public:
      BSTNode(int _value) : 
		  value(_value), left(nullptr), right(nullptr)
      {}

	  bool insert(int value);

private:
      int		value;
      BSTNode  *left, *right;
};

bool BSTNode::insert(int value)
{
	if (value == this->value)
		return false;

	if (value < this->value) {
		if (left) 
			return left->insert(value);
		left = new BSTNode(value);
	} else if (value > this->value) {
		if (right) 
			return right->insert(value);
		right = new BSTNode(value);
	}

	return true;
}


class BinarySearchTree {
private:
      BSTNode* root;
public:
	  BinarySearchTree() 
	  {
		  root = nullptr;
      }
	  bool insert(int value);
};

bool BinarySearchTree::insert(int value) 
{
      if (root == nullptr) {
            root = new BSTNode(value);
            return true;
      } else
            return root->insert(value);

}


int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
    return 0;
}
