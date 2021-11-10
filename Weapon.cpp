#include <iostream>

#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED

#include "Weapon.h"

#endif

Weapon::Weapon() 
{
  std::cout << "Constructor Weapon" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Destructor Weapon" << std::endl;
}

int Weapon::GetAmount() 
{
  return amount;
}

void Weapon::GetShot() 
{
  std::cout << "Shot here" << std::endl;
}