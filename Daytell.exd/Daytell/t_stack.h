#ifndef  T_STACK_H
#define  T_STACK_H

#include <iostream>
#include <stdlib.h>
#include <string> 

template <class T> 
class Stack
{
public:
	Stack(int = 10);	// размер стека равен 10
	~Stack();
	int isEmpty() const { return top == -1; }
	int isFull() const { return top == size - 1; }
	bool push(const T);  //поместить элемент в стек
	bool pop(T);		    //вытолкнуть элемент из стека
private:
	int    size;	// размер стека
	int    top;		// положение вершины стека
	T *stackPtr;	// указатель на стек
};

template<class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10; //задаем стек разумно

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

		// сначала пушим, а потом пишем иначе будет сдвиг -1 и неправильное отображение данных
		cout << endl << "element  " << top << " = " << stackPtr[top]
			<< " sucsessfully pushed";

		return true;	// элемент успешно помещен в стек
	}
	return false;
}

template <class T>
bool Stack<T>::pop(T popValue)
{
	if (!isEmpty())
	{
		// сначала пишем, а потом попим иначе будет сдвиг -1 и неправильное отображение данных
		cout << endl << "element  " << top << " = " << stackPtr[top]
			<< " sucsessfully popped";

		popValue = stackPtr[top--];

		return true;	// элемент успешно вытолкнут из стека
	}
	return false;
}

#endif // ! T_STACK_H
