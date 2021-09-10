#include "person.hh"

person::person(unsigned int armsCount, std::string name, Job* job, Gender gender)
{
    this->armsCount = armsCount;
    this->name = name;
    this->job = job;
    this->gender = gender;
}

person::~person()
{
    std::cout << "Person deleted " << std::endl;
    delete job;
}

unsigned int person::GetArmsCount() const /*<--------------- This os read only */
{
    return armsCount;
}
std::string person::GetName() const
{
    return name;
}
Job* person::GetJob() const
{
    return job;
}
Gender person::GetGender() const
{
    return gender;
}


const char* person::GetGenderStr() const
{
   return gender == 0 ? "male" : gender == 1 ? "female": "attentionseeker";
}