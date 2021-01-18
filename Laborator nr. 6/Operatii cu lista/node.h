#pragma once
#include <iostream>
#include <string>
using namespace std;
class node
{
private:
	int info;
	node* next;
public:
	node(int val = 0);
	int getInfo() const;
	void setInfo(int info);
	node* getNext() const;
	void setNext(node* next);
	int operator ==( const node& nod);
	friend class list; //lista foloseste toate datele private din clasa "node"

};

