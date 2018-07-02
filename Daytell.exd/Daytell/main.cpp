#include <iostream>
#include <string> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	int mass[] = { 0, 1, 7, 11, 4, 8, 4, 11, 8, 8, 6 };

	static int maximum = 0;
	const int mass_size = sizeof(mass) / sizeof(*mass);	// вычисляем размер массива.

	// находим наибольшее число в массиве.
	for (int j = 0; j <= mass_size; j++)
	{
		if (mass[j] > maximum)
		{
			maximum = mass[j];
		}
	}

	maximum++;	// это наш показатель, что число уже сравнивалось, берем максимальное, которого нет в массиве.

	for (int counter = 0; counter < mass_size; counter++)
	{
		// пропускаем ход если число уже сравнивалось.
		if (mass[counter] == maximum)
		{			
			continue;
		}

		// последний символ не сравниваем
		for (int i = counter + 1; i <= mass_size; i++)
		{
			if (mass[i] == mass[counter] && 
				mass[i] != maximum)
			{
				mass[i] = maximum;
			}
		}

		if (mass[counter] != maximum)
		{
			cout << " уникальный номер в массиве " << " = " << mass[counter] << endl;
		}
	}

	return 0; // exit the application
}
