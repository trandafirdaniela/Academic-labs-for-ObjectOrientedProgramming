#include "node.h"
node::node(int val)
{
	info = val;
	next = 0;
}
int node::getInfo() const
{
	return info;
}
void node::setInfo(int info)
{
	this -> info = info;
}
node* node::getNext() const
{
	return next;
}
void node::setNext(node* next)
{
	this->next = next;
}
int node::operator ==(const node& nod)
{
	return this->info=nod.info;
}