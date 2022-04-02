#include "Consumable.h"

//------------------------------------------------------------------------------
Consumable::Consumable()
:Item("Consumable", true),
effect()
{
    uses = 0;
}

//------------------------------------------------------------------------------
// Add the definition for this function
void Consumable::display(std::ostream& outs) const
{
    outs << "  Nme: " << name   << std::endl;
    outs << "  Eft: " << effect << std::endl;
    outs << "  Use: " << uses   << std::endl;
}

//------------------------------------------------------------------------------
// Add the definition for this function
void Consumable::read(std::istream& ins)
{
    ins >> this->name;
    ins >> this->effect;
    ins >> this->uses;
}


//------------------------------------------------------------------------------
// Add the definition for this function
Item* Consumable::clone() const
{
    return new Consumable(*this);
}
