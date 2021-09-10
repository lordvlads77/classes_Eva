#include "Node.hh"

Node::Node(person* person, Node*& node)
{
  this->person = person;
  this->nextNode = node;
}

Node::Node(person* person)
{
  this->person = person;
}

person* Node::GetPerson() const
{
  return person;
}

Node::~Node()
{
    
}