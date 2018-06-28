#include "emply_1.h"
using namespace std;

Employee::Employee (char *fname, char *lname,
                    int bmonth, int bday, int byear,
                    int hmonth, int hday, int hyear)
            : birthDate (bmonth, bday, byear), hireDate(hmonth, hday, hyear)
{
    // копирование fname в firstName и проверка их совпадения
    int lenght = strlen(fname);
    lenght = lenght < 25 ? lenght : 24;
    strncpy(firstName, fname, lenght);
    firstName[lenght] = '\0';

    // копирование lname в lastName и проверка их совпадения
    lenght = strlen(lname);
    lenght = lenght < 25 ? lenght : 24; 
    strncpy(lastName, lname, 24);
    lastName[lenght] = '\0';

    cout << "Конструктор объекта Employee: "
         << firstName << ' ' << lastName << endl;
}

void Employee :: print() const
{
    cout << lastName << ", " << firstName << endl << "Нанят: ";
    hireDate.print();
    cout << " День рождения: ";
    birthDate.print();
    cout << endl;
}
