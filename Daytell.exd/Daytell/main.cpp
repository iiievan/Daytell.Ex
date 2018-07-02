#include <iostream>
#include <string> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	int mass[] = { 0, 1, 7, 11, 4, 8, 4, 11, 8, 8, 6 };

	static int maximum = 0;
	const int mass_size = sizeof(mass) / sizeof(*mass);	// ��������� ������ �������.

	// ������� ���������� ����� � �������.
	for (int j = 0; j <= mass_size; j++)
	{
		if (mass[j] > maximum)
		{
			maximum = mass[j];
		}
	}

	maximum++;	// ��� ��� ����������, ��� ����� ��� ������������, ����� ������������, �������� ��� � �������.

	for (int counter = 0; counter < mass_size; counter++)
	{
		// ���������� ��� ���� ����� ��� ������������.
		if (mass[counter] == maximum)
		{			
			continue;
		}

		// ��������� ������ �� ����������
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
			cout << " ���������� ����� � ������� " << " = " << mass[counter] << endl;
		}
	}

	return 0; // exit the application
}
