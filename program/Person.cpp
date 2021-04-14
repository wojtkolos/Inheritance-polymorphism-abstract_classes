#include "Person.h"


//static
int Person::counter = 0;


//Contructors/Destructors
Person::Person() 
	: name(""), surrname(""), birthDate(0) 
{ 
	++counter; std::cout << "Person: default constructor, counter: " << counter << std::endl; 
}

Person::Person(std::string name, std::string surrname, int year) 
	: name(name), surrname(surrname), birthDate(year) 
{ 
	++counter; ; std::cout << "Person: parametric constructor, counter: " << counter << std::endl; 
}

Person::Person(Person& copy) 
	: name(copy.name), surrname(copy.surrname), birthDate(copy.birthDate) 
{
	++counter; std::cout << "Person: copy constructor, counter: " << counter << std::endl; 
}

Person::~Person() 
{ 
	std::cout << "Person: destructor, counter: " << --counter << std::endl; 
}

//Functions
int Person::age() 
{ 
	return 2020 - birthDate; 
}