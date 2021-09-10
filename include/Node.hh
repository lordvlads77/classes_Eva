#pragma once
#include "person.hh"
class Node
{
    
    private:
    person* person;
    
    public:
    Node* nextNode = nullptr; // esto sirve para conectarse a otro nodo


    Node(person* person, Node*& node);
    Node(person* person);
    person* GetPerson() const;

    ~Node();
};
