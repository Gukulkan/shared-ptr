#include <iostream>
#include <vector>

#include "MySharedPointer.h"

#include "Gun.h"
#include "MachineGun.h"


#include "MySharedPointer.cpp"

int main() {


	{
		MySharedPointer<Weapon> msp = MySharedPointer<Weapon>(new Gun());
		MySharedPointer<Weapon> msp2 = MySharedPointer<Weapon>(new Gun());
		MySharedPointer<Weapon> msp3 = msp2;

	}

	std::vector<MySharedPointer<Weapon>> vptr;

	for (int i = 0; i < 10; ++i) {
		MySharedPointer<Weapon> msptr = MySharedPointer<Weapon>(new Gun());
		vptr.push_back(msptr);
	}

	for (int i = 0; i < vptr.size(); ++i) {
		vptr.at(i).get()->GetShot();
	}


}