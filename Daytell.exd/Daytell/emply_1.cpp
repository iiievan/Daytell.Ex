#include "emply_1.h"
#include <iostream>
#include <string> 
#include <assert.h>

using namespace std;

// ������� ���������� �������� �������� ������
int Employee::o_count = 0;

int Employee::getCount() { return o_count; }

Employee::Employee (const char *first, const char *last)
{
    firstName = new char[strlen(first) + 1 ];
    assert(firstName != 0);     // �������� ��������� ������
    strcpy(firstName, first);

    lastName = new char[strlen(last) + 1 ];
    assert(lastName != 0);  // �������� ��������� ������
    strcpy(lastName, last);

    o_count++;    // ����������� ���������� �������� �� 1.

    cout << "����������� Employee ���   " << firstName
         << "  " << lastName << " �������." << endl;
}

// ���������� ����������� ����������� ���������� ������.
Employee ::~Employee()
{
    cout << "~Employee() ������ ��� " << firstName
         << "  "  << lastName << endl;

    delete[] firstName;    // ������������ ������
    delete[] lastName;     // ������������ ������

    --o_count;    // ��������� ���������� �������� �� 1.
}

// ���������� ��� ���������
const char *Employee::getFirstName() const
{ return firstName; }

// � ��� �������
const char *Employee::getLastName() const
{
    return lastName;
}
