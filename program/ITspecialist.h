#pragma once

#define ITSPECIALIST_H
#include "Worker.h"

class ITspecialist 
    : public Worker {
private:
    std::string specialization;
    double multiplier;
    double salary;
public:
    ITspecialist();
    ITspecialist(std::string im, std::string naz, int rok, std::string woj, std::string spec, double mn);
    ITspecialist(ITspecialist& copy);
    ITspecialist(ITspecialist& copy, std::string im, std::string naz, int rok);
    virtual ~ITspecialist();

    virtual void display();
};