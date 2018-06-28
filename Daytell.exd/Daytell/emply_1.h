#ifndef EMPLY_1_H
#define EMPLY_1_H

#include "date_1.h"
#include <iostream>
#include <string> 

class Employee 
{
public:
    Employee(char *, char *, int, int, int, int, int, int);
    void print() const;
private:
    char lastName[25];
    char firstName[25];
    Date birthDate;
    Date hireDate;
};

#endif
