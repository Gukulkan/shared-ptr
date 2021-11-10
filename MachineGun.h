//#ifndef WEAPON_H_INCLUDED
//#define WEAPON_H_INCLUDED

#ifndef _MACHINE_GUN_H
#define _MACHINE_GUN_H

#include "Weapon.h"

//#endif

class MachineGun : public Weapon 
{
  public:
    MachineGun();
    ~MachineGun();

    void GetShot() override;
};

#endif