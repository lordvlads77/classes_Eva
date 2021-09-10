#pragma once
#include <string>
#include <iostream>
#include "Gender.hh"
#include "Job.hh"

class person
{
private:
    unsigned int armsCount{};
    std::string name;
    Job* job; 
    Gender gender{male};

public:
    person(unsigned int armsCount, std::string name, Job* job, Gender gender );
    ~person();

    unsigned int GetArmsCount() const; /*<--------------- This os read only */
    std::string GetName() const;
    Job* GetJob() const;
    Gender GetGender() const;
    const char* GetGenderStr() const;


};



