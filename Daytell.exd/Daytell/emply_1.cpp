#include "emply_1.h"
#include <iostream>
#include <string> 
#include <assert.h>

using namespace std;

// задание начального значения элемента данных
int Employee::o_count = 0;

int Employee::getCount() { return o_count; }

Employee::Employee (const char *first, const char *last)
{
    firstName = new char[strlen(first) + 1 ];
    assert(firstName != 0);     // проверка выделения памяти
    strcpy(firstName, first);

    lastName = new char[strlen(last) + 1 ];
    assert(lastName != 0);  // проверка выделения памяти
    strcpy(lastName, last);

    o_count++;    // увеличиваем количество объектов на 1.

    cout << "Конструктор Employee для   " << firstName
         << "  " << lastName << " вызыван." << endl;
}

// Деструктор освобождает динамически выделенную память.
Employee ::~Employee()
{
    cout << "~Employee() вызван для " << firstName
         << "  "  << lastName << endl;

    delete[] firstName;    // освобождение памяти
    delete[] lastName;     // освобождение памяти

    --o_count;    // уменьшаем количество объектов на 1.
}

// Возвращаем имя служащего
const char *Employee::getFirstName() const
{ return firstName; }

// и его фамилию
const char *Employee::getLastName() const
{
    return lastName;
}
