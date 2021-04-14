#pragma once

#define WORKER_H
#include "Person.h"


class Worker 
    : public Person {
protected:
    std::string voivodeship;
    static int minimumWage;
public:
    Worker();
    Worker(std::string name, std::string surrname, int year, std::string voi);
    Worker(Worker& copy);
    virtual ~Worker();

    virtual void display();
};