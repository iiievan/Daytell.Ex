#include "date_1.h"

using namespace std;

Date::Date(int dy, int mn, int yr)
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
	num_decompose(yr, 4);	// �������� ��� �� �����.
    day = checkDay(dy);     // ��������� ������������ ���.

    cout << "����������� ������� Date ";
	print_ddmmyy();
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

/*
* @param num    ����� ��� ����������
* @param limit  ����������� ���������� ���������� ����
*/
void Date::num_decompose(int num, int limit)
{
	int digits_count = 0;

	// �������� ������������ ��������, ����� ����� ���������� ����� ����
	if (num == 0) 
	{
	  dcmpsd_year[0] = 0;
	}

	// ��������������� ��������� ����� �� ����, ���� ��� ����
	while (num > 0 && limit) {
		// �������� ��������� ����� � ������
		dcmpsd_year[digits_count++] = num % 10;
		// ��������� � ��������� �����
		num /= 10;
		// ��������� ���������� ���������� ���������� ����
		limit--;
	}
}

void Date::print_ddmmyy() const
{ cout << day << '/' << month  << '/' << dcmpsd_year[1] << dcmpsd_year[0]; }

void Date::print_ddyyyy() const
{ cout  << day << '/' << year; }

void Date::print_alpha() const
{
	switch (month)
	{
	case 1 : 
		cout << "������";
		break;
	case 2:
		cout << "�������";
		break;
	case 3:
		cout << "����";
		break;
	case 4:
		cout << "������";
		break;
	case 5:
		cout << "���";
		break;
	case 6:
		cout << "����";
		break;
	case 7:
		cout << "����";
		break;
	case 8:
		cout << "������";
		break;
	case 9:
		cout << "��������";
		break;
	case 10:
		cout << "�������";
		break;
	case 11:
		cout << "������";
		break;
	case 12:
		cout << "�������";
		break;
	default:
		break;
	}

	cout << " " << day << ", " << year << "�.";
}
