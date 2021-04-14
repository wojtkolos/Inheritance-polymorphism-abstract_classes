#include "Pensioner.h"

//Contructors/Destructors
Pensioner::Pensioner()
	: pension(0), Person() 
{ 
	std::cout << "Pensioner: konstruktor domyslny, counter: " << counter << std::endl;
}

Pensioner::Pensioner(std::string name, std::string surrname, int year, int pension) 
	: pension(pension), Person(name, surrname, year) 
{ 
	std::cout << "Pensioner: parametric constructor, counter: " << counter << std::endl; 
}

Pensioner::Pensioner(Pensioner& copy) 
	: pension(copy.pension), Person(copy.name, copy.surrname, copy.birthDate) 
{ 
	std::cout << "Pensioner: copy constructor, counter: " << counter << std::endl;
}

Pensioner::Pensioner(Person& copy, int em) 
	: pension(em), Person(copy) 
{
	std::cout << "Pensioner: copy constructor person + pension, counter: " << counter << std::endl; 
}

Pensioner::~Pensioner() 
{ 
	std::cout << "Pensioner: destructor, counter: " << counter << std::endl;
}


//Functions
void Pensioner::display()
{
	std::cout << name << " " << surrname << " " << birthDate << " " << pension;
}