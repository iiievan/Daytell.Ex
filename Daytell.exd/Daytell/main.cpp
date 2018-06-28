#include "main.h"
#include "emply_1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Employee e("Боб", "Джон", 7, 24, 49, 3, 12, 88);
    cout << endl;

    e.print();
    cout << endl << "Проверка конструктора Date "
         << " c неверными значениями: " << endl;
    Date d(14, 35, 94);     // неверные значения Date

    
	return 0; // exit the application
}
