#include "main.h"
#include "emply_1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Employee e("���", "����", 7, 24, 49, 3, 12, 88);
    cout << endl;

    e.print();
    cout << endl << "�������� ������������ Date "
         << " c ��������� ����������: " << endl;
    Date d(14, 35, 94);     // �������� �������� Date

    
	return 0; // exit the application
}
