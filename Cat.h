#pragma once
#include "Animal.h"
class ACat :
    public AAnimal
{
public:

    ACat();
    virtual ~ACat();

    virtual void Speak() override;
};

