#pragma once

#define PERSON_H
#include <iostream>

class Person 
{
protected:
    static int counter;
    std::string name;
    std::string surrname;
    int birthDate;
public:
    Person();
    Person(std::string name, std::string surrname, int year);
    Person(Person& copy);
    virtual ~Person();

    virtual void display() = 0;
    virtual int age();

    friend std::ostream& operator<<(std::ostream& out, Person& os);
};