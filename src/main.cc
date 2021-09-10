#include <iostream>
#include "person.hh"


int main()
{
    person* person1{new person(2, "Eva", new Job("Developer", 15000.f, IT) , female)};

    std::cout << person1->GetName() << std::endl;
    std::cout << person1->GetArmsCount() << std::endl;
    std::cout << person1->GetGenderStr () << std::endl;
    std::cout << "Job details: " << std::endl;
    std::cout << person1->GetJob()->GetName() << std::endl;
    std::cout << person1->GetJob()->GetJobAreaStr() << std::endl;
    std::cout << person1->GetJob()->GetSalary() << std::endl;
    delete person1;
    std::cin.get();
    return 0;
}