#ifndef DATE_1_H
#define DATE_1_H

#include <iostream>
#include <string> 

class Date 
{
public:
    Date (int = 1, int = 1, int = 1900);
    int checkDay(int);   // ��� ��������������� ������� ��� �����������. 
	void num_decompose(int, int);	// ���������� ����� �� ��������� �����
    void print_ddmmyy() const;
	void print_ddyyyy() const;
	void print_alpha() const;
private:
    int month;  // 1 - 12
    int day;    // 1 - 31 � ����������� �� ������
    int year;   // ����� ���
	int dcmpsd_year[4];	// ��� ������������ �� �����
};

#endif


