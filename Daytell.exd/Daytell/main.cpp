#include <iostream>
#include <string> 
#include "t_stack.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	Stack<float> floatStack(5);
	static float f = 1.1;
	cout << "Размещение элементов в floatStack" << endl;

	while (floatStack.push(f))
	{
		cout << "  ";
		f += 1.1;
	}
    
	cout << endl << "Стек заполнен. Невозможно разместить еще хоть один элемент."
		 << endl
		 << "Выталкивание элементов из floatStack" << endl;

	while (floatStack.pop(f))
	{
		cout << "  ";

	}

	cout << endl << "Стек пуст. Вот и все." << endl;

	Stack<int> intStack;
	static int i = 1;
	cout << "Размещение элементов в intStack" << endl;

	while (intStack.push(i))
	{
		cout << "  ";
		i += 1;
	}

	cout << endl << "Стек заполнен. Невозможно разместить еще хоть один элемент."
		<<  endl
		<< "Выталкивание элементов из intStack" << endl;

	while (intStack.pop(i))
	{
		cout << "  ";

	}

	cout << endl << "Стек пуст. Вот и все." << endl;
	return 0; // exit the application
}
