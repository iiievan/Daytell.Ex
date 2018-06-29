#include <iostream>
#include <string> 

using namespace std;

class Test
{
public:
    Test(int = 0);
    void print() const;
private:
    int x;
};

Test::Test(int a) { x = a; }    // конструктор

void Test::print() const
{
    cout << "         x = " << x << endl
         << "   this->x = " << this->x << endl
         << " (*this).x = " << (*this).x << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Test a(12);

    a.print();
    
	return 0; // exit the application
}
