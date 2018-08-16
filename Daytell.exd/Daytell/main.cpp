#include <iostream>
#include <vector> 
#include <iterator> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	vector <int> vecInt(3, 100); ///������� ������ �� 3 ��������� � ��������� ��� ��������� 100
	vector <int>::iterator it;
	it = vecInt.begin(); ///�������� ��������� �� vec[0]

						 ///������ ����������� ������ �� 4 ���������
	vecInt.insert(it, 200); ///� ������ ��������� ������������ 200

							///������ ����������� ������ �� 5 ���������
	it = vecInt.begin() + 3;///������ ��������� �� 4 ������� (0-�������+3-��������)
	vecInt.insert(it , 300);///� ��������� ��������� ������������ 300
	it = vecInt.begin() + 4;/// �������� ��� ����� �� �������� ���������.
	vecInt.insert(it + 1 , 900);///������ ����������� ������ �� 6 ��������� � 5 ��������� ������������ 900

	cout << "Vector contains: ";
	for (int i = 0; i < vecInt.size(); ++i)
	{
		cout << vecInt[i] << ends;
	}

	cout << "\nVector max_size: " << vecInt.max_size();
	cout << "\nVector size: " << vecInt.size(); ///������� ������ �������
	vecInt.resize(10); ///����������� ������ �� 10 ���������
	cout << "\nNew vector size: " << vecInt.size() << endl; ///������� ������ �������

	return 0; // exit the application
}
