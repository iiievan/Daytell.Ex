#ifndef EMPLY_1_H
#define EMPLY_1_H

class Employee 
{
public:
    Employee(const char *, const char *);   // �����������
    ~Employee();                // ����������

    const char *getFirstName() const;   // ���������� ���
    const char *getLastName() const;    // ���������� �������

    static int getCount();  // ���������� ����� ��������� ��������
private:
    char *lastName;
    char *firstName;

    // ������� ���������� ��������� ��������
    static int o_count;   
};

#endif
