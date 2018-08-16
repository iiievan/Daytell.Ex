#include <iostream>
#include <vector> 
#include <iterator> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<int> myVector_1(10);	//��� ����������� ������ � 10 ��������� � ����� �� ���������������� ������

	//vector<int> myVector;	//��� ����������� ������ � 10 ���������, �� �� �� ��������������� �����. �� ������ ������ �� ���������.
	//myVector.reserve(10);	// �� ���� ��� ������� ��� ������.
	
	cout << "��������  ������: ";
	for (int i = 0; i < myVector_1.size(); i++)
	{
		myVector_1[i] = i;
		cout << myVector_1[i] << "  " ;
	}

	cout << endl << "C������������ ������: ";
	vector<int> myVector_2(myVector_1);	// ��� ���������� ������� ������� ���������� ������ ������.

	for (int i = 0; i < myVector_2.size(); i++)
	{
		cout << myVector_2[i] << "  ";
	}
	cout << endl;

	// ���������� �������
	if (myVector_1 == myVector_2)
		cout << endl << " ������1 == �������2" << endl;

	myVector_1.insert(myVector_1.end(), 10);
	myVector_1.insert(myVector_1.end(), 11);
	myVector_1.insert(myVector_1.end(), 12);

	// ����� �� ����� ��������� �������
	copy(myVector_1.begin(),	//������ ������� � �������
		myVector_1.end(),		// ����� ������� � �������
		ostream_iterator<int>(cout, "  "));	// �������� ������ ������

	cout << endl;

	return 0; // exit the application
}
