#include <iostream>
#include <string> 
#include "t_stack.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	Stack<float> floatStack(5);
	static float f = 1.1;
	cout << "���������� ��������� � floatStack" << endl;

	while (floatStack.push(f))
	{
		cout << "  ";
		f += 1.1;
	}
    
	cout << endl << "���� ��������. ���������� ���������� ��� ���� ���� �������."
		 << endl
		 << "������������ ��������� �� floatStack" << endl;

	while (floatStack.pop(f))
	{
		cout << "  ";

	}

	cout << endl << "���� ����. ��� � ���." << endl;

	Stack<int> intStack;
	static int i = 1;
	cout << "���������� ��������� � intStack" << endl;

	while (intStack.push(i))
	{
		cout << "  ";
		i += 1;
	}

	cout << endl << "���� ��������. ���������� ���������� ��� ���� ���� �������."
		<<  endl
		<< "������������ ��������� �� intStack" << endl;

	while (intStack.pop(i))
	{
		cout << "  ";

	}

	cout << endl << "���� ����. ��� � ���." << endl;
	return 0; // exit the application
}
