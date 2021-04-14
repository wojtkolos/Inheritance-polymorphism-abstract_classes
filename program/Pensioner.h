#pragma once

#define PENSIONER_H
#include "ITspecialist.h"

class Pensioner 
    : public Person {
private:
    int pension;
public:
    Pensioner();
    Pensioner(std::string name, std::string surrname, int year, int pension);
    Pensioner(Pensioner& copy);
    Pensioner(Person& copy, int em);
    virtual ~Pensioner();

    virtual void display();
};