#include <iostream>
#include <string> 
#include <time.h>
using int32 = int;

class Time 
{
public:
     Time(int = 0, int = 0, int = 0);      // конструктор класса.
    //~Time();      // деструктор класса.

    void set_time(int,int,int);
    void set_hour(int);
    void set_minute(int);
    void set_second(int);

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