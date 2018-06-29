#include <iostream>
#include <string> 
#include "emply_1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Количество служащих перед созданием объектов равно "
         << Employee::getCount() << endl;

    Employee *e1Ptr = new Employee("Susan", "Baker");
    Employee *e2Ptr = new Employee("Robert", "Jones");

    cout << endl << "Служащий 1: "
         << e1Ptr->getFirstName()
         << "  "  << e1Ptr->getLastName()
         << endl << "Служащий 2: "
         << e2Ptr->getFirstName()
         << "  "  << e2Ptr->getLastName()
         << endl << endl;

    delete e1Ptr;   // освобождение памяти
    delete e2Ptr;   // освобождение памяти

    cout << "Количество служащих после удаления равно: "
         << Employee::getCount() << endl;
    
	return 0; // exit the application
}
