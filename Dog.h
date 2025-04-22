#pragma once
#include "Animal.h"
class ADog :
    public AAnimal
{
public:

    ADog();
    virtual ~ADog();

    virtual void Speak() override;
};

