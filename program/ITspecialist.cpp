#include "ITspecialist.h"


//Contructors/Destructors
ITspecialist::ITspecialist() 
	: specialization(""), multiplier(0.0), salary(0), Worker() 
{ 
	std::cout << "ITspecialist: default constructor, counter: " << counter << std::endl; 
}

ITspecialist::ITspecialist(std::string im, std::string naz, int rok, std::string woj, std::string spec, double mn) 
	: specialization(spec), multiplier(mn), salary(mn* minimumWage), Worker(im, naz, rok, woj) 
{
	std::cout << "ITspecialist: parametric constructor, counter: " << counter << std::endl; 
}

ITspecialist::ITspecialist(ITspecialist& copy) 
	: specialization(copy.specialization), multiplier(copy.multiplier), salary(copy.salary), Worker(copy.name, copy.surrname, copy.birthDate, copy.voivodeship) 
{ 
	std::cout << "ITspecialist: copy constructor, counter: " << counter << std::endl; 
}

ITspecialist::ITspecialist(ITspecialist& copy, std::string im, std::string naz, int rok) 
	: specialization(copy.specialization), multiplier(copy.multiplier), salary(copy.salary), Worker(im, naz, rok, copy.voivodeship)
{ 
	std::cout << "ITspecialist: copy constructor person + pension, counter: " << counter << std::endl; 
}

ITspecialist::~ITspecialist() 
{ 
	std::cout << "ITspecialist: destructor, counter: " << counter << std::endl; 
}


//Functions
void ITspecialist::display() 
{ 
	Worker::display(); std::cout << " " << specialization << " " << multiplier << " " << salary; 
}