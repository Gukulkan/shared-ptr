// #ifndef WEAPON_H_INCLUDED   сами инклуды обворачивать не надо
// #define WEAPON_H_INCLUDED

#ifndef _GUN_H
#define _GUN_H

#include "Weapon.h"

// #endif

class Gun : public Weapon 
{
  public:
    Gun();
    ~Gun();

    virtual void GetShot() override;
};


#endif