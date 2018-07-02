#include "date_1.h"

using namespace std;

Date::Date(int dy, int mn, int yr)
{
    if (mn > 0 && mn <= 12)     // проверка месяца
        month = mn;
    else
    {
        month = 1;
        cout << "Месяц "  << mn
             << " неверный. Установлен в 1."
             << endl;
    }

    year = yr;              // не проверяем
	num_decompose(yr, 4);	// разложим год на числа.
    day = checkDay(dy);     // проверяем правильность дня.

    cout << "Конструктор объекта Date ";
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

    // проверка високосного года.
    if (month == 2 &&
        testDay == 29 &&
        (year % 400 == 0 || 
         ((year % 4 == 0) && 
          (year % 100 != 0))))
    return testDay;

    cout << "День " << testDay
         << " неверный. Установлен день 1." << endl;

    // если неверное значение, обет не останется в противоречивости.
    return 1;   
}

/*
* @param num    Число для разложения
* @param limit  Максимально допустимое количество цифр
*/
void Date::num_decompose(int num, int limit)
{
	int digits_count = 0;

	// Отдельно обрабатываем ситуацию, когда число изначально равно нулю
	if (num == 0) 
	{
	  dcmpsd_year[0] = 0;
	}

	// Последовательно извлекаем цифры из года, пока они есть
	while (num > 0 && limit) {
		// Копируем очередную цифру в массив
		dcmpsd_year[digits_count++] = num % 10;
		// Переходим к следующей цифре
		num /= 10;
		// Уменьшаем допустимое количество оставшихся цифр
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
		cout << "январь";
		break;
	case 2:
		cout << "февраль";
		break;
	case 3:
		cout << "март";
		break;
	case 4:
		cout << "апрель";
		break;
	case 5:
		cout << "май";
		break;
	case 6:
		cout << "июнь";
		break;
	case 7:
		cout << "июль";
		break;
	case 8:
		cout << "август";
		break;
	case 9:
		cout << "сентябрь";
		break;
	case 10:
		cout << "октябрь";
		break;
	case 11:
		cout << "ноябрь";
		break;
	case 12:
		cout << "декабрь";
		break;
	default:
		break;
	}

	cout << " " << day << ", " << year << "г.";
}
