#include <iostream>
#include <string> 
#include "emply_1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "���������� �������� ����� ��������� �������� ����� "
         << Employee::getCount() << endl;

    Employee *e1Ptr = new Employee("Susan", "Baker");
    Employee *e2Ptr = new Employee("Robert", "Jones");

    cout << endl << "�������� 1: "
         << e1Ptr->getFirstName()
         << "  "  << e1Ptr->getLastName()
         << endl << "�������� 2: "
         << e2Ptr->getFirstName()
         << "  "  << e2Ptr->getLastName()
         << endl << endl;

    delete e1Ptr;   // ������������ ������
    delete e2Ptr;   // ������������ ������

    cout << "���������� �������� ����� �������� �����: "
         << Employee::getCount() << endl;
    
	return 0; // exit the application
}
