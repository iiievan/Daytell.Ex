#include <iostream>
#include <string> 

using namespace std;

class Count
{
    //friend void setX(Count &, int);
public:
    Count() {  x = 0; }
    void print() const { std::cout << x << std::endl; }
private:
    int x;
};

void setX(Count &c, int val)
{
    c.x = val;      // ���������: setX - ���� Count
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Count object;

    cout << "object.x ����� ������ ��������: ";
    object.print();
    cout << "object.x ����� ������ ������������� ������� setX: ";
    setX(object, 8);
    object.print();
    
	return 0; // exit the application
}
