#include "emply_1.h"
using namespace std;

Employee::Employee (char *fname, char *lname,
                    int bmonth, int bday, int byear,
                    int hmonth, int hday, int hyear)
            : birthDate (bmonth, bday, byear), hireDate(hmonth, hday, hyear)
{
    // ����������� fname � firstName � �������� �� ����������
    int lenght = strlen(fname);
    lenght = lenght < 25 ? lenght : 24;
    strncpy(firstName, fname, lenght);
    firstName[lenght] = '\0';

    // ����������� lname � lastName � �������� �� ����������
    lenght = strlen(lname);
    lenght = lenght < 25 ? lenght : 24; 
    strncpy(lastName, lname, 24);
    lastName[lenght] = '\0';

    cout << "����������� ������� Employee: "
         << firstName << ' ' << lastName << endl;
}

void Employee :: print() const
{
    cout << lastName << ", " << firstName << endl << "�����: ";
    hireDate.print();
    cout << " ���� ��������: ";
    birthDate.print();
    cout << endl;
}
