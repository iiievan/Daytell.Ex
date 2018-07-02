#include <iostream>
#include <string> 
#include "date_1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	Date d(02, 07, 2018);

	cout << "Дата в формате DDMMYY: ";
	d.print_ddmmyy();
	cout  << endl;

	cout << "Дата в формате DDYYYY: ";
	d.print_ddyyyy();
	cout << endl;

	cout << "Дата в формате - месяц DD, YYYY: ";
	d.print_alpha();
	cout << endl;

	return 0; // exit the application
}
