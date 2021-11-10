#include <iostream>
#include "MachineGun.h"

MachineGun::MachineGun() 
{
  std::cout << "Constructor MachineGun" << std::endl;
}

MachineGun::~MachineGun()
{
    std::cout << "Destructor MachineGun" << std::endl;
}

void MachineGun::GetShot() 
{
  std::cout << "Machine Gun do piu-piu-piu!" << std::endl;
}