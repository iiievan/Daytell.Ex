#include <iostream>
#include <vector> 
#include <iterator> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<int> myVector_1(10);	//так объявляется вектор в 10 элементов и сразу же инициализируется нуляме

	//vector<int> myVector;	//так объявляется вектор в 10 элементов, но он не иницилизируется ничем. На печать ничего не выведется.
	//myVector.reserve(10);	// Но зато так быстрее его задать.
	
	cout << "Исходный  массив: ";
	for (int i = 0; i < myVector_1.size(); i++)
	{
		myVector_1[i] = i;
		cout << myVector_1[i] << "  " ;
	}

	cout << endl << "Cкопированный массив: ";
	vector<int> myVector_2(myVector_1);	// при объявлении первого вектора копируется второй вектор.

	for (int i = 0; i < myVector_2.size(); i++)
	{
		cout << myVector_2[i] << "  ";
	}
	cout << endl;

	// сравниваем векторы
	if (myVector_1 == myVector_2)
		cout << endl << " Вектор1 == Вектору2" << endl;

	myVector_1.insert(myVector_1.end(), 10);
	myVector_1.insert(myVector_1.end(), 11);
	myVector_1.insert(myVector_1.end(), 12);

	// вывод на экран элементов вектора
	copy(myVector_1.begin(),	//начало массива в векторе
		myVector_1.end(),		// конец массива в векторе
		ostream_iterator<int>(cout, "  "));	// итератор потока вывода

	cout << endl;

	return 0; // exit the application
}
