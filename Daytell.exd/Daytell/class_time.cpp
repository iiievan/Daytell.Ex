#include "class_time.h"

#define DAY_DIV        86400
#define HOUR_DIV        3600
#define MINUTE_DIV        60

#define TIMEZONE         -3     // часовой пояс.

// конструктор присваивает текущее время элементам класса.
Time::Time() { set_actual_time(); }

void Time::set_time(int h,int m,int s)
{
    hour   = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::set_hour(int h)
{
    hour   = (h >= 0 && h < 24) ? h : 0;
}

void Time::set_minute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::set_second(int s)
{
    second = (s >= 0 && s < 60) ? s : 0;
}

int Time::get_hour() { return hour; }
int Time::get_minute() { return minute; }
int Time::get_second() { return second; }

void Time::print_military()
{
    std::cout << (hour < 10 ? "0" : "") << hour << ":"
              << (minute < 10 ? "0" : "") << minute << ":"
              << (second < 10 ? "0" : "") << second;
}

void Time::print_standart()
{
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << (minute < 10 ? "0" : "") << minute << ":"
        << (second < 10 ? "0" : "") << second
        << (hour < 12 ? " AM" : " PM");
}


void  Time::set_actual_time()
{
    time_t  seconds_after_1970;
       int  days,
              hr,
             min,
             sec;

    seconds_after_1970 = time(NULL);       // берем текущее время.

    days = (int)seconds_after_1970 / DAY_DIV;
    sec = (int)seconds_after_1970 - days*DAY_DIV;
    hr = sec / HOUR_DIV;                // часов
    sec = sec - hr*HOUR_DIV;
    hr  = hr + TIMEZONE;    		    // разница в часовых поясах.
    min = sec / MINUTE_DIV;             // минут
    sec = sec - min*MINUTE_DIV;			// секунд

    hour   = hr;
    minute = min;
    second = sec;
}

bool Time::tick()
{
    static int old_second_value;

    if (old_second_value != second)
    {
        old_second_value = second;

        if (second > 59)
        {
            second = 0;
            minute++;

            if (minute > 59)
            {
                minute = 0;
                hour++;
                if (hour > 23)
                {
                    hour = 0;
                }
            }
            
        }

        return true;
    }
    else
    {
        return false;
    }
}


