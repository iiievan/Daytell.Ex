#include <iostream>
#include <string> 
#include "class_time.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Time t;

    t.set_hour(18).set_minute(40).set_second(4);

    cout << " Military time: " ;
    t.print_military();
    cout << endl << " Standart time: ";
    t.print_standart();

    cout << endl << endl << " New standart time: ";
    t.set_time(20, 20, 20).print_standart();
    cout << endl;
    
	return 0; // exit the application
}
