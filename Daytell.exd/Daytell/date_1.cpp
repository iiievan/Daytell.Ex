#include "date_1.h"

using namespace std;

Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= 12)     // �������� ������
        month = mn;
    else
    {
        month = 1;
        cout << "����� "  << mn
             << " ��������. ���������� � 1."
             << endl;
    }

    year = yr;              // �� ���������
    day = checkDay(dy);     // ��������� ������������ ���.

    cout << "����������� ������� Date ";
    print ();
    cout << endl;
}

int Date::checkDay(int testDay)
{
    static int daysPerMonth[13] = { 0, 31, 28, 31, 
                                   30, 31, 30, 31, 
                                   31, 30, 31, 30, 31};

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // �������� ����������� ����.
    if (month == 2 &&
        testDay == 29 &&
        (year % 400 == 0 || 
         ((year % 4 == 0) && 
          (year % 100 != 0))))
    return testDay;

    cout << "���� " << testDay
         << " ��������. ���������� ���� 1." << endl;

    // ���� �������� ��������, ���� �� ��������� � ����������������.
    return 1;   
}

void Date::print() const
{ cout << month << '/' << day << '/' << year; }