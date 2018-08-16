#include <iostream>
#include <vector> 

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


	return 0; // exit the application
}
