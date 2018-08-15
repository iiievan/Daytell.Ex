#ifndef  T_STACK_H
#define  T_STACK_H

#include <iostream>
#include <stdlib.h>
#include <string> 

template <class T> 
class Stack
{
public:
	Stack(int = 10);	// ������ ����� ����� 10
	~Stack();
	int isEmpty() const { return top == -1; }
	int isFull() const { return top == size - 1; }
	bool push(const T);  //��������� ������� � ����
	bool pop(T);		    //���������� ������� �� �����
private:
	int    size;	// ������ �����
	int    top;		// ��������� ������� �����
	T *stackPtr;	// ��������� �� ����
};

template<class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10; //������ ���� �������

	top = -1;
	stackPtr = new T[size];
}

template<class T>
Stack<T>::~Stack()
{
	delete[] stackPtr;
}

template<class T>
bool Stack<T>::push(const T item)
{
	if (!isFull())
	{
		stackPtr[++top] = item;

		// ������� �����, � ����� ����� ����� ����� ����� -1 � ������������ ����������� ������
		cout << endl << "element  " << top << " = " << stackPtr[top]
			<< " sucsessfully pushed";

		return true;	// ������� ������� ������� � ����
	}
	return false;
}

template <class T>
bool Stack<T>::pop(T popValue)
{
	if (!isEmpty())
	{
		// ������� �����, � ����� ����� ����� ����� ����� -1 � ������������ ����������� ������
		cout << endl << "element  " << top << " = " << stackPtr[top]
			<< " sucsessfully popped";

		popValue = stackPtr[top--];

		return true;	// ������� ������� ��������� �� �����
	}
	return false;
}

#endif // ! T_STACK_H
