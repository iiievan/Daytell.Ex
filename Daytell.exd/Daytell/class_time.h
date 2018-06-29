#include <iostream>
#include <string> 
#include <time.h>
using int32 = int;

class Time 
{
public:
     Time(int = 0, int = 0, int = 0);      // конструктор класса.
    //~Time();      // деструктор класса.

    Time &set_time(int,int,int);

    Time &set_hour(int);
    Time &set_minute(int);
    Time &set_second(int);

    // функции чтени€ get ( обычно объ€вл€ютс€ как const)
    int get_hour() const;
    int get_minute() const;
    int get_second() const;

    void print_standart() const;
    void print_military() const;

private:

    int hour;       // 0 - 23
    int minute;     // 0 - 59
    int second;     // 0 - 59  
};