#include "Armour.h"

//------------------------------------------------------------------------------
Armour::Armour()
    :Item("Armour", false), // There should be something simliar in Consumable.cpp
     material(),
     modifier(),
     element()
{
    this->durability    = 0;
    this->defense       = 0;
    this->modifierLevel = 1;
}

//------------------------------------------------------------------------------
void Armour::display(std::ostream& outs) const
{
    // Implement this function
    outs << "  Nme: " << name       << std::endl;
    outs << "  Dur: " << durability << std::endl;
    outs << "  Def: " << defense    << std::endl;
    outs << "  Mtl: " << material   << std::endl;
    outs << "  Mdr: " << modifier   << " (Lvl " << modifierLevel << ")" << std::endl;
    outs << "  Emt: " << element    << std::endl;
}

//------------------------------------------------------------------------------
void Armour::read(std::istream& ins)
{
    // Implement this function
    ins >> this->name;
    ins >> this->material;
    ins >> this->durability;
    ins >> this->defense;
    ins >> this->modifier;
    ins >> this->modifierLevel;
    ins >> this->element;
}

//------------------------------------------------------------------------------
Item* Armour::clone() const
{
    // Implement this function
    return new Armour(*this);
}

