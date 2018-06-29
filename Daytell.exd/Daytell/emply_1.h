#ifndef EMPLY_1_H
#define EMPLY_1_H

class Employee 
{
public:
    Employee(const char *, const char *);   // конструктор
    ~Employee();                // деструктор

    const char *getFirstName() const;   // возвращает имя
    const char *getLastName() const;    // возвращает фамилию

    static int getCount();  // возвращает число созданных объектов
private:
    char *lastName;
    char *firstName;

    // подсчет количества созданных объектов
    static int o_count;   
};

#endif
