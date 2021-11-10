// обворачивать нужно все обьявления
// в студии здесь достаточно написать #pragma once
#ifndef _WEAPON_H
#define _WEAPON_H

class Weapon 
{
  private: 
    int amount;
    
  public:

    Weapon();
    virtual ~Weapon();
    
    int GetAmount();
    
    virtual void GetShot();

};

#endif