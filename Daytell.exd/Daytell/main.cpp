//#include "class_time.h"
#include <iostream>
#include <string> 

using namespace std;

class Increment
{
public:
    Increment(int c = 0, int i = 1);
    void addIncrement() { count += increment; }
    void print() const;

private:
    int count;
    const int increment;    // константный элемент данных
};

// Конструктор класса Increment
Increment::Increment(int c, int i)
    : increment(i)
{ count = c;}

void Increment::print() const
{
    cout << "count = " << count
         << ", increment = " << increment << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Increment value(10, 5);

    cout << "Перед приращением: ";

    value.print();

    for (int j = 1; j <= 3; j++)
    {
        value.addIncrement();
        cout << "После приращения " << j << ": ";
        value.print();
    }

	return 0; // exit the application
}
