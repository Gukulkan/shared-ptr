#include <iostream>
#include "MySharedPointer.h"

template <class T>
MySharedPointer<T>::MySharedPointer(T* ptr)
{
	std::cout << "MySharedPointer constructor" << std::endl;

	my_ptr = ptr;
	counter = new int(1);
}

template <class T>
MySharedPointer<T>::MySharedPointer(const MySharedPointer& msp)
{
	my_ptr = msp.my_ptr;
	counter = msp.counter;
	(*counter)++;
}

template <class T>
MySharedPointer<T>::~MySharedPointer()
{
	std::cout << "MySharedPointer destructor" << std::endl;
	(*counter)--;
	if (*counter <= 0 && nullptr != my_ptr) {
		delete my_ptr;
	}
}

template <class T>
T* MySharedPointer<T>::get() const{
	return my_ptr;
}

template <class T>
MySharedPointer<T>& MySharedPointer<T>::operator=(MySharedPointer& msp)
{
	my_ptr = msp.my_ptr;
	counter = msp.counter;
	(*counter)++;
}
