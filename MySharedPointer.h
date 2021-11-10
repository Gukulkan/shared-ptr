#pragma once

template<class T>

class MySharedPointer
{

public: 

	explicit MySharedPointer(T* ptr);

	MySharedPointer(const MySharedPointer& msp);

	~MySharedPointer();

	T* get() const;

	MySharedPointer& operator=(MySharedPointer& msp);

private:
	T* my_ptr = nullptr;
	int* counter;
};



