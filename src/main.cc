#include <iostream>
#include "person.hh"
#include "Node.hh"


int main()
{
    person* person1{new person(2, "Eva", new Job("Developer", 15000.f, IT) , female)};

    Node* node1{new Node(new person(2, "Brian", new Job("Developer", 20000.f, IT), female))};
    Node* node2{new Node(new person(2, "Kevin", new Job("Developer", 30000.f, IT), male))};
    Node* node3{new Node(new person(2, "Maria", new Job("Frontend", 30000.f, Design), female))};
    Node* node4{new Node(new person(2, "Kevin", new Job("Chencha", 3000.f, HR), attentionseeker))};
    node1->nextNode = node2;
    node2->nextNode = node3;
    node3->nextNode = node4;

   // std::cout << node1->GetPerson()->GetName() << std::endl;
    //std::cout << node1->nextNode->GetPerson()->GetName() << std::endl;
    //std::cout << node1->nextNode->nextNode->GetPerson()->GetName() << std::endl;
    //std::cout << node1->nextNode->nextNode->nextNode->GetPerson()->GetName() << std::endl;

    Node* currentNode{node1};
    std::cout << "Persons list" << "Persons list: " std::endl;
    while (currentNode)//current node tiene algo adentro, Existe?, no esta vacio?
    {
        std::cout << "Person name:" << currentNode->GetPerson()->GetName() << std::endl;
        std::cout << "Person job name: " << currentNode->GetPerson()->GetJob()->GetName() << std::endl;
        std::cout << "Person salary: " << currentNode->GetPerson()->GetJob()->GetSalary() << std::endl;
        std::cout << "Person job area: " << currentNode->GetPerson()->GetJob()->GetJobAreaStr() << std::endl;
        std::cout << std::endl;
        std::cout << std::endl; 
        currentNode = currentNode->nextNode;

    }
    
    //std::cout << person1->GetName() << std::endl;
    //std::cout << person1->GetArmsCount() << std::endl;
    //std::cout << person1->GetGenderStr () << std::endl;
    //std::cout << "Job details: " << std::endl;
    //std::cout << person1->GetJob()->GetName() << std::endl;
    //std::cout << person1->GetJob()->GetJobAreaStr() << std::endl;
    //std::cout << person1->GetJob()->GetSalary() << std::endl;
    //delete person1;


    std::cin.get();
    return 0;
}