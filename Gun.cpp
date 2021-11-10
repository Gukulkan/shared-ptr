#include <iostream>
#include "Gun.h"


Gun::Gun() 
{
  std::cout << "Constructor Gun" << std::endl;
}

Gun::~Gun()
{
    std::cout << "Destructor Gun" << std::endl;
}

void Gun::GetShot() 
{
  std::cout << "Gun do piu!" << std::endl;
}