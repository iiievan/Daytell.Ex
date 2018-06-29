#include "class_time.h"

#define DAY_DIV        86400
#define HOUR_DIV        3600
#define MINUTE_DIV        60

#define TIMEZONE         -3     // часовой пояс.

// конструктор присваивает текущее время элементам класса.
Time::Time(int hr, int min, int sec) { set_time(hr, min, sec); }

Time &Time::set_time(int h,int m,int s)
{
    hour   = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;

    return *this;       // возможность сцепления
}

Time &Time::set_hour(int h)
{
    hour   = (h >= 0 && h < 24) ? h : 0;

    return *this;       // возможность сцепления
}

Time &Time::set_minute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;

    return *this;       // возможность сцепления
}

Time &Time::set_second(int s)
{
    second = (s >= 0 && s < 60) ? s : 0;

    return *this;       // возможность сцепления
}

int Time::get_hour()   const { return hour; }
int Time::get_minute() const { return minute; }
int Time::get_second() const { return second; }

void Time::print_military() const
{
    std::cout << (hour < 10 ? "0" : "") << hour << ":"
              << (minute < 10 ? "0" : "") << minute << ":"
              << (second < 10 ? "0" : "") << second;
}

void Time::print_standart() const
{
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << (minute < 10 ? "0" : "") << minute << ":"
        << (second < 10 ? "0" : "") << second
        << (hour < 12 ? " AM" : " PM");
}


