#ifndef DATE_1_H
#define DATE_1_H

#include <iostream>
#include <string> 

class Date 
{
public:
    Date (int = 1, int = 1, int = 1900);
    int checkDay(int);   // Ёто вспомогательна€ функци€ дл€ коструктора. 
    void print () const;
private:
    int month;  // 1 - 12
    int day;    // 1 - 31 в зависимости от мес€ца
    int year;   // любой год
};

#endif


