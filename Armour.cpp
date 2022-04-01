#include "Armour.h"

//------------------------------------------------------------------------------
Armour::Armour()
    :Item("Armour", false), // There should be something simliar in Consumable.cpp
     material(),
     modifier()
{
    this->durability    = 0;
    this->defense       = 0;
    this->modifierLevel = 1;
}

//------------------------------------------------------------------------------
void Armour::display(std::ostream& outs) const
{
    // Implement this function
}

//------------------------------------------------------------------------------
void Armour::read(std::istream& ins)
{
    // Implement this function
}

//------------------------------------------------------------------------------
Item* Armour::clone() const
{
    // Implement this function
    return nullptr; // remove this line
}

