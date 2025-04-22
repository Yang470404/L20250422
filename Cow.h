#pragma once
#include "Animal.h"
class ACow :
    public AAnimal
{
public:

    ACow();
    virtual ~ACow();

    virtual void Speak() override;

};

