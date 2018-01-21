#include <iostream>
#include <string> 
#include <time.h>
using int32 = int;

#define DAY_DIV        86400
#define HOUR_DIV        3600
#define MINUTE_DIV        60


class Time 
{
public:
     Time();      // конструктор класса.
    //~Time();      // деструктор класса.

    void set_time(int,int,int);
    void set_hour(int);
    void set_minute(int);
    void set_second(int);

    int get_hour();
    int get_minute();
    int get_second();

    void print_standart();
    void print_military();

private:

    int hour;
    int minute; 
    int second;       
};