#include "Worker.h"

//static
int Worker::minimumWage = 1500;

//Contructors/Destructors
Worker::Worker()
	: voivodeship(""), Person() 
{ 
	std::cout << "Worker: default constructor, counter: " << counter << std::endl; 
}

Worker::Worker(std::string name, std::string surrname, int year, std::string voi) 
	: voivodeship(voi), Person(name, surrname, year) 
{ 
	std::cout << "Worker: parametric constructor, counter: " << counter << std::endl; 
}

Worker::Worker(Worker& copy) 
	: voivodeship(copy.voivodeship), Person(copy.name, copy.surrname, copy.birthDate) 
{ 
	std::cout << "Worker: copy constructor, counter: " << counter << std::endl; 
}

Worker::~Worker() 
{ 
	std::cout << "Worker: destructor, counter: " << counter << std::endl; 
}

//Functions
void Worker::display()
{ 
	std::cout << name << " " << surrname << " " << birthDate << " " << voivodeship;
}