
#include "Pensioner.h"

std::ostream& operator<<(std::ostream& out, Person& os) {
    return out << os.name << " " << os.surrname << " " << os.birthDate;
}


int main()
{
    //a)
    Worker* pr1 = new Worker("Adrian", "Jarus", 1945, "Pomorskie");
    ITspecialist* inf1 = new ITspecialist("Bartek", "Rowid", 1997, "Wlkp", "FullStack Dev", 5.3);
    Pensioner* em1 = new Pensioner("Janina", "Rogowska", 1999, 800);

    pr1->display();
    std::cout << std::endl;
    inf1->display();
    std::cout << std::endl;
    em1->display();
    std::cout << std::endl;

    //b)
    std::cout << "age: " << pr1->age() << std::endl;
    std::cout << "age: " << inf1->age() << std::endl;
    std::cout << "age: " << em1->age() << std::endl;

    //c)
    Person** wsk = new Person * [3];
    wsk[0] = pr1;
    wsk[1] = inf1;
    wsk[2] = em1;

    for (int i = 0; i < 3; i++) {
        std::cout << *wsk[i] << std::endl;
    }

    //d)
    for (int i = 0; i < 3; i++) {
        delete wsk[i];
    }
    delete[] wsk;

    return 1;
}